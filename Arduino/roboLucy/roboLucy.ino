/// Definición de pines
///
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
///
/// Fin de definición de pines
 
/// Estados de movimiento y velocidad
///
int dirActualA = 0; // 0->detenido, 1->avanza, -1->retrocede
int velActualA = 0;
int dirActualB = 0; // 0->detenido, 1->avanza, -1->retrocede
int velActualB = 0;
 
int VELOCIDAD_MAX = 250;
int VELOCIDAD_MIN = 100;
int VELOCIDAD_ARRANQUE = 200;
int VELOCIDAD_NORMAL = 150;
 
enum estados {
    detenido,
    avanzando,
    girando_izq,
    girando_der,
};
 
estados estadoActual = detenido;
///
/// Fin de estados de movimiento y velocidad
 
///
float DISTANCIA_MAX = 450.0;
 
float distancia_anterior = 0.0;
///
 
/// Funciones básicas
///
void setup() {
    Serial.begin(9600);
 
    /// Inicialización de pines
    ///
    // HC-SR04
    pinMode(trigger, OUTPUT);
    pinMode(echo, INPUT);
 
    // Motores
    pinMode(ENA, OUTPUT);
    pinMode(ENB, OUTPUT);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
    ///
    /// Fin de inicialización de pines
 
    // Motores parados
    detenerAB();
}
 
void loop() {
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
///
/// Fin funciones básicas
 
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

