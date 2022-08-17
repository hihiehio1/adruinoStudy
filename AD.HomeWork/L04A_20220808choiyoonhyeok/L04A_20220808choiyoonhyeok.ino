#include <MultiFuncShield.h>

void setup() {
  
  Serial.begin(9600);
  MFS.initialize();    
}

int counter=0;

void loop() {
  // put your main code here, to run repeatedly:

  byte btn = MFS.getButton(); 
  
  if (btn)
  {
    byte buttonNumber = btn & B00111111;
    byte buttonAction = btn & B11000000;
    
    Serial.println("BUTTON_");
    Serial.write(buttonNumber + '0');
    Serial.print("_");
    
    if (btn == BUTTON_1_PRESSED)
    {
      MFS.write((int)counter);
      counter++;
    }
    else if (btn == BUTTON_1_SHORT_RELEASE)
    {
    MFS.write((int)counter);
    }
   ////1번 버튼
   
    if (btn == BUTTON_2_PRESSED)
    {
      MFS.write((int)counter);
      counter--;
    }
    else if (btn == BUTTON_2_SHORT_RELEASE)
    {
    MFS.write((int)counter);
    }
  ////2번 버튼
    if (btn == BUTTON_3_PRESSED)
  {
      MFS.write((int)counter);
      counter=0;
  }
    else if (btn == BUTTON_3_SHORT_RELEASE)
    {
    MFS.write((int)counter);
    }
    ////3번 버튼
  }
}
