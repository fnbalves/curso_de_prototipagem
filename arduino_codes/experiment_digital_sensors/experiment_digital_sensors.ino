int pin_button = 2;
int pin_key = 3;

void setup() {
  pinMode(pin_button, INPUT);
  pinMode(pin_key, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  int val_button = digitalRead(pin_button);
  int val_key = digitalRead(pin_key);

  if(val_button==0){
    Serial.println("APERTOU");
    delay(100);
  }

  if(val_key==1){
    Serial.println("PASSOU");
    delay(100);
  }
}
