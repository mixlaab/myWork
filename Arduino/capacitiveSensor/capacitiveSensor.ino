#include <CapacitiveSensor.h>

CapacitiveSensor azul = CapacitiveSensor(7, 8);
CapacitiveSensor rosa = CapacitiveSensor(9, 10);
CapacitiveSensor fosfo = CapacitiveSensor(11, 12);

void setup() {
  Serial.begin(9600);// put your setup code here, to run once:
}

void loop() {
  long lectura_a = azul.capacitiveSensor(30);
  long lectura_r = rosa.capacitiveSensor(30);
  long lectura_f = fosfo.capacitiveSensor(30);
  if (lectura_a > 1000) {
    Serial.println("Azul");
  }
  if (lectura_r > 1000) {
    Serial.println("Rosa");
  }
  if (lectura_f > 1000) {
    Serial.println("Fosfo");
  }
}
