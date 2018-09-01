int in1 = 13;
int in2 = 12;
int in3 = 11;
int in4 = 10;

void setup() {
  Serial.begin(9600);// put your setup code here, to run once:
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
}

void loop() {
  digitalWrite(in1,LOW);// put your main code here, to run repeatedly:
  digitalWrite(in2,HIGH);// put your main code here, to run repeatedly:
  digitalWrite(in3,LOW);// put your main code here, to run repeatedly:
  digitalWrite(in4,HIGH);// put your main code here, to run repeatedly:
  delay(1000);
  digitalWrite(in1,HIGH);// put your main code here, to run repeatedly:
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);// put your main code here, to run repeatedly:
  digitalWrite(in4,LOW);
  delay(1000);
}
