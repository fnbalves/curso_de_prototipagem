int pin_pot = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  int analog_val = analogRead(pin_pot);
  Serial.print("Leitura ");
  Serial.println(analog_val, DEC);
}
