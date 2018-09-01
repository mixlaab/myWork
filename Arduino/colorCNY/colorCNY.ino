#define frontal A2
#define rear A3
#define left A4
#define right A5
int val;

void setup() {
  Serial.begin(9600);// put your setup code here, to run once:
}

void loop() {
  val = analogRead(rear);
  Serial.println(val);
  delay(200);
}
