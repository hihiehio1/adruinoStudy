void setup() {
Serial.begin(9600);
}

void loop() {
int cdsValue = analogRead(A1);
Serial.println(cdsValue);
delay(500);
}
