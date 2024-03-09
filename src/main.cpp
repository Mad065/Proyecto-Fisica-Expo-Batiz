#include <Arduino.h>
#include <Ultrasonic.h>

// TODO Programar sensores
// TODO Programar como calcular los datos para la fisica

int trigPin1 = 5;
int echoPin1 = 16;
Ultrasonic ultrasonic1(trigPin1, echoPin1);

long tiempoInicial = micros();
long tiempoFinal = micros();

void setup()
{
  Serial.begin(9600);
}

void loop()
{

  float distancia = ultrasonic1.read();

  if (distancia <= 20)
  {
    long tiempoActual = micros();
    delay(1);
  }

  // Imprimimos la distancia medida en centímetros
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  // Esperamos un breve período de tiempo antes de realizar la próxima medición
  delay(1);
}

// Función para calcular la posición o desplazamiento
double calcularPosicion(double velocidadInicial, double aceleracion, double tiempo)
{
  return velocidadInicial * tiempo + 0.5 * aceleracion * (tiempo * tiempo);
}

// Función para calcular la distancia recorrida
double calcularDistanciaRecorrida(double velocidadInicial, double velocidadFinal, double tiempo)
{
  return (velocidadInicial + velocidadFinal) / 2 * tiempo;
}

// Función para calcular la velocidad final
double calcularVelocidadFinal(double velocidadInicial, double aceleracion, double tiempo)
{
  return velocidadInicial + aceleracion * tiempo;
}

// Función para calcular la velocidad final al cuadrado
double calcularVelocidadFinalAlCuadrado(double velocidadInicial, double aceleracion, double posicion)
{
  return velocidadInicial * velocidadInicial + 2 * aceleracion * posicion;
}