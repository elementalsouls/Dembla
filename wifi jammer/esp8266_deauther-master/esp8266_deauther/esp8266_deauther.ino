#include <Arduino.h>

#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

extern "C" {
  #include "user_interface.h"
}

#include "data.h"
#include "NameList.h"
#include "APScan.h"
#include "ClientScan.h"
#include "Attack.h"

const static char *ssid = "KILLER";
const static char *password = "ammierocks";

ESP8266WebServer server(80);


NameList nameList;

APScan apScan;
ClientScan clientScan;
Attack attack;

void sniffer(uint8_t *buf, uint16_t len){
  clientScan.packetSniffer(buf,len);
}

void startWifi(){
  WiFi.mode(WIFI_STA);
  wifi_set_promiscuous_rx_cb(sniffer);
  WiFi.softAP(ssid, password);
  Serial.println("SSID: "+(String)ssid);
  Serial.println("Password: "+(String)password);
}



void setup(){

  Serial.begin(115200);
  delay(2000);

  nameList.begin();
  //nameList.clear();
  nameList.load();

  Serial.println("");
  Serial.println("starting...");

  startWifi();
  attack.generate(-1);

  /* ========== Web Server ========== */

  /* HTML sites */
  server.onNotFound(load404);

  server.on("/", loadIndex);
  server.on("/index.html", loadIndex);
  server.on("/clients.html", loadClients);
  server.on("/attack.html", loadAttack);
  server.on("/functions.js", loadFunctionsJS);

  /* header links */
  server.on ("/style.css", loadStyle);

  /* JSON */
  server.on("/APScanResults.json", sendAPResults);
  server.on("/APScan.json", startAPScan);
  server.on("/APSelect.json", selectAP);
  server.on("/ClientScan.json", startClientScan);
  server.on("/ClientScanResults.json", sendClientResults);
  server.on("/clientSelect.json", selectClient);
  server.on("/setName.json", setClientName);
  server.on("/attackInfo.json", sendAttackInfo);
  server.on("/attackStart.json", startAttack);

  server.begin();
}

void loop(){
  if(clientScan.sniffing){
    if(clientScan.stop()){
      startWifi();
    }
  } else{
    server.handleClient();
    attack.run();
  }
}

void load404(){ server.send ( 200, "text/html", data_get404()); }
void loadIndex(){ server.send ( 200, "text/html", data_getIndexHTML() ); }
void loadClients(){ server.send ( 200, "text/html", data_getClientsHTML()); }
void loadAttack(){ server.send ( 200, "text/html", data_getAttackHTML() ); }
void loadFunctionsJS(){ server.send( 200, "text/javascript", data_getFunctionsJS() ); }
void loadStyle(){ server.send ( 200, "text/css", data_getStyle() ); }

//==========AP-Scan==========
void startAPScan(){ 
  if(apScan.start()){
    server.send ( 200, "text/json", "true");
    attack.stopAll();
  }
}

void sendAPResults(){ server.send ( 200, "text/json", apScan.getResults()); }

void selectAP(){
  if(server.hasArg("num")) {
    apScan.select(server.arg("num").toInt());
    server.send ( 200, "text/json", "true");
    attack.stopAll();
  }
}

//==========Client-Scan==========
void startClientScan(){
  if(server.hasArg("time") && apScan.selected > -1 && !clientScan.sniffing) {
    server.send(200, "text/json", "true");
    clientScan.start(server.arg("time").toInt());
    attack.stop(0);
  } else server.send ( 200, "text/json", "false");
}

void sendClientResults(){ server.send( 200, "text/json", clientScan.getResults()); }

void selectClient(){
  if(server.hasArg("num")) {
    clientScan.select(server.arg("num").toInt());
    attack.stop(0);
    server.send ( 200, "text/json", "true");
  }
}

void setClientName(){
  if(server.hasArg("id") && server.hasArg("name")) {
    nameList.add(clientScan.getClientMac(server.arg("id").toInt()),server.arg("name"));
    server.send ( 200, "text/json", "true");
  }
}

//==========Attack==========
void sendAttackInfo(){ server.send ( 200, "text/json", attack.getResults()); }

void startAttack(){
  if(server.hasArg("num") && apScan.selected > -1) {
    
    attack.start(server.arg("num").toInt());
    server.send ( 200, "text/json", "true");
  }
}
