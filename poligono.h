#ifndef POLIGONO_H
#define POLIGONO_H
#include "ponto.h"
#define TAM 100

/** @brief A classe Poligono serve para a declaração e manipulação de polígonos, bem como para a obtenção de suas informações
* 
* A classe Polígono providencia o armazenamento de até 100 pontos para a declaração de polígonos. Ela possibilita adicionar seus vértices,
* verificar se formam um polígono convexo e exibi-los. Também, há métodos para a obtenção da área, número de vértices do polígono e para
* manipulá-los por proporcionar uma função para sua rotação e translação.  
*/
class Poligono
{
protected:
    Ponto vertices[TAM];
    int n=0;
public:
    /** @brief Poligono é o construtor padrão da classe Polígono
    */
    Poligono();
    /** @brief adcVertice adiciona um vértice ao polígono
    * @param x coordenada x do vértice a ser adicionado
    * @param y coordenada y do vértice a ser adicionado
    */
    void adcVertice(float x, float y);
    /** @brief verifPoligono serve para verificar se o polígono é convexo
    */
    bool verifPoligono(void);
    /** @brief nVertices recupera o número de vértices do polígono
    *   @return Número de vértices do polígono
    */
    int nVertices(void);
    /** @brief areaPoligono calcula a área do polígono
    *   @return Área do polígono
    */
    float areaPoligono(void);
    /** @brief translada move o polígono
    *   @param a distância que o poligono irá se mover em relação ao eixo x
    *   @param b distância que o poligono irá se mover em relação ao eixo y
    */
    void translada(float a, float b);
    /** @brief rotaciona serve para rotacionar o polígono em torno de um ponto
    *   @param x_origem coordenada x do eixo de rotação do polígono
    *   @param y_origem coordenada y do eixo de rotação do polígono
    *   @param theta ângulo em graus que o polígono irá rotacionar
    */
    void rotaciona(float x_origem, float y_origem, float theta);
    /** @brief imprime serve para exibir os pontos que formam os vértices do polígono
    */
    void imprime(void);
    /** @brief resetPoligono serve para apagar o polígono
    */
    void resetPoligono(void);
};

#endif // POLIGONO_H
