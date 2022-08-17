#include <MultiFuncShield.h>
int count = 0;
void setup()
{
  Serial.begin(9600);
  MFS.initialize();
  MFS.write(0);
}

/* Main program */
void loop()
{
  byte buttonAction = MFS.getButton();
  
    if (buttonAction == BUTTON_1_SHORT_RELEASE)
    {
      count++;
      MFS.write(count);
    }
    else if (buttonAction == BUTTON_2_SHORT_RELEASE)
    {
      count--;
      MFS.write(count);
     
    }
    else if (buttonAction == BUTTON_3_SHORT_RELEASE)
    {
      count = 0;
      MFS.write(count);
      
    }
}
