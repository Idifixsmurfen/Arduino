#include <Keyboard.h>

void setup()
{
  Keyboard.begin()
}

void loop()
{
  if(digitalRead(2) == HIGH)
{triggerAutomation();
}
}

void triggerAutomation()
{
  Keyboard.press('r');
}
