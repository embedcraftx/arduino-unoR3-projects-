int potPin=A1;
  int LEDpin=6;
int potVal;
float LEDVal;

void setup()
{
  pinMode(potPin, INPUT);
  pinMode(LEDpin, OUTPUT);
  Serial.begin(9600);
 
  
}

void loop()
{
  potVal= analogRead(potPin);
  LEDVal=(255./1023.)*potVal;
  analogWrite(LEDpin, LEDVal);
  Serial.print(LEDVal);
  
}