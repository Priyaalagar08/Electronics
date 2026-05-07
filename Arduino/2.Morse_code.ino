int led = 8;
int code1 = 250;
int code2 = 750;
int longwait = 2000;

void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH);
delay(code1);
digitalWrite(led,LOW);
delay(code1);

digitalWrite(led,HIGH);
delay(code1);
digitalWrite(led,LOW);
delay(code1);

digitalWrite(led,HIGH);
delay(code1);
digitalWrite(led,LOW);
delay(code1);

digitalWrite(led,HIGH);
delay(code2);
digitalWrite(led,LOW);
delay(code2);

digitalWrite(led,HIGH);
delay(code2);
digitalWrite(led,LOW);
delay(code2);

digitalWrite(led,HIGH);
delay(code2);
digitalWrite(led,LOW);
delay(code2);

digitalWrite(led,HIGH);
delay(code1);
digitalWrite(led,LOW);
delay(code1);

digitalWrite(led,HIGH);
delay(code1);
digitalWrite(led,LOW);
delay(code1);

digitalWrite(led,HIGH);
delay(code1);
digitalWrite(led,LOW);
delay(code1);

delay(longwait);

}
