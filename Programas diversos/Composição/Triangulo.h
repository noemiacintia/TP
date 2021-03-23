#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "Ponto.h"

class Triangulo
{
    Ponto a,b,c;
    public:
        Triangulo();
        Triangulo(float,float,float,float,float,float);
        float getPerimetro();
        void getCoordenadas();
        float calcDistancia(Ponto, Ponto);
        float calcPerimetro();
};

#endif // TRIANGULO_H
