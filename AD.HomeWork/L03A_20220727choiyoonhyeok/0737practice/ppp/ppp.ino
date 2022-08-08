const int L1 = 5;
const int L2 = 6;
const int L3 = 7;
const int sw = 10;

void setup()
{
  for(int i=5; i<=7; i++) {
    pinMode(L1, OUTPUT);
    pinMode(L2, OUTPUT);
    pinMode(L3, OUTPUT);
  }
  pinMode(sw, INPUT);

}

unsigned long previousMillis =0;

void loop(){
  int NUM = 5;   //void Loop 지역변수 선언, 초기화 설정

unsigned long currentMillis =millis();
if(currentMillis - previousMillis >= 1000)
{
  previousMillis = currentMillis;
  
  do {
    if(NUM <= 8) {
     digitalWrite(NUM, HIGH);
      NUM++;
      
    }
    else { 
      digitalWrite(5, LOW); 
      digitalWrite(6, LOW); 
      digitalWrite(7, LOW); 
      NUM = 5;  //변수 초기화
      
    }
  } while(digitalRead(2)== 0);  //왼쪽에서 오른쪽으로 켜지는 반복문
  
  do {
    if(NUM >= 5) {
     digitalWrite(NUM, HIGH);
      NUM--;
      
    }
    else {
      digitalWrite(5, LOW); 
      digitalWrite(6, LOW); 
      digitalWrite(7, LOW); 
      NUM = 7;  //변수 초기화
      
    }
  } while(digitalRead(2)== 1);  //오른쪽에서 왼쪽으로 켜지는 반복문
}
}
