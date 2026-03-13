// Reaction Time Tester

int ledPin = 8;
int buttonPin = 2;

int greenLed =9;
int yellowLed=10;
int redLed=11;

bool waitingForReaction= false;
unsigned long startTime;
unsigned long pressTime;
unsigned long reactionTime;

int randomDelay;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
  
  // for reaction rating
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  
 
}

void loop()
{
  digitalWrite(ledPin, LOW);// led off initially 
 
  delay(randomDelay=random(2000,5000));// led waits for a random time 

  digitalWrite(ledPin, HIGH); // led turns on 

  startTime = millis(); //recording reaction time 
  waitingForReaction= true;

  // Wait for player to press the button
  while (waitingForReaction) {
    if (digitalRead(buttonPin) == HIGH) {
      reactionTime = millis() - startTime;
      Serial.print("Your reaction time: ");
      Serial.print(reactionTime);
      Serial.println(" ms");
      waitingForReaction = false;
    }
  }
  if (reactionTime < 250) {
  digitalWrite(greenLed, HIGH);   // green LED;
digitalWrite(yellowLed, LOW);
digitalWrite(redLed, LOW);
}
else if (reactionTime < 500) {
  digitalWrite(yellowLed, HIGH);  // yellow LED
  digitalWrite(greenLed, LOW);
digitalWrite(redLed, LOW);
}
else {
  digitalWrite(redLed, HIGH);  // red LED
  digitalWrite(greenLed, LOW);
digitalWrite(yellowLed, LOW);
}

  delay(2000);  // Pause before restarting
}
