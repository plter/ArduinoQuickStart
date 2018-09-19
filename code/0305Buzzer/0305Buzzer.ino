
int buzzerPin = 3;

void n(int hz,int duration){
  tone(buzzerPin,hz);
  delay(150);
  noTone(buzzerPin);
  delay(duration);
}

void n1(int duration){
  n(261,duration);
}

void n2(int duration){
  n(293,duration);
}

void n3(int duration){
  n(329,duration);
}

void n4(int duration){
  n(349,duration);
}

void n5(int duration){
  n(392,duration);
}

void n6(int duration){
  n(440,duration);
}

void n7(int duration){
  n(493,duration);
}


void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//  tone(buzzerPin,1000);
//  delay(100);
//  noTone(buzzerPin);
//  delay(100);
//  tone(buzzerPin,1000);
//  delay(100);
//  noTone(buzzerPin);
//  delay(1000);

  n3(200);
  n3(200);
  n4(200);
  n5(200);
  n5(200);
  n4(200);
  n3(200);
  n2(200);
  n1(200);
  n1(200);
  n2(200);
  n3(200);
  n3(300);
  n2(100);
  n2(400);

  delay(2000);
}
