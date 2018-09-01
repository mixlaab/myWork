#define sensorPin 1

int input = 0;
int distance = 0;

void setup() 
{ 
  Serial.begin(9600);
} 

void loop() 
{
  input = analogRead(sensorPin);
  distance = map(input,512,0,15,150);
  //Serial.println(distance);
  if (distance >= 50 && distance <= 100){
    Serial.println(distance);   // print the distance
  }
  delay(50);
}
