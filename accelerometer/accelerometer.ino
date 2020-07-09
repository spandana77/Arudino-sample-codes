#include <Wire.h>
const int MPU=0x68;
int16_t Acx,Acy,Acz,Temp,GyX,GyY,GyZ;

void setup() 
{
  Wire.begin();
 Wire.beginTransmission(MPU);
 Wire.write(0x6C);
 Wire.write(0);
 Wire.endTransmission(true);
 Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  {
 Wire.beginTransmission(MPU);
 Wire.write(0x3B);
 Wire.endTransmission(false);
 Wire.requestFrom(MPU,12,true);
Acx=Wire.read()<<8|Wire.read();
Acy=Wire.read()<<8|Wire.read();
Acz=Wire.read()<<8|Wire.read();
GyX=Wire.read()<<8|Wire.read();
GyY=Wire.read()<<8|Wire.read();
GyZ=Wire.read()<<8|Wire.read();
Serial.print("Acceleration");
Serial.print("x=");Serial.print(Acx);
Serial.print("|y=");Serial.print(Acy);
Serial.print("|z=");Serial.println(Acz);
Serial.print("Gyroscope:");
Serial.print("x=");Serial.print(GyX);
Serial.print("|y=");Serial.print(GyY);
Serial.print("|z=");Serial.println(GyZ);
Serial.print("");
delay(333);

}
}
