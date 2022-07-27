int i = 90;

void setup() {
  Serial.begin(9600);
}


void loop() 
 {
   Serial.write(i);

   Serial.println();
   Serial.print(i,BIN);
   Serial.println();
   
   Serial.print(i);
   Serial.println();
   
   Serial.println(i,HEX);
   Serial.println();
 
  if(i == 84)
  {
 while(true)
 {
  continue;
 }
  }
  i--;
 }
  
