//Code made by Foster Phillips
//March-April 2018
//Created for Instuctables, username: FosterP
//Instagram: Lego_Rocket_08
//File Name: ArrowKeypad


#include <Mouse.h>
#include <Keyboard.h>

// Defining each pin, with a unique name
#define Hej 3
#define LUp 4
#define Up 5
#define RUp 6
#define Left 7
#define Down 8
#define Right 9
#define LedData 10
#define Switch 18
#define OLED_RESET 4
#define NumLed 6
boolean OledClear = true;


void setup() {
  // Telling the Arduino that the switches are inputs, and the Leds are output //
  pinMode (LUp, INPUT_PULLUP);
  pinMode (Up, INPUT_PULLUP);
  pinMode (RUp, INPUT_PULLUP);
  pinMode (Left, INPUT_PULLUP);
  pinMode (Down, INPUT_PULLUP);
  pinMode (Right, INPUT_PULLUP);
  pinMode (Switch, INPUT_PULLUP);
  pinMode (LedData, OUTPUT);
  pinMode (Hej, INPUT_PULLUP);
  //starting the strip
 

  Keyboard.begin();
  Mouse.begin();

  Serial.begin(9600);
 
}

void loop() {
  //First Layer Programming// //First Layer Programming// //First Layer Programming// //First Layer Programming//
  if (digitalRead(Switch) == HIGH)
  {
  
    //Boolean Checks to make sure that we haven't done this before//
    if (OledClear == true) {
  
    }
    //Up Arrow//
    if (digitalRead(Up) == LOW)
    {
      Keyboard.press(KEY_UP_ARROW);
    }
    if (digitalRead(Up) == HIGH)
    {
      Keyboard.release(KEY_UP_ARROW);
    }

    //Down Arrow//
    if (digitalRead(Down) == LOW)
    {
      Keyboard.press(KEY_DOWN_ARROW);
    }
    if (digitalRead(Down) == HIGH)
    {
      Keyboard.release(KEY_DOWN_ARROW);
    }

    //Right Arrow//
    if (digitalRead(Right) == LOW)
    {
      Keyboard.press(KEY_RIGHT_ARROW);
    }
    if (digitalRead(Right) == HIGH)
    {
      Keyboard.release(KEY_RIGHT_ARROW);
    }

    //Left Arrow//
    if (digitalRead(Left) == LOW)
    {
      Keyboard.press(KEY_LEFT_ARROW);
    }
    if (digitalRead(Left) == HIGH)
    {
      Keyboard.release(KEY_LEFT_ARROW);
    }

    //Top Right Button//
    if (digitalRead(RUp) == LOW)
    {
     Keyboard.press(KEY_LEFT_GUI);     // Press and hold the Windows key.
  Keyboard.press('r');              // Press and hold the 'r' key.
  delay(100);                       // Wait for the computer to register the press.
  Keyboard.releaseAll();            // Release both of the above keys.
  delay(1000);                      // Wait for the Windows Run Dialog to open.
  Keyboard.print("Notepad");        // Type "Notepad".
  Keyboard.press(KEY_RETURN);       // Press the Enter key.
  delay(100);                       // Wait for the computer to register the press.
  Keyboard.releaseAll();   
    }

    //Top Right Button//
    if (digitalRead(LUp) == LOW)
    {
      Keyboard.press('U');
    }
    if (digitalRead(LUp) == HIGH)
    {
      Keyboard.releaseAll();
    }
     if (digitalRead(Hej) == LOW)
    {
      Keyboard.print('H');   }
    if (digitalRead(Hej) == HIGH)
    {
      Keyboard.releaseAll();
    }
  }

  //Second Layer Programming// //Second Layer Programming// //Second Layer Programming// //Second Layer Programming// //Second Layer Programmed//

  else if (digitalRead(Switch) == LOW)
  {
  

    //Make sure that we aren't constantly clearing the display//
    if (OledClear == false)
    {
   
    }
    //Mouse Functions, first value is horizontal, second value is vertical//
    //Movement is by pixels (we have a small amount because it is contantly going)//
    if (digitalRead(Down) == LOW)
    {
      Mouse.move(0, 2);
    }
    if (digitalRead(Up) == LOW)
    {
      Mouse.move(0, -2);
    }
    if (digitalRead(Right) == LOW)
    {
      Mouse.move(2, 0);
    }
    if (digitalRead(Left) == LOW)
    {
      Mouse.move(-2, 0);
    }
    if (digitalRead(LUp) == LOW)
    {
      Mouse.click(MOUSE_LEFT);
      delay(250);
    }
    if (digitalRead(RUp) == LOW)
    {
      Mouse.click(MOUSE_RIGHT);
      delay(250);
    }
  }
}
