
int btnPin = 2;
int ledPin = 5;

int ledState = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(btnPin,INPUT);
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int btnState = digitalRead(btnPin);
//  if(btnState){
//    digitalWrite(ledPin,HIGH);
//  }else{
//    digitalWrite(ledPin,LOW);
//  }

  if(btnState){
    ledState = !ledState;
    digitalWrite(ledPin,ledState);
    delay(300);
  }
  
//  Serial.println(digitalRead(btnPin));
}
