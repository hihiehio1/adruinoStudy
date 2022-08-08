int Pin = A0;    // 가변저항(아날로그) : A0
int sensorValue = 0;  // 아날로그 센서 값 변수
 
void setup() {
  pinMode(5, OUTPUT);// 빨강 LED 출력모드 설정
  pinMode(6, OUTPUT);// 파강 LED 출력모드 설정
  pinMode(7, OUTPUT);// 노강 LED 출력모드 설정
}
 
void loop() {
  sensorValue = analogRead(Pin); 
  // 아날로그 센서 값 읽어서 변수에 저장
 
  digitalWrite(5, HIGH); 
  delay(sensorValue);
  digitalWrite(5, LOW);
  delay(sensorValue); 

  digitalWrite(6, HIGH); 
  delay(sensorValue); 
  digitalWrite(6, LOW); 
  delay(sensorValue); 

  digitalWrite(7, HIGH); 
  delay(sensorValue); 
  digitalWrite(7, LOW); 
  delay(sensorValue); 
}
