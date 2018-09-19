void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void printArray(int* arr,int length){
  for(int i=0;i<length;i++){
    Serial.println(arr[i]);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
//  int length = 10;
//  int arr[length];
//  memset(arr,0,length*sizeof(int));
//  arr[0] = 1;
//  arr[1] = 3;
//
//  for(int i=0;i<length;i++){
//    Serial.println(arr[i]);
//  }

//  int arr[] = {1,3,5,6,2};
//  printArray(arr,5);

//  char str[] = {'H','e','l','l','o','\0'};
//  char str[] = "Hello";
//  Serial.println(strlen(str));
  char *str = "Hello";
  Serial.println(str);

  delay(10000);
}
