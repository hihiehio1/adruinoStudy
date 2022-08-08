// L1,L2,L3 1초간격 점멸 (누르는 동안 역순)
// L1 = 1001001001010010010
// L2 = 0100100100100100100
// L3 = 0010010010001001001
// sw = ___________11111111

const int L1 = 5;
const int L2 = 6;
const int L3 = 7;
const int sw = 10;

int i = 0;
int ledState1 = LOW;
int ledState2 = LOW;
int ledState3 = LOW;

unsigned long previousMillis =0;

void setup() 
{
  pinMode(L1,OUTPUT);
  pinMode(L2,OUTPUT);
  pinMode(L3,OUTPUT);
  pinMode(sw,INPUT); 
}

void loop() 
{

unsigned long currentMillis =millis();
if(currentMillis - previousMillis >= 1000)
{
  previousMillis = currentMillis;
  
  if(ledState1 == LOW && ledState2 == LOW && ledState3 == LOW)
  {
    ledState1=HIGH;
    ledState2=LOW;
    ledState3=LOW;
  }
  else if(ledState1 == HIGH && ledState2 == LOW && ledState3 == LOW)
  {
    ledState1=LOW;
    ledState2=HIGH;
    ledState3=LOW;
  }
  else if(ledState1 == LOW && ledState2 == HIGH && ledState3 == LOW)
  {
    ledState1=LOW;
    ledState2=LOW;
    ledState3=HIGH;
  }
  else if(ledState1 == LOW && ledState2 == LOW && ledState3 == HIGH)
  {
    ledState1=HIGH;
    ledState2=LOW;
    ledState3=LOW;
  }
  else
  {
    ledState1=LOW;
    ledState2=LOW;
    ledState3=LOW;
  }
  digitalWrite(L1,ledState1);
  digitalWrite(L2,ledState2);
  digitalWrite(L3,ledState3);
}
// L1 L2 L3 점멸
if(digitalRead(sw)==HIGH)
{
if(currentMillis - previousMillis <= 1000)
{
  previousMillis = currentMillis;
  
  if(ledState1 == LOW && ledState2 == LOW && ledState3 == LOW)
  {
    ledState1=LOW;
    ledState2=LOW;
    ledState3=HIGH;
  }
  else if(ledState1 == LOW && ledState2 == LOW && ledState3 == HIGH)
  {
    ledState1=LOW;
    ledState2=HIGH;
    ledState3=LOW;
  }
  else if(ledState1 == LOW && ledState2 == HIGH && ledState3 == LOW)
  {
    ledState1=HIGH;
    ledState2=LOW;
    ledState3=LOW;
  }
  else if(ledState1 == HIGH && ledState2 == LOW && ledState3 == LOW)
  {
    ledState1=LOW;
    ledState2=LOW;
    ledState3=HIGH;
  }
  else
  {
    ledState1=LOW;
    ledState2=LOW;
    ledState3=LOW;
  }
  digitalWrite(L1,ledState1);
  digitalWrite(L2,ledState2);
  digitalWrite(L3,ledState3);
}
}

}

// L3 점멸   
