#ifndef PONTO_H
#define PONTO_H

class Ponto
{
private:
    float x;
    float y;
public:
    /** @brief Construtor da classe Ponto
    */
    Ponto();
    /** @brief Atribui valores a coordenada x do Ponto
    *   @param x1 Valor que será atribuido a coordenada x do Ponto
    */
    void setX(float x1);
    /** @brief Atribui valores a coordenada y do Ponto
    *   @param y1 Valor que será atribuido a coordenada y do Ponto
    */
    void setY(float y1);
    /** @brief Atribui valores às coordenadas x e y da classe Ponto simultaneamente
    *   @param x1 Valor que será atribuido a coordenada x do Ponto
    *   @param y1 Valor que será atribuido a coordenada y do Ponto
    */
    void setXY(float x1, float y1);
    /** @brief Recepera o valor de x da classe Ponto
    *   @return A coordenada x do ponto
    */ 
    float getX(void);
    /** @brief Recepera o valor de y da classe Ponto
    *   @return A coordenada y do ponto
    */    
    float getY(void);
    /** @brief Executa a adição de pontos
    *   @param p1 Ponto contendo as coordenadas que irão adicionar os atributos da classe
    *   @return Ponto resultante da adição
    */
    Ponto soma(Ponto p1);
    /** @brief Executa a subtração de pontos
    *   @param p1 Ponto contendo as coordenadas que irão subtrair os atributos da classe
    *   @return Ponto resultante da subtração
    */
    Ponto sub(Ponto p1);
    /** @brief Informa a distância entre o ponto e a origem do eixo de coordenadas
    *   @return Distância do ponto até a origem
    */
    float norma(void);
    /** @brief Desloca o ponto para uma nova posição
        @param a Valor que será somado a coordenada x do ponto
        @param b Valor que será somado a coordenada y do ponto
    */
    void translada(float a, float b);
    /** @brief Exibe as coordenadas x e y do ponto no formato <i>(x, y)</i>
    */
    void imprime(void);
};

#endif // PONTO_H
