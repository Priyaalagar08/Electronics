int value = 0;
int direction = 1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(value);
  value = value + direction;
  if (value >= 5) {
    direction = -1;
  }
  if (value <= 0) {
    direction = 1;
  }
  delay(20);
}