#include <OneWire.h>
#include <DallasTemperature.h>
#define ONE_WIRE_BUS 2

OneWire oneWire(ONE_WIRE_BUS);

DallasTemperature sensors(&oneWire);

const int L1 = 5;
const int L2 = 6;
const int L3 = 7;
const int sw = 10;
const int SW2 = 11;
const int SW3 = 12;
const int SW4 = 13;.

void setup() 
{
  sensors.begin();
  
  Serial.begin(9600);
  
  pinMode(L1,OUTPUT);
  pinMode(L2,OUTPUT);
  pinMode(L3,OUTPUT);
  pinMode(sw,INPUT); 
  pinMode(SW2, INPUT);
  pinMode(SW3, INPUT);
  pinMode(SW4, INPUT);

}

void loop(void)
{ 
  if(digitalRead(SW1)==LOW)
  {
  Serial.print("Requesting temperatures...");
  sensors.requestTemperatures(); 
  Serial.println("DONE");
  float tempC = sensors.getTempCByIndex(0);

  if(tempC != DEVICE_DISCONNECTED_C) 
  {
    Serial.print("Temperature is : ");
    Serial.println(tempC);
  } 
  else
  {
    Serial.println("Error : ");
  }
  delay(500);
  }
//온도

if(digitalRead(SW2)==LOW)
  {
    digitalWrite(LED1,HIGH);
    delay(delay_time);
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);
    delay(delay_time);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,HIGH);
    delay(delay_time);
    digitalWrite(LED3,LOW);
  }
//순차점멸

if(digitalRead(SW3)==LOW)
{
  int cdsValue = analogRead(A1);
  Serial.println(cdsValue);
  delay(500);
}
//조도

if(digitalRead(SW4)==LOW)
  {
    digitalWrite(LED3,HIGH);
    delay(delay_time);
    digitalWrite(LED3,LOW);
    digitalWrite(LED2,HIGH);
    delay(delay_time);
    digitalWrite(LED2,LOW);
    digitalWrite(LED1,HIGH);
    delay(delay_time);
    digitalWrite(LED1,LOW);
  }
}
