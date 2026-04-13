#ifndef LED_h
#define LED_h


#include <Arduino.h>

/**
* @class Led
* @brief Classe para controle não bloqueante de um LED
* 
* Permite ligar,desligar, ligar por um tempo,
* piscar continuamente e piscar por quantidade definida.
* @param pin pino ao qual o LED foi conectado.
* 
* @note o metodo update() deve ser chamado continuamente dentro do loop.
*/
class Led
{
    private:

        uint8_t pino;
        bool estado;
        bool apagarNoTempo;
        uint32_t apagarNoMomento;
        bool estadoPiscar;
        uint32_t tempoEspera;
        uint32_t tempoAnteriorPiscar;
        uint16_t repeticoes;

        /**
         * @brief Processa o desligamento temporizado.
         */
        void funcaoApagarNoTempo();

        /**
         * @brief Processa a lógica de piscada do LED.
         */
        void funcaoPiscar();



    public:
/**
 * @brief Constroi um objeto Led
 * @param pin Numero do pino digital onde o Led esta conectado.
 */
        Led(uint8_t pin); // MÉTODO CONSTRUTOR
    /**
     * @brief Liga o LED continuamente.
     */
        void acender();

        /**
         * @brief Liga o Led por um tempo determinado.
         * @param tempoLigado tempo, em milissegundos, que o Led ficará ligado.
         */
        void acender(uint32_t tempoligado);

        /**
         * @brief Desliga o Led e cancela modos automáticos.
         */
        void apagar();

        /**
         * @brief Pisca continuamente o Led.
         */
        void piscar();
        /**
         * @brief Pisca o Led continuamnete com uma frequencia determinada.
         * @param freq frequência em hz.
         */
        void piscar(float freq);
        /**
         * @brief pisca o Led continuamente com uma frequencia determinada e com repeticoes determinadas também.
         * @param freq frequência em hz do Led.
         * @param repeticoes quantidades de vezes que o Led irá piscar.
         */
        void piscar(float freq, uint16_t repeticoes);

        /**
         * Alterna o estado do Led.
         */
        void alternar();
/**
 * @brief Define um novo valor.
 * @param estado estado do led, true ou false.
 */
        void setEstado(bool estado);
/**
 * @brief Passa o valor que está o pino.
 * 
 */
        uint8_t getPino();
    
        /**
         * @brief Atualiza a lógica interna da classe e escreve no pino.
         * 
         * @note Deve ser chamado repetidamente dentro da função loop().
         */
        void update();

};


#endif