void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {

  for(int i=0;i<100;i++){
    if(i%2 == 0){
      Serial.println(i);
    }

    if(i >= 50){
      break;
    }
  }

  delay(20000);
}
