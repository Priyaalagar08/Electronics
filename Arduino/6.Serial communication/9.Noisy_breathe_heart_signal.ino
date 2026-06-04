float heartangle = 0;
float heartvalue = 0;
float breatheangle = 0;
float breathevalue = 0;

void setup(){
  Serial.begin(9600);

}
void loop(){
  heartvalue = sin(heartangle) * 50;
  breathevalue = sin(breatheangle) * 100; 
  float combined = heartvalue + breathevalue + random(-30,30);
  Serial.println(heartvalue);
  Serial.print(",");
  Serial.println(breathevalue);
  Serial.print(",");
  Serial.println(combined);
  heartangle = heartangle+0.5;
  breatheangle = breatheangle + 0.05;
  delay(20);
}
