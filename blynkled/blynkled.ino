#include <Blynk.h>

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
int relayInput=2;
char
char
char
void setup() {
  // put your setup code here, to run once:
pinMode(relayInput,OUTPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(relayInput,HIGH);
delay(1000);
digitalWrite(relayInput,LOW);
delay(1000);
Blynk
}
