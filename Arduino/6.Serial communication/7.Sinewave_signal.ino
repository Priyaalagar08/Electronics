float angle =0;
float sineValue =0;
void setup(){
  Serial.begin(9600);
}
void loop(){
  sineValue = sin(angle)*100;
  Serial.println(sineValue);
  angle = angle+1;
  delay(20);
}
