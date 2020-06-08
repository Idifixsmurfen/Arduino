
#include "Keyboard.h"

// change this to match your platform:


void setup() {
  // make pin 2 an input and turn on the pull-up resistor so it goes high unless
  // connected to ground:
  pinMode(2, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
 
{
  while (digitalRead(2) == HIGH) {
    // do nothing until pin 2 goes low
    delay(1);
  }
  delay(1);



      Keyboard.press('0');
      Keyboard.press('I');
      Keyboard.press('U');
      delay(1);
      Keyboard.releaseAll();
      
    
    
  }
  {
  while (digitalRead(2) == HIGH) {
    // do nothing until pin 2 goes low
    delay(1);
  }
  delay(1);



      Keyboard.press('0');
      Keyboard.press('I');
      Keyboard.press('U');
      delay(1);
      Keyboard.releaseAll();
      
    
    
  }}
  
