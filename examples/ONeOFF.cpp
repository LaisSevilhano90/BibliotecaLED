/**
 * este é um exemplo de utilizacoes das funçoes acender() e desligar()
 */


#include <Arduino.h>
#include <LED.h>   

Led LedA(37);  

void setup() 
{

}

void loop()
{
    LedA.update(); // Este método deve ser chamado sempre no loop()

    LedA.acender(); // use o método acender para ligar o LED
    delay(1000); 
    LedA.apagar();// use o método apagar para desligar o LED
    delay (1000);
}

