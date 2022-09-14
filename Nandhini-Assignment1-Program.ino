#include<Servo.h>
Servo s;
void setup()
{
  
  pinMode(2,INPUT);
  Serial.begin(9600);
  pinMode(12,OUTPUT);
  
  pinMode(12,OUTPUT);
  Serial.begin(9600);
  
  pinMode(8,OUTPUT);
  
  s.attach(9);

}
  
 void loop()
  
{
  
  int b = analogRead(A0);
  if(b >=300)
  tone(8,1000,500);
  delay(1000);
  noTone(8);
  delay(1000);
  
  
  if(b>=300)
  digitalWrite(12,HIGH);
  delay(1000);  
  digitalWrite(12,LOW);
  delay(1000);
  
  if(b>=300)
  for( int i=0;i<=180;i++)
    s.write(i);   
  for( int i=180;i>=0;i--)
    s.write(i);
   
   
  int a =digitalRead(0);
  if(a==0)
  digitalWrite(12,HIGH);
  else
  digitalWrite(12,LOW);
  delay(1000);
  
  if(a==0)
  tone(8,1000,500); 
  delay(1000);
  noTone(8);
   
  if (a==0)
  for( int i=30;i<=180;i++)
    s.write(i);   
  for( int i=180;i>=30;i--)
    s.write(i);

}
   
   
   
   
   
   
   
   
   
   
  
  