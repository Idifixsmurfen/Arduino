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
 //öppnar spotify, kan modifieras för att öppna alla program
  if (digitalRead(A) == LOW)
  {Keyboard.press(KEY_LEFT_GUI);
  delay(50);
  Keyboard.release(KEY_LEFT_GUI);
  delay(250);
  Keyboard.print("spotify");
  delay(250);
  Keyboard.press(KEY_RETURN);
  // openProgram("spotify")
}

  //öppnar geforce now
  if (digitalRead(B) == LOW)
  {Keyboard.press(KEY_LEFT_GUI);
  delay(50);
  Keyboard.release(KEY_LEFT_GUI);
  delay(250);
  Keyboard.print("geforce now");
  delay(250);
  Keyboard.press(KEY_RETURN);}  

  //öppnar mtg Arena
  if (digitalRead(C) == LOW)
  {Keyboard.press(KEY_LEFT_GUI);
  delay(50);
  Keyboard.release(KEY_LEFT_GUI);
  delay(250);
  Keyboard.print("mtg arena");
  delay(250);
  Keyboard.press(KEY_RETURN);}

  //alt f4
   if (digitalRead(D) == LOW)
  {Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  delay(250);}

  //ALT tab
  if (digitalRead(E) == LOW)
  {Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_TAB);  
delay(500);}
 
  
  //Ubisoft login
  if (digitalRead(F) == LOW)
  {Keyboard.print("wdetho01");
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);    //Samma som alt gr
  Keyboard.press('2');
  Keyboard.release(KEY_LEFT_CTRL);
  Keyboard.release(KEY_LEFT_ALT);
  Keyboard.print("gmail.com");
  delay (100);
  Keyboard.press(KEY_TAB);
  Keyboard.print("Idifix03");
  delay(100);
  Keyboard.press(KEY_RETURN);
  delay(1000);}

  
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
  {Keyboard.print("030718");
 delay (1000);}
  
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
