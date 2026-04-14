/**
 * este é um exemplo de utilizacoes das funçoes apagar()
 */

#include <Arduino.h>
#include <LED.h>

Led LedA(37);

void setup()
{
    LedA.apagar(); // use o método apagar para desligar o LED
}
void loop()
{
    LedA.update();      // Este método deve ser chamado sempre no loop()
}
