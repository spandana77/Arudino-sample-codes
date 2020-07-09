const int led=7;
int state;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int state=Serial.read();
Serial.println(state);
switch(state)
{
  if(state>0)
  digitalWrite(led,HIGH);
  break;
  if(state<1)
  digitalWrite(led,LOW);
  break;
  }
}
