#include "Triangulo.h"
#include "Ponto.h"
#include <iostream>
#include <math.h>
using namespace std;

Triangulo::Triangulo()
{
    a.setX(0);
    a.setY(0);
    b.setX(0);
    b.setY(0);
    c.setX(0);
    c.setY(0);
}

Triangulo::Triangulo(float ax, float ay, float bx, float by, float cx, float cy)
{
    a.setX(ax);
    a.setY(ay);
    b.setX(bx);
    b.setY(by);
    c.setX(cx);
    c.setY(cy);
}

float Triangulo::calcPerimetro()
{
    return calcDistancia(a, b) + calcDistancia(b,c) + calcDistancia(c,a);
}

float Triangulo::calcDistancia(Ponto a, Ponto b)
{
    return sqrt(pow(a.getX()-b.getX(), 2) + pow(a.getY()-b.getY(), 2));
}

void Triangulo::getCoordenadas()
{
    cout<<"A("<<a.getX()<<","<<a.getY()<<")"<<endl;
    cout<<"B("<<b.getX()<<","<<b.getY()<<")"<<endl;
    cout<<"C("<<c.getX()<<","<<c.getY()<<")"<<endl;
}
