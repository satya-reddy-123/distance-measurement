#include<SoftwareSerial.h>

const int trigPin = 12;
const int echoPin = 11;
long duration, inches,distance ;

void setup()
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.print("distance measurement");
  delay(1000);
}
void loop()
{
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  pinMode(echoPin,INPUT);
  duration = pulseIn(echoPin,HIGH);
  distance=duration*0.034/2;
  Serial.print("distance");
  Serial.print(distance);
  Serial.print("cm");
  delay(100);
  Serial.println();

}
