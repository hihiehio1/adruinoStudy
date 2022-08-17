#include <MultiFuncShield.h>

/*

For more information and help, please visit https://www.cohesivecomputing.co.uk/hackatronics/arduino-multi-function-shield/part-1/

*/

void setup() 
{
  

  MFS.initialize();   
  MFS.beep();
  
  delay(1000);
  
  MFS.beep(5,5,4,3,50);
}

void loop() 
{
  

}
