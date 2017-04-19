#include "retangulo.h"

Retangulo::Retangulo()
{

}

Retangulo::Retangulo (float x, float y, float largura, float altura)
{
    this->adcVertice(x, y);
    this->adcVertice(x, y-altura);
    this->adcVertice(x+largura, y-altura);
    this->adcVertice(x+largura, y);
}


void Retangulo::operator()(float x, float y, float largura, float altura)
{
    this->adcVertice(x, y);
    this->adcVertice(x, y-altura);
    this->adcVertice(x+largura, y-altura);
    this->adcVertice(x+largura, y);    
}
