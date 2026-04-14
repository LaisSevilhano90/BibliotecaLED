/**
 * este é um exemplo de utilizacoes da função alternar()
 */

#include <Arduino.h>
#include <LED.h>

Led LedA(37);

void setup()
{
    LedA.alternar(); // use o método alternar para alternar o estado do LED 
}
void loop()
{
    LedA.update();      // Este método deve ser chamado sempre no loop()
}
