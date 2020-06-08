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
#define K 14
#define L 15
#define M A3
#define N A0
#define O A1
#define P A2

#define Q 1
#define R 0

//A3 är ledig


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
  pinMode (K, INPUT_PULLUP); 
  pinMode (L, INPUT_PULLUP); 
  pinMode (M, INPUT_PULLUP); 
  pinMode (N, INPUT_PULLUP); 
  pinMode (O, INPUT_PULLUP); 
  pinMode (P, INPUT_PULLUP);
  
  pinMode (Q, INPUT_PULLUP);
  pinMode (R, INPUT_PULLUP);

  //bool ShiftToggle = false;
 
  


  Keyboard.begin();
  Serial.begin(9600);
}
 int Marcusbloja = 1;
void loop() {

//Q är av
 if (digitalRead(Q) == LOW)

//R är av
//AV AV 
 {if (digitalRead(R) == LOW)
  {if (digitalRead(A) == LOW)
  {Keyboard.press('l');}
  if (digitalRead(B) == LOW)
  {Keyboard.press('ä');}  
  if (digitalRead(C) == LOW)
  {Keyboard.press('å');}
   if (digitalRead(L) == LOW)
  {Keyboard.press('d');}
  if (digitalRead(E) == LOW)
  {Keyboard.press('5');}  
  if (digitalRead(F) == LOW)
  {Keyboard.press('6');}
   if (digitalRead(G) == LOW)
  {Keyboard.press('7');}
  if (digitalRead(H) == LOW)
  {Keyboard.press('8');}  
  if (digitalRead(I) == LOW)
  {Keyboard.press('9');}
  if (digitalRead(J) == LOW)
  {Keyboard.press('0');} 
  if (digitalRead(K) == LOW)
  {Keyboard.press('6');}
  
   
  if (digitalRead(D) == LOW)
   { if (Marcusbloja == 1)
    {Keyboard.press(KEY_LEFT_SHIFT);}
    else {Keyboard.release(KEY_LEFT_SHIFT);}
    }
 
  
  if (digitalRead(M) == LOW)
  {Keyboard.press('8');}  
  if (digitalRead(N) == LOW)
  {Keyboard.press('9');}
  if (digitalRead(O) == LOW)
  {Keyboard.press('0');}
  if (digitalRead(P) == LOW)
  {Keyboard.press('0');}}

//R är på
//AV PÅ
  if (digitalRead(R) == HIGH)
    {if (digitalRead(A) == LOW)
  {Keyboard.press('1');}
  if (digitalRead(B) == LOW)
  {Keyboard.press('2');}  
  if (digitalRead(C) == LOW)
  {Keyboard.press('3');}
  if (digitalRead(D) == LOW)
   { if (Marcusbloja == 1)
    {Keyboard.press(KEY_LEFT_SHIFT);}
    else {Keyboard.release(KEY_LEFT_SHIFT);}
    }
  if (digitalRead(E) == LOW)
  {Keyboard.press('5');}  
  if (digitalRead(F) == LOW)
  {Keyboard.press('6');}
   if (digitalRead(G) == LOW)
  {Keyboard.press('7');}
  if (digitalRead(H) == LOW)
  {Keyboard.press('8');}  
  if (digitalRead(I) == LOW)
  {Keyboard.press('9');}
  if (digitalRead(J) == LOW)
  {Keyboard.press('0');} 
  if (digitalRead(K) == LOW)
  {Keyboard.press('6');}
   if (digitalRead(L) == LOW)
  {Keyboard.press('7');}
  if (digitalRead(M) == LOW)
  {Keyboard.press('8');}  
  if (digitalRead(N) == LOW)
  {Keyboard.press('9');}
  if (digitalRead(O) == LOW)
  {Keyboard.press('0');}
  if (digitalRead(P) == LOW)
  {Keyboard.press('0');}}}


  //Q är på
   if (digitalRead(Q) == HIGH)
   
 //R är av
 //PÅ AV
 {if (digitalRead(R) == LOW)
  {if (digitalRead(A) == LOW)
  {Keyboard.press('y');}
  if (digitalRead(B) == LOW)
  {Keyboard.press('ä');}  
  if (digitalRead(C) == LOW)
  {Keyboard.press('å');}
   if (digitalRead(D) == LOW)
  {Keyboard.press('d');}
  if (digitalRead(E) == LOW)
  {Keyboard.press('5');}  
  if (digitalRead(F) == LOW)
  {Keyboard.press('6');}
   if (digitalRead(G) == LOW)
  {Keyboard.press('7');}
  if (digitalRead(H) == LOW)
  {Keyboard.press('8');}  
  if (digitalRead(I) == LOW)
  {Keyboard.press('9');}
  if (digitalRead(J) == LOW)
  {Keyboard.press('0');} 
  if (digitalRead(K) == LOW)
  {Keyboard.press('6');}
   if (digitalRead(L) == LOW)
  {Keyboard.press('7');}
  if (digitalRead(M) == LOW)
  {Keyboard.press('8');}  
  if (digitalRead(N) == LOW)
  {Keyboard.press('9');}
  if (digitalRead(O) == LOW)
  {Keyboard.press('0');}
  if (digitalRead(P) == LOW)
  {Keyboard.press('0');}}

//R är på
//PÅ PÅ
  if (digitalRead(R) == HIGH)
    {if (digitalRead(A) == LOW)
  {Keyboard.press('k');}
  if (digitalRead(B) == LOW)
  {Keyboard.press('2');}  
  if (digitalRead(C) == LOW)
  {Keyboard.press('3');}
  
   {Keyboard.press(KEY_LEFT_SHIFT);
  if (digitalRead(D) == LOW)
   { if (Marcusbloja == 1)
   
    Marcusbloja = 2;}
    else {Keyboard.release(KEY_LEFT_SHIFT);
    Marcusbloja = 1;}
    }
  
  if (digitalRead(E) == LOW)
  {Keyboard.press('5');}  
  if (digitalRead(F) == LOW)
  {Keyboard.press('6');}
   if (digitalRead(G) == LOW)
  {Keyboard.press('7');}
  if (digitalRead(H) == LOW)
  {Keyboard.press('8');}  
  if (digitalRead(I) == LOW)
  {Keyboard.press('9');}
  if (digitalRead(J) == LOW)
  {Keyboard.press('0');} 
  if (digitalRead(K) == LOW)
  {Keyboard.press('6');}
   if (digitalRead(L) == LOW)
  {Keyboard.press('7');}
  if (digitalRead(M) == LOW)
  {Keyboard.press('8');}  
  if (digitalRead(N) == LOW)
  {Keyboard.press('9');}
  if (digitalRead(O) == LOW)
  {Keyboard.press('0');}
  if (digitalRead(P) == LOW)
  {Keyboard.press('0');}}}
 
  
  if (digitalRead(A) == HIGH)
  if (digitalRead(B) == HIGH)
  if (digitalRead(C) == HIGH)
  //if (digitalRead(D) == HIGH)
  if (digitalRead(E) == HIGH)
  if (digitalRead(F) == HIGH)
  if (digitalRead(G) == HIGH)
  if (digitalRead(H) == HIGH)
  if (digitalRead(I) == HIGH)  
  if (digitalRead(J) == HIGH)
  if (digitalRead(K) == HIGH)
  if (digitalRead(L) == HIGH)
  if (digitalRead(M) == HIGH)
  if (digitalRead(N) == HIGH)
  if (digitalRead(O) == HIGH)  
  if (digitalRead(P) == HIGH)
  //if (digitalRead(Q) == HIGH)

{Keyboard.releaseAll();}


}
