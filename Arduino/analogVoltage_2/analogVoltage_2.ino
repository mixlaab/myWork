int pot = 0;
int val;

void setup() {
  Serial.begin(9600);// put your setup code here, to run once:
}

void loop() {
  val = analogRead(pot);
  Serial.println(val);
}
