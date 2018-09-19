void setup() {
  Serial.begin(9600);
}

void loop() {
//  for(int i=0;i<100;i++){
//    Serial.print("Loop index: ");
//    Serial.println(i);
//  }

//  int i = 0;
//  while(i<100){
//    Serial.print("Loop index: ");
//    Serial.println(i);
//    i++;
//  }

//  int i = 0;
//  do{
//    Serial.print("Loop index:");
//    Serial.println(i);
//    i++;
//  }while(i<100);


  do{
    Serial.println("Hello arduino");
    int a = 10;
    Serial.println(a);
  }while(0);

  delay(3000);
}
