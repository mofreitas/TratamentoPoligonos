#ifndef POLIGONO_H
#define POLIGONO_H
#include "ponto.h"

/** @brief A classe Poligono serve para a declaração de polígonos e a obtenção de suas informações 
* 
*/
class Poligono
{
protected:
    Ponto vertices[100];
    int n=0;
public:
    Poligono();
    /** @brief adcVertice adiciona um vertice ao polígono
    * @param x recebe a coordenada x do vértice a ser adicionado
    * @param y recebe a coordenada y do vértice a ser adicionado
    */
    void adcVertice(float x, float y);
    /** @brief verifPoligono serve para verificar se o polígono é convexo
    */
    bool verifPoligono(void);
    /** @brief nVertices recupera o número de vértices do polígono
    *   @return número de vértices do polígono
    */
    int nVertices(void);
    /** @brief areaPoligono calcula a área do polígono
    *   @return área do polígono
    */
    float areaPoligono(void);
    /** @brief translada move o polígono
    *   @param a recebe 
    *   @param b recebe  
    */
    void translada(float a, float b);
    /** @brief rotaciona servepara rotacionar o polígono em torno de um ponto
    *   @param x_origem recebe a coordenada x do ponto por onde o polígono vai rotacionar
    *   @param y_origem recebe a coordenada y do ponto por onde o polígono vai rotacionar 
    *   @param o recebe o ângulo em graus que o polígono irá rotacionar
    */
    void rotaciona(float x_origem, float y_origem, float o);
    /** @brief imprime serve para exibir os pontos que formam os vértices do polígono
    */
    void imprime(void);
    /** @brief resetPoligono serve para apagar o polígono
    */
    void resetPoligono(void);
};

#endif // POLIGONO_H
