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

  delay(400);

  Keyboard.print("chrome.exe");

  delay(400);

  typeKey(KEY_RETURN);

  delay(2000);

  Keyboard.print("chrome://settings/passwords");

  typeKey(KEY_RETURN);

  delay(2000);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
