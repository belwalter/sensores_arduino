#define water A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int liquid_level= analogRead(water);
  Serial.println(liquid_level);
  delay(1000);
}
