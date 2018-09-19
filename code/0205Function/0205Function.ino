void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

int add(int a,int b){
  return a+b;
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(add(8,2));  
  delay(10000);
}
