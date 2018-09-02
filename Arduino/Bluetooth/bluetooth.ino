/* Carro Inalambrico Bluetooth
 Dibujo de las conexiones en www.elprofegarcia.com
 
 ARDUINO   L293D(Puente H)        
 5          10
 6          15
 9          7
 10         2
 5V         1, 9, 16
 GND        4, 5, 12, 13
 
 El motor 1 se conecta a los pines 3 y 6 del Puente H
 El motor 2 se conecta a los pines 11 y 14 del Puente H
 
 La fuente de alimentacion de los Motores se conecta a tierra y
 el positivo al pin 8 del puennte H. 
 
 Conexion del Modulo Bluetooth HC-06 y el Arduino
 ARDUINO    Bluetooth HC-06 
 0 (RX)       TX
 1 (TX)       RX
 5V           VCC
 GND          GND
 !!Cuidado!! Las conexiones de TX y RX al modulo Bluetooth deben estar desconectadas
 en el momento que se realiza la carga del codigo (Sketch) al Arduino.
 
 Conexion Sensor Ultrasonido HC-SR04
 ARDUINO    Ultrasonido HC-SR04 
 2            Echo
 3            Trig
 5V           VCC
 GND          Gnd
 */

// Pines de HC-SR04
const int trigger = 11;
const int echo = 10;

// Motor A
const int ENA = 6; // Pin PWM
const int IN1 = 4;
const int IN2 = 5;

// Motor B
const int ENB = 9; // Pin PWM
const int IN3 = 7;
const int IN4 = 8;

//int izqA = 5; 
//int izqB = 6; 
//int derA = 9; 
//int derB = 10; 
//int vel = 255;            // Velocidad de los motores (0-255)

///
/// Fin de definición de pines
 
/// Estados de movimiento y velocidad
///
int dirActualA = 0; // 0->detenido, 1->avanza, -1->retrocede
int velActualA = 0;
int dirActualB = 0; // 0->detenido, 1->avanza, -1->retrocede
int velActualB = 0;
 
int VELOCIDAD_MAX = 255;
int VELOCIDAD_MIN = 200;
int VELOCIDAD_ARRANQUE = 255;
int VELOCIDAD_NORMAL = 240;

enum estados {
    detenido,
    avanzando,
    girando_izq,
    girando_der,
};
 
estados estadoActual = detenido;

int estado = 'g';         // inicia detenido

int duracion, distancia;  // para Calcular distacia

///RoboLucy
/// Fin de estados de movimiento y velocidad
 
///
float DISTANCIA_MAX = 450.0;
 
float distancia_anterior = 0.0;
///

void setup()  { 
  Serial.begin(9600);    // inicia el puerto serial para comunicacion con el Bluetooth
  // HC-SR04
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(13,OUTPUT);
} 

void loop()  { 

  if(Serial.available()>0){        // lee el bluetooth y almacena en estado
    estado = Serial.read();
  }

  avanzaA();
  avanzaB();
  setVelocidadAB(255);
  Serial.println("Avanza");
  
  if(estado=='a'){           // Boton desplazar al Frente
    avanzaA();
    avanzaB();
    setVelocidadAB(255);
    Serial.println("Avanza");
  }
  if(estado=='b'){          // Boton IZQ 
    antirotar();
    setVelocidadAB(255);
    Serial.println("Rota IZQ");
  }
  if(estado=='c'){         // Boton Parar
    detenerAB();
    Serial.println("Detiene");
  }
  if(estado=='d'){          // Boton DER
    rotar();
    setVelocidadAB(255);
    Serial.println("Rota DER");
  } 

  if(estado=='e'){          // Boton Reversa
    retrocedeA();
    retrocedeB();
    setVelocidadAB(255);
    Serial.println("Retrocede");
  }
  
  if (estado =='f'){          // Boton ON,  se mueve sensando distancia 
    /// Medida en sensor ultrasonidos
    ///
    // Trigger inicial
    digitalWrite(trigger, LOW);
    delayMicroseconds(5);
    // Comienzo de la medida
    digitalWrite(trigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigger, LOW);
    // Adquisición y conversión a centímetros
    float distancia = pulseIn(echo, HIGH);
    distancia = distancia * 0.01657;
 
    if (distancia > DISTANCIA_MAX) { // Filtrado de distancias mal tomadas
        distancia = distancia_anterior;
    }
    else {
        distancia_anterior = distancia;
    }
    ///
    /// Fin medida en sensor ultrasonidos
 
    /// Lógica de navegación de robot
    ///
    int velocidad;
 
    if(distancia > 25.0) { // Distancia de seguridad
        avanzaB();
        avanzaA();
 
      float velocidadCandidata = distancia * 255.0 / 30.0;
      if (velocidadCandidata < VELOCIDAD_MIN) velocidadCandidata = VELOCIDAD_MIN;
      velocidad = (int) velocidadCandidata;
      velocidad = (estadoActual != avanzando) ? VELOCIDAD_ARRANQUE : velocidad;
      setVelocidadAB(velocidad);
 
      estadoActual = avanzando; // Actualiza estado de vehículo
 
      Serial.print("- ESTADO:  FF");
    }
    else { // No se puede avanzar
        velocidad = VELOCIDAD_NORMAL;
 
      rotar();
 
      velocidad = (estadoActual != girando_izq) ? VELOCIDAD_ARRANQUE : velocidad;
      setVelocidadAB(velocidad);
 
      estadoActual = girando_izq; // Actualiza estado de vehículo
 
      Serial.print("- ESTADO:  R-Izq");
    }
    Serial.print(" - Distancia: ");
    Serial.print(distancia);
    Serial.print(" - Velocidad: ");
    Serial.println(velocidad);
    ///
    /// Fin de lógica de navegación de robot
 
    delay(100);
  }
  if(estado=='g'){          // Boton OFF, detiene los motores no hace nada 
     detenerAB();
  }
}

/// Funciones de motores
///
void detenerA() {
    digitalWrite(ENA, LOW);// Motor A desactivado
}
 
void detenerB() {
    digitalWrite(ENB, LOW);// Motor B desactivado
}
 
void detenerAB() {
    detenerA();
    detenerB();
}
 
void avanzaA() {
    if(dirActualA == 1) return;
 
    detenerA();
    dirActualA = 1;
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
}
 
void retrocedeA() {
    if(dirActualA == -1) return;
 
    detenerA();
    dirActualA = -1;
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
}
 
void avanzaB() {
    if(dirActualB == 1) return;
 
    detenerB();
    dirActualB=1;
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
}
 
void retrocedeB() {
    if(dirActualB==-1) return;
 
    detenerB();
    dirActualB=-1;
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
}
 
void setVelocidadA(int velocidad) {
    if(dirActualA == 0) return;
    velActualA = (velocidad >= VELOCIDAD_MAX) ? VELOCIDAD_MAX : velocidad;
    analogWrite(ENA, velActualA);
}
 
void setVelocidadB(int velocidad) {
    if(dirActualB == 0) return;
    velActualB = (velocidad >= VELOCIDAD_MAX) ? VELOCIDAD_MAX : velocidad;
    analogWrite(ENB, velActualB);
}
 
void setVelocidadAB(int velocidad) {
    setVelocidadA(velocidad);
    setVelocidadB(velocidad);
}
 
void rotar() {
    avanzaA();
    retrocedeB();
}
 
void antirotar() {
    avanzaB();
    retrocedeA();
}
///
/// Fin funciones de motores
