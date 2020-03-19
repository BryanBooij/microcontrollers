int rood1 = 2;
int rood2 = 6;
int geel1 = 3;
int geel2 = 5;
int groen = 4;
int knop =  8;

void setup() {
  
  pinMode(rood1, OUTPUT);
  pinMode(rood2, OUTPUT);
  pinMode(geel1, OUTPUT);
  pinMode(geel2, OUTPUT);
  pinMode(groen, OUTPUT);
  pinMode(knop, OUTPUT);

}

void loop() {

oneAfterAnotherNoLoop(); 
}

void oneAfterAnotherNoLoop()

{
int delayTime = 100; 

digitalWrite(ledPins[0], HIGH); //Turns on LED #0 (pin 2)
delay(delayTime); //wait delayTime milliseconds
digitalWrite(ledPins[1], HIGH); //Turns on LED #1 (pin 3)
delay(delayTime); //wait delayTime milliseconds
digitalWrite(ledPins[2], HIGH); //Turns on LED #2 (pin 4)
delay(delayTime); //wait delayTime milliseconds
digitalWrite(ledPins[3], HIGH); //Turns on LED #3 (pin 5)
delay(delayTime); //wait delayTime milliseconds
digitalWrite(ledPins[4], HIGH); //Turns on LED #4 (pin 6)
delay(delayTime); //wait delayTime milliseconds
digitalWrite(ledPins[5], HIGH); //Turns on LED #5 (pin 7)
delay(delayTime); //wait delayTime milliseconds
digitalWrite(ledPins[6], HIGH); //Turns on LED #6 (pin 8)
delay(delayTime); //wait delayTime milliseconds
digitalWrite(ledPins[7], HIGH); //Turns on LED #7 (pin 9)
delay(delayTime); //wait delayTime milliseconds


digitalWrite(ledPins[7], LOW); //Turn off LED #7 (pin 9)
delay(delayTime); //wait delayTime milliseconds
digitalWrite(ledPins[6], LOW); //Turn off LED #6 (pin 8)
delay(delayTime); //wait delayTime milliseconds
digitalWrite(ledPins[5], LOW); //Turn off LED #5 (pin 7)
delay(delayTime); //wait delayTime milliseconds
digitalWrite(ledPins[4], LOW); //Turn off LED #4 (pin 6)
delay(delayTime); //wait delayTime milliseconds
digitalWrite(ledPins[3], LOW); //Turn off LED #3 (pin 5)
delay(delayTime); //wait delayTime milliseconds
digitalWrite(ledPins[2], LOW); //Turn off LED #2 (pin 4)
delay(delayTime); //wait delayTime milliseconds
digitalWrite(ledPins[1], LOW); //Turn off LED #1 (pin 3)
delay(delayTime); //wait delayTime milliseconds
digitalWrite(ledPins[0], LOW); //Turn off LED #0 (pin 2)
delay(delayTime); //wait delayTime milliseconds

}
