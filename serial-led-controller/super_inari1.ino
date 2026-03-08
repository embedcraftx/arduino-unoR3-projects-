int redPin=12;
int greenPin=11;
int bluePin= 10;
String mycolor;
String msg ="What color LED do you want to turn on?";

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(msg);
  while (Serial.available()==0){
  }
  
  mycolor= Serial.readString();
  if(mycolor=="red" || mycolor=="RED"){
  digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,LOW);
    
  }
  
  if(mycolor =="green" || mycolor== "GREEN"){
  digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,LOW);
  }
  
   if(mycolor =="blue" || mycolor== "BLUE"){
  digitalWrite(redPin, LOW);
      digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,HIGH);
  }
  
 
  
}