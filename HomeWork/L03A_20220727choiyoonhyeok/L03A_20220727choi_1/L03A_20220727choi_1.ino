// L1,L2가 1초간격으로 점멸. 스위치 누르면 L3 점멸 (누르는 동안)
// L1 = 101010101010
// L2 = 010101010101
// L3 = 000011110000
// sw = ____1111____
// 1 = ON / 0= OFF

const int L1 = 5;
const int L2 = 6;
const int L3 = 7;
const int sw = 10;

int i = 0;
int ledState1 = LOW;
int ledState2 = LOW;
int ledState3 = LOW;

unsigned long previousMillis =0;

void setup() {

pinMode(L1,OUTPUT);
pinMode(L2,OUTPUT);
pinMode(L3,OUTPUT);
pinMode(sw,INPUT); 

}

void loop() {

unsigned long currentMillis =millis();
if(currentMillis - previousMillis >= 1000)
{
  previousMillis = currentMillis;
  
  if(ledState1 == LOW)
  {
    ledState1=HIGH;
    ledState2=LOW;
    ledState3=LOW;
  }
  else if
  {
    ledState1=LOW;
    ledState2=HIGH;
    ledState3=LOW;
  }
  digitalWrite(L1,ledState1);
  digitalWrite(L2,ledState2);
}
// L1 L2 점멸


if(digitalRead(sw)==HIGH)
{ 
  digitalWrite(L3,(i%3)==2);
}
else
{
  digitalWrite(L3,LOW);
}
i++;
}
// L3 점멸
