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
 
  digitalWrite(5, HIGH); // 빨강 LED 켜짐
  delay(sensorValue); // 센서 값 초 기다림
  digitalWrite(5, LOW); //빨강 LED 꺼짐
  delay(sensorValue); // 센서 값 초 기다림

  digitalWrite(6, HIGH); // 빨강 LED 켜짐
  delay(sensorValue); // 센서 값 초 기다림
  digitalWrite(6, LOW); //빨강 LED 꺼짐
  delay(sensorValue); // 센서 값 초 기다림

  digitalWrite(7, HIGH); // 빨강 LED 켜짐
  delay(sensorValue); // 센서 값 초 기다림
  digitalWrite(7, LOW); //빨강 LED 꺼짐
  delay(sensorValue); // 센서 값 초 기다림
}
