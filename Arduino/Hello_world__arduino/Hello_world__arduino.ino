int ledPin = 10;
void setup() 
{
  pinMode(ledPin, OUTPUT) ;
}
  

void loop() 
{
  digitalWrite(ledPin, HIGH) ;
  delay(10) ;
  digitalWrite(ledPin, LOW) ;
  delay(100000) ;  
}
