int pin_ldr = 0;
void setup() {
   Serial.begin(9600);
}

void loop() {
  int analog_val = analogRead(pin_ldr);
  Serial.print("Sensor de luz ");
  Serial.println(analog_val);
  delay(100);
}
