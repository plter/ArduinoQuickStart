
int led = 9;


void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<=100;i++){
    analogWrite(led,i);
    delay(10);
  }
  for(int i=100;i>=0;i--){
    analogWrite(led,i);
    delay(10);
  }
}
