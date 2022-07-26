

int i =0;
void setup() 
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10,INPUT);
}

void loop() 
{
  if(digitalRead(10)==HIGH)
  {
  digitalWrite(5, HIGH); 
  digitalWrite(6, HIGH);  
  delay(1000);                       
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  
  digitalWrite(6, HIGH); 
  digitalWrite(7, HIGH);  
  delay(1000);                       
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);

  digitalWrite(7, HIGH); 
  digitalWrite(5, HIGH);  
  delay(1000);                       
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);  
  }
  i++;
 delay(500);                    
}
