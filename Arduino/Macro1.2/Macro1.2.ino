#include <Keyboard.h>

#define A 10
#define B 2
#define C 3
#define D 4
#define E 5
#define F 6
#define G 7
#define H 8
#define I 9
#define J 16

void openProgram(String name) {
  }

void setup() {
  pinMode (A, INPUT_PULLUP); 
  pinMode (B, INPUT_PULLUP); 
  pinMode (C, INPUT_PULLUP); 
  pinMode (D, INPUT_PULLUP); 
  pinMode (E, INPUT_PULLUP); 
  pinMode (F, INPUT_PULLUP); 
  pinMode (G, INPUT_PULLUP); 
  pinMode (H, INPUT_PULLUP); 
  pinMode (I, INPUT_PULLUP); 
  pinMode (J, INPUT_PULLUP);


  Keyboard.begin();
  Serial.begin(9600);
}

void loop() {

  if (digitalRead(A) == LOW)
  {Keyboard.press('1');}


  if (digitalRead(B) == LOW)
  {Keyboard.press('2');}  

  
  if (digitalRead(C) == LOW)
  {Keyboard.press('3');}

   if (digitalRead(D) == LOW)
  {Keyboard.press('4');}

  //ALT tab
  if (digitalRead(E) == LOW)
  {Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_TAB);  
delay(500);}
 
  
  //Mammas telefonnummer
  if (digitalRead(F) == LOW)
  {Keyboard.write("070 002 11 50");}

  //Task manager
   if (digitalRead(G) == LOW)
  {Keyboard.press(KEY_LEFT_GUI);
  delay(50);
  Keyboard.release(KEY_LEFT_GUI);
  delay(250);
  Keyboard.print("task manager");
  delay(250);
  Keyboard.press(KEY_RETURN);}

    //Mammas mail
  if (digitalRead(H) == LOW)
 {Keyboard.print("anna.thorslund");
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);    //Samma som alt gr
  Keyboard.press('2');
  Keyboard.release(KEY_LEFT_CTRL);
  Keyboard.release(KEY_LEFT_ALT);
  Keyboard.print("sll.se");
  delay (1000);}  
  
  //Mammas lock screen
  if (digitalRead(I) == LOW)
  {Keyboard.press(KEY_LEFT_GUI);
  delay(500);
  Keyboard.press('l'); 
   delay (500);}
 
  
  //Min pin till datorn
  if (digitalRead(J) == LOW)
  {Keyboard.press('5');}
  
  if (digitalRead(A) == HIGH)
  if (digitalRead(B) == HIGH)
  if (digitalRead(C) == HIGH)
  if (digitalRead(D) == HIGH)
  if (digitalRead(E) == HIGH)
  if (digitalRead(F) == HIGH)
  if (digitalRead(G) == HIGH)
  if (digitalRead(H) == HIGH)
  if (digitalRead(I) == HIGH)  
  if (digitalRead(J) == HIGH)
  

{Keyboard.releaseAll();}


}
