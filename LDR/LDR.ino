const int lamp=7;
boolean x=true;

void setup() 
{
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(lamp,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int c=analogRead(A0);
Serial.println(c);
delay(500);
if(c<300&&x==true)
{
digitalWrite(7,HIGH);
x=false;
delay(1000);
}
else if(c>300&&x==false)
{
x=true;
digitalWrite(7,LOW);
delay(1000);
}
Serial.print("c=");
Serial.print(c);

}
