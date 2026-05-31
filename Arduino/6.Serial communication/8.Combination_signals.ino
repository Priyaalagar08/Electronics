float breathangle = 0;
float breathvalue =0;
float heartangle = 0;
float heartvalue = 0;

void setup(){
  Serial.begin(9600);
}

void loop(){
  breathvalue =sin(breathangle) *50;
  heartvalue = sin(heartangle) * 5;
  float combined = breathvalue + heartvalue;
  Serial.println(combined);
  breathangle = breathangle + 0.05;
  heartangle = heartangle + 0.5;
  delay(5);
}