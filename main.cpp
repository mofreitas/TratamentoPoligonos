#include <iostream>
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main()
{
    short int resp=10;
    bool eRet= false;
    Poligono polig;
    Retangulo ret;
    float x, y;

    cout << "O que deseja fazer? " << endl
         << "   1- Criar um poligono" << endl
         << "   2- Criar retangulo" << endl        
         << "   #- Sair" << endl;
    cin >> resp;

    switch(resp)
    {
        case 1:
        {
            short int i = 1;
            float xi, yi;

            cout << "Inserir vertices no sentido antihorario conforme enunciado" << endl
                 << "Esta operacao "
                 << "Digite a posição inicial para finalizar a insercao" << endl << endl
                 << "Digite um vertice:";
            cin >> xi >> yi;
            polig.adcVertice(xi, yi);

            while(i<100)
            {
                cout << "Digite um vertice: ";
                cin >> x >> y;

                if(xi==x && yi==y) //verifica se o ponto digitado for igual ao inicial
                {
                    break;
                }
                polig.adcVertice(x, y);
                i++;
            }
            if(!polig.verifPoligono()||i<3)
            {
                cout << "POLIGONO NAO CONVEXO! OPERACAO CANCELADA!" << endl;
                polig.resetPoligono();
            }
            break;
        }
        case 2:
        {
            float alt, larg;
            cout << "Digite o vertice superior esquerdo do retangulo: ";
            cin >> x >> y;
            cout << "Digite a altura e a largura do retangulo: ";
            cin >> alt >> larg;
            ret(x, y, larg, alt);
            eRet=true;   
            break;
        }
        default:
        {
            return(0);
        }
    }
    
    while(resp!=0)
    { 
        cout << "O que deseja fazer? " << endl                
             << "   1- Rotacionar poligono" << endl
             << "   2- Transladar poligono" << endl
             << "   3- Recuperar quantidade de vertices do poligono" << endl
             << "   4- Calcular area do poligono" << endl
             << "   5- Imprimir poligono" << endl
             << "   #- Sair" << endl;
        cin >> resp;

        switch(resp)
        {
            case 1:
            {
                float graus=0;
                
                    cout << "Digite o ponto por onde o poligono deve rotacionar: ";
                    cin >> x >> y;
                    cout << "Digite quantos graus o poligono deve rotacionar: ";
                    cin >> graus;
                    
                    if(eRet) //testa se eh retangulo ou não
                    {
                        ret.rotaciona(x, y, graus);
                    }
                    else
                    {
                        polig.rotaciona(x, y, graus);
                    }
               
                break;
            }
            case 2:
            {
                
                    cout << "Digite o quanto deseja transladar o poligono na horizontal e vertical: ";
                    cin >> x >> y;

                    if(eRet) //testa se eh retangulo ou não
                    {
                        ret.translada(x, y);
                    }
                    else
                    {
                        polig.translada(x, y);
                    }                    
               
                break;
            }
            case 3:
            {
               
                    if(eRet) //testa se eh retangulo ou não
                    {
                        cout << "O numero de vertices do retangulo e: " << ret.nVertices() << endl;
                    }
                    else
                    {
                        cout << "O numero de vertices do poligono e: " << polig.nVertices() << endl;
                    }
               
                break;
            }
            case 4:
            {
                
                    if(eRet) //testa se eh retangulo ou não
                    {
                        cout << "A area do retangulo e: " << ret.areaPoligono() << endl;
                    }
                    else
                    {
                        cout << "A area do poligono e: " << polig.areaPoligono() << endl;
                    }                    
              
                break;
            }
            case 5:
            {
                if(eRet) //testa se eh retangulo ou não
                {
                    ret.imprime();;
                }
                else
                {
                    polig.imprime();
                }                 
                break;
            }
            default:
                resp=0;
                break;
        }
    }
}
