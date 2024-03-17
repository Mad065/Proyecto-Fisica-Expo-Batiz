# Sensores

Los sensores son dispositivo diseñados para captar un estímulo de su entorno y traducir esa información que recibe. Esa información recibida se convierte en un impulso eléctrico que luego procesan circuitos que generan una acción predeterminada en un sistema o maquinas, estos funcionan según cambios físicos alterando sus propiedades eléctricas, y convierte estímulos como el calor, la luz, el sonido y el movimiento en señales eléctricas. Estas señales se pasan a través de un interfaz que las convierte en un código binario y lo pasa a una computadora para ser procesado.

## Sensores de Movimiento

Detectan el movimiento de objetos o personas en su entorno.

### Sensor Ultrasonico:

Los sensores ultrasónicos son dispositivos que utilizan ondas de sonido de alta frecuencia para detectar la distancia entre el sensor y un objeto. Funcionan emitiendo pulsos de ultrasonido y midiendo el tiempo que tarda en rebotar en un objeto y regresar al sensor. Basándose en el tiempo de vuelo de las ondas ultrasónicas, el sensor puede determinar la distancia al objeto.

Detras de esto esta el principio de eco. Cuando el sensor emite una ráfaga de ultrasonido, esta viaja en todas direcciones hasta que encuentra un objeto sólido. Una parte de la energía de la onda se refleja en el objeto y regresa al sensor. Midiendo el tiempo que tarda esta onda en viajar de ida y vuelta, el sensor puede calcular la distancia al objeto utilizando la velocidad del sonido en el aire.

Los sensores ultrasónicos se utilizaran en el proyecto para obtener las distancias que ha recorrido el cubo a lo largo de la pista.

## Sensores de luz

Detectan la intensidad luminosa o la presencia de luz visible o infrarroja.

### Sensor de obstáculo KY-032

El KY-032 es un módulo sensor de obstáculos que utiliza un sensor infrarrojo para detectar la presencia de objetos cercanos. Está compuesto por un emisor de infrarrojos (LED emisor) y un receptor de infrarrojos (fototransistor), junto con algunos componentes adicionales para facilitar su uso.

Cuando se activa, el emisor de infrarrojos emite luz infrarroja invisible hacia adelante. Si no hay ningún objeto en el camino, la luz infrarroja simplemente se dispersa en el aire. Sin embargo, si hay un objeto cercano, la luz infrarroja se refleja en el objeto y se dirige de vuelta al receptor de infrarrojos.

El receptor de infrarrojos detecta la luz reflejada y produce una señal eléctrica que varía según la cantidad de luz infrarroja recibida. Este cambio en la señal eléctrica se interpreta como la presencia de un objeto. La distancia a la que puede detectar objetos depende de la potencia y la sensibilidad del emisor y el receptor infrarrojos.

El sensor de obstaculos KY-032 se utilizaran en el proyecto para obtener los momentos en que el cubo llegue a cierto punto de la pista. Midiendo el tiempo que tardo en recorrer una seccion.