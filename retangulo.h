#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

/** @brief A classe Retangulo serve para fazer a declaração de retângulos
*/
class Retangulo : public Poligono
{
public:
    /** @brief Construtor padrão da classe Retangulo
    */ 
    Retangulo();
    /** @brief Construtor com argumentos da classe Retangulo
    * @param x coordenada x do ponto superior esquerdo do retângulo a ser declarado
    * @param y coordenada y do ponto superior esquerdo do retângulo a ser declarado
    * @param largura largura do retângulo a ser declarado
    * @param altura altura do retângulo a ser declarado
    */
    Retangulo(float x, float y, float largura, float altura);

    /** @brief operator() serve para declarar os atributos de um retângulo
    * @param x coordenada x do ponto superior esquerdo do retângulo a ser declarado
    * @param y coordenada y do ponto superior esquerdo do retângulo a ser declarado
    * @param largura largura do retângulo a ser declarado
    * @param altura altura do retângulo a ser declarado
    */
    void operator()(float x, float y, float largura, float altura);
};

#endif // RETANGULO_H
