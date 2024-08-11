const int Sesnsor_Pin = A4; // Sensor Pin
const int Fan_Pin = 7; // Fan Pin
const int RedLED = 10; // Red LED Pin
const int GreenLED = 11; // Green LED Pin

void setup() 
{
  pinMode(Sesnsor_Pin,INPUT);  // Sensor Pin as a INPUT
  pinMode(Fan_Pin,OUTPUT);  // Fan Pin as a OUTPUT
  pinMode(RedLED,OUTPUT);  // Red LED Pin as a OUTPUT
  pinMode(GreenLED,OUTPUT);  // Green LED Pin as a OUTPUT
}
void loop() 
{
  if(digitalRead(Sesnsor_Pin) == HIGH)  // If Sesnsor Detect the Smoke
  {
    digitalWrite(Fan_Pin,HIGH);  // Turn ON the Fan
    digitalWrite(RedLED,HIGH);  // Turn ON the Red LED
    digitalWrite(GreenLED,LOW);  // Turn OFF the Green LED
  }
  else
  {
    digitalWrite(Fan_Pin,LOW);  // Turn OFF the Fan
    digitalWrite(RedLED,LOW);  // Turn OF the Red LED
    digitalWrite(GreenLED,HIGH);  // Turn ON the Green LED
  }
}
