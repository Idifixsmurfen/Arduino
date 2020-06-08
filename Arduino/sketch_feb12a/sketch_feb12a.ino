#include <Keyboard.h> // The main library for sending keystrokes.

void setup() 
{
 Keyboard.begin();  // Initialise the library.
}

// Loop around waiting for a button press on pin 2.
// When the button is pressed, go to the function triggerAutomation.
void loop() 
{


  if(digitalRead(2) == HIGH)
  {
   Keyboard.press('r');    
  }
}
