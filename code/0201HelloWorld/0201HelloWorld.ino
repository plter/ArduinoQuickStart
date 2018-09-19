void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

int count = 0;

void loop() {
  // put your main code here, to run repeatedly:

  String str = "Count: ";
  str+=count;
  
  Serial.println(str);
  count++;
  delay(1000);
}
