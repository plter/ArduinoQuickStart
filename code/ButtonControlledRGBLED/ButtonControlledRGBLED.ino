
int btnPin = 2;
int redPin = 10;
int greenPin = 9;
int bluePin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(btnPin,INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  Serial.begin(9600);
}

void light(int state){
  digitalWrite(redPin,state&1);
  digitalWrite(greenPin,state&2);
  digitalWrite(bluePin,state&4);
}

int ledState = 0;

void loop() {
  // put your main code here, to run repeatedly:
//  Serial.println(digitalRead(btnPin));
  if(digitalRead(btnPin)){
    ledState++;
    light(ledState%8);
    delay(300);
  }
}
