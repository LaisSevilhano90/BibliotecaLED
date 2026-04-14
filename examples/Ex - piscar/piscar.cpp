/**
 * este é um exemplo de utilizacoes das funçoes apagar()
 */

#include <Arduino.h>
#include <LED.h>

Led LedA(37);

void setup()
{
    LedA.piscar(); // use o método piscar para piscar o LED infinitamente.
}
void loop()
{
    LedA.update();      // Este método deve ser chamado sempre no loop()
}
