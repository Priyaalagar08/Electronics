float angle = 0;
float sinevalue = 0;
float noisyvalue = 0;
void setup(){
  Serial.begin(9600);

}
void loop(){
  sinevalue = sin(angle) * 100;
  noisyvalue = sinevalue + random(-30, 30);
  Serial.println(sinevalue);
  Serial.print(",");
  Serial.println(noisyvalue);
  angle = angle+0.05;
  delay(20);
}