int pin1=9;
int bright=60; // vary the range between 0 to 255 to see how it operated between 0 to 5 volts

void setup() {
  // put your setup code here, to run once:
  pinMode(pin1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(pin1,bright);

}
