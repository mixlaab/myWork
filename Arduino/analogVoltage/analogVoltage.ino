int boton = 9;
int estado;

void setup() {
  //int estado;
}

void loop() {
  estado = digitalRead(boton); 
  Serial.println(estado);
}
