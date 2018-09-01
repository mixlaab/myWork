#define sensor A1 // Sharp IR GP2Y0A41SK0F (4-30cm, analog)

void setup() {
  Serial.begin(9600); // start the serial port
}

void loop() {

  //Serial.println(analogRead(sensor));
  // 5v
  float volts = analogRead(sensor)*0.0048828125;  // value from sensor * (5/1024)
  float distance = 13*pow(volts, -1); // worked out from datasheet graph
  //delay(100); // slow down serial port 
  
  //if (distance <= 30){
    Serial.println(distance);   // print the distance
  //}
  delay(100);
}
