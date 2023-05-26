
#include<Servo.h>
Servo myservo;
char d;
int pos;
void setup() {
  
Serial.begin(9600);
pinMode(5,OUTPUT);
myservo.attach(9); 
  myservo.write(0);
}

void loop() {
if(Serial.available())
{
  d=Serial.read();
}
if(d=='a')
{
  Serial.print(d);
  delay(300);
  for(pos=0;pos<=90;pos+=3)
   { myservo.write(pos);
   delay(20);
   }
   delay(5000);
   for(pos=90;pos>=0;pos-=5)
   { 
   myservo.write(pos);
   delay(20);
   }
   }
   d="";

}
