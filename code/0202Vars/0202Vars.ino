void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = 1;
  int b = 2;
  int c = a+b*2;
  unsigned int d = 8;
  Serial.println(d);
  delay(10000);
}
