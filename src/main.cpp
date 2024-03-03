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
