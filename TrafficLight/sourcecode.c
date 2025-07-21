//project 4 Traffic Light
//variables
int greenPin=5;
int orangePin=6;
int redPin=7;
int dtGreen=5000;
int dtOrange=2000;
int dtRed=5000;
int value;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenPin,OUTPUT);
  pinMode(orangePin,OUTPUT);
  pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(greenPin, HIGH);
 delay(dtGreen);

 digitalWrite(orangePin, HIGH);
 digitalWrite(greenPin, LOW);

 delay(dtOrange);
 
 digitalWrite(redPin, HIGH);
 digitalWrite(orangePin, LOW);

 delay(dtRed);
  digitalWrite(redPin, LOW);
}
