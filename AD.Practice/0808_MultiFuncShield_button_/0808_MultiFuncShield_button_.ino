#include <MultiFuncShield.h>


void setup() 
{
  
  Serial.begin(9600);
  MFS.initialize();    
}


void loop()
{
  

  byte btn = MFS.getButton(); 
  
  if (btn)
  {
    byte buttonNumber = btn & B00111111;
    byte buttonAction = btn & B11000000;
    
    Serial.print("BUTTON_");
    Serial.write(buttonNumber + '0');
    Serial.print("_");
    
    if (buttonAction == BUTTON_PRESSED_IND)
    {
      Serial.println("PRESSED");
    }
    else if (buttonAction == BUTTON_SHORT_RELEASE_IND)
    {
      Serial.println("SHORT_RELEASE");
    }
    else if (buttonAction == BUTTON_LONG_PRESSED_IND)
    {
      Serial.println("LONG_PRESSED");
    }
    else if (buttonAction == BUTTON_LONG_RELEASE_IND)
    {
      Serial.println("LONG_RELEASE");
    }
  }
}
