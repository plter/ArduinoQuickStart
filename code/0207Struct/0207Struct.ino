void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

//struct Student{
//  int age;
//  char *name;
//};

typedef struct{
  int age;
  char *name;
} Student;

void loop() {
  // put your main code here, to run repeatedly:
//  struct Student s = {20,"XiaoYun"};
//  s.age = 10;
//  s.name = "XiaoYun";

  Student s = {12,"XiaoYun"};
//  Student s1 = s;
//  s1.age = 20;
  Student *s1 = &s;
  s1->age = 20;

  Serial.println(s.age);

  delay(50000);
}
