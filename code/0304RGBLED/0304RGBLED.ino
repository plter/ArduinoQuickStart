
int redPin = 6;
int greenPin = 5;
int bluePin = 4;

//001(Red),010(Green),100(Blue)
void light(int state){
   digitalWrite(redPin,state&1);
   digitalWrite(greenPin,state&2);
   digitalWrite(bluePin,state&4);
}


void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
}

int lightState = 0;

void loop() {
  // put your main code here, to run repeatedly:
  lightState++;

  light(lightState%8);
  delay(1000);
}
