
#include <Servo.h>
Servo Xservo;
Servo Yservo;

int Xpin=A0;
int Ypin= A1;
int Spin=2;
int buzzPin =7;
int XServopin=9;
int YServopin=10;
int WVx;
int WVy;
int Xval;
int Yval;
int Sval;
int dt=200;





void setup()
{
  pinMode(Xpin, INPUT);
    pinMode(Ypin, INPUT);
    pinMode(Spin, INPUT); 
    pinMode(XServopin, OUTPUT);
    pinMode(YServopin, OUTPUT);
    pinMode(buzzPin, OUTPUT);
  Xservo.attach(XServopin);
  Yservo.attach(YServopin);
  
  digitalWrite(Spin, HIGH);
  
  Serial.begin(9600);
  
  
}

void loop(){
  Xval=analogRead(Xpin);
  WVx=(180./1023.)*Xval;
  Yval=analogRead(Ypin);
  WVy=(180./1023.)*Yval;
  Sval=digitalRead(Spin);
  
  Xservo.write(WVx);
  Yservo.write(WVy);
  
  
  
  if (Sval==0){
  digitalWrite(buzzPin, HIGH);
  }
  else{
  digitalWrite(buzzPin, LOW);
  }
  delay(dt);
  
  Serial.print("X value is = ");
  Serial.print(WVx);
  Serial.print(" Y value is = ");
  Serial.print(WVy);
  Serial.print(" Switch state is = ");
  Serial.println(Sval);
}