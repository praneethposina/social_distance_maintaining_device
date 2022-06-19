const int trigPin = 9;
const int echoPin = 10;
long duration;
int distanceCm, distanceInch; 
void setup()
{
Serial.begin(9600);
pinMode (trigPin, OUTPUT); 
pinMode (echoPin, INPUT);
pinMode (11, OUTPUT); 
pinMode (12, OUTPUT);
}
void loop() {
digitalWrite(trigpin, LOW);
delayMicroseconds(2);
digitalWrite(trigpin, HIGH); 
delayMicroseconds(2);
digitalWrite(trigPin, LOW);
duration = pulseIn (echopin, HIGH);
distanceCm = duration*0.034/2;
distanceInch = duration*0.0133/2;
Serial.println("Distance: ");
Serial.println(distanceCm);


if (distanceCm < 100)
{
  digitalWrite(11, HIGH); 
  digitalWrite(12, HIGH);
}
else
{
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
}
}
