// C++ code
//
int lightval;
int lightpin=A1;
int buzzpin =6;
int delaytime=300;

void setup()
{
  pinMode(lightpin,INPUT);
  pinMode(buzzpin,OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  lightval=analogRead(lightpin);
Serial.println(lightval);
  
  if(lightval<250){
    digitalWrite(buzzpin,HIGH);
  delay(200);
  digitalWrite(buzzpin,LOW);
  delay(200);
}

  else{
  digitalWrite(buzzpin,LOW);
  }
  delay(delaytime);
}
