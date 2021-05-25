#include "Ponto.h"

Ponto::Ponto()
{
    x=0;
    y=0;
}

void Ponto::setX(float x)
{
    this->x=x;
}

void Ponto::setY(float y)
{
    this->y=y;
}

float Ponto::getX()
{
    return x;
}

float Ponto::getY()
{
    return y;
}

