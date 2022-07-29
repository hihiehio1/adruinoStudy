#include <Servo.h>

Servo xservo;
Servo yservo;

int x = A0;
int y = A1;

int xval = 0;
int yval = 0;

int xangle = 0;
int yangle = 0;

void setup() {

  xservo.attach(9);
  yservo.attach(10);

}



void loop() {
 
  xval = analogRead(x);            // reads the value of the potentiometer (value between 0 and 1023)

  yval = analogRead(y);

  xval = map(xval, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)

  yval = map(yval, 0, 1023, 0, 180);

  xservo.write(xval);

  yservo.write(yval);

  delay(15);

} 
