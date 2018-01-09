int pin_pot = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  int analog_val = analogRead(pin_pot);
  float a = 0.17734;
  float b = -0.70935;
  float angle = a*float(analog_val) + b;
  Serial.print("Angulo ");
  Serial.println(angle, DEC);
}
