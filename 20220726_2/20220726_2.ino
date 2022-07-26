int i =0;
void setup() 
{
 pinMode(5, OUTPUT); // 스위치는 입력신호!
 pinMode(6, OUTPUT);  // 스위치는 입력신호!
 pinMode(7, OUTPUT);
 pinMode(10,INPUT);

}

void loop()
{
 if(digitalRead(10)==HIGH)
 {
  digitalWrite(5, (i%3)==0);
  digitalWrite(6, (i%3)==1);
  digitalWrite(7, (i%3)==2);
 }
 else if(digitalRead(10)==LOW)
 {
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
 }
 i++;
 delay(500);
}                   
