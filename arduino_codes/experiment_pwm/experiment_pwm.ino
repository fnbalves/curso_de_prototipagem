int pin_pwm = 9;
void setup() {
  pinMode(pin_pwm, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  analogWrite(pin_pwm,200);
}
