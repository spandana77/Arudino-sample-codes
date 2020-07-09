const    int red=12;
const    int green=11;                                                                                                                                                                                       
const    int buzzer=10;
const    int pA0=A5;
const    int threshold=400;

void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(buzzer,OUTPUT);
pinMode(pA0,INPUT);
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
int analogsensor=analogRead(A5);
Serial.print("pA0");
Serial.println(analogsensor);
{
  if(analogsensor>analogRead)
  {
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
    tone(buzzer,1000,2000);
  }
  else
  {
   digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    noTone(buzzer); 
  }
}
}
