#ifndef PONTO_H
#define PONTO_H

class Ponto
{
private:
    float x;
    float y;
public:
    Ponto();
    void setX(float x1);
    void setY(float y1);
    void setXY(float x1, float y1);
    float getX(void);
    float getY(void);
    Ponto soma(Ponto p1);
    Ponto sub(Ponto p1);
    float norma(void);
    void translada(float a, float b);
    void imprime(void);
};

#endif // PONTO_H
