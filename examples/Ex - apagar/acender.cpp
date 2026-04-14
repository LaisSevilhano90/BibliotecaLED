/**
 * este é um exemplo de utilizacoes da função acender()
 */

#include <Arduino.h>
#include <LED.h>

Led LedA(37);

void setup()
{
    LedA.acender(); // use o método acender para acender o led
}
void loop()
{
    LedA.update();      // Este método deve ser chamado sempre no loop()
}
