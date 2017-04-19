#ifndef POLIGONO_H
#define POLIGONO_H
#include "ponto.h"

class Poligono
{
protected:
    Ponto vertices[100];
    int n=0;
public:
    Poligono();
    void adcVertice(float x, float y);
    bool verifPoligono(void);
    int nVertices(void);
    float areaPoligono(void);
    void translada(float a, float b);
    void rotaciona(float x_origem, float y_origem, float o);
    void imprime(void);
    void resetPoligono(void);
};

#endif // POLIGONO_H
