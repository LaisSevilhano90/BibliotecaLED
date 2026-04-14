## Biblioteca LED

Biblioteca simples para controle não bloqueante de LED em Aduino e ESP32.

## A classe `Led` permite:

- Ligar o Led continuamente
- Ligar por um tempo determinado
- Apagar
- Alternar o estado
- Piscar continuamente
- Piscar uma quantidade definida de vezes

O funcionamento é não bloqueante, usando `millis()`. Por isso, o método `update()` deve ser chamado repetidamente dentro do `loop`

## Estrutura da Biblioteca

LED
    -> library.json
    -> README.md
    -> LICENSE
    -> src
        -> LED.h
        -> LED.cpp
    -> examples    

