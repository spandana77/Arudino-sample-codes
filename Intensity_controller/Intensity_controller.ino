const int lamp=7;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(lamp,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int c=analogRead(A0);
delay(500);
{
  analogWrite(lamp,c);
  delay(10000);
}
}
