int led =12;
int sensor=2;
int state=LOW;
int val;


void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode(sensor, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
val=digitalRead(sensor);
if(val== HIGH)
{
  digitalWrite(led,HIGH);
  delay(100);
  if(state ==LOW){
  Serial.println("Motion detected");
  state=HIGH;}
}

else
{
  
  digitalWrite(led,LOW);
  delay(100);

  if(state== HIGH){
  Serial.println("Motion stoped");
 state =LOW;}
 }

}
