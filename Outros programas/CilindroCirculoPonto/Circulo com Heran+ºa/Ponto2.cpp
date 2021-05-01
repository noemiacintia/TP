#include "Ponto2.h"

Ponto2::Ponto2(int x, int y){       // construtor da classe
	this->x= x>0?x:0;
    this->y= y>0?y:0;
}
void Ponto2::setX(int x){
	 this->x= x>0?x:0;
}
int Ponto2 :: getX() const{
	return x;
}
void Ponto2 :: setY(int y){
	 this->y= y>0?y:0;
}
int Ponto2:: getY() const {
	return y;
}
void Ponto2::imprime() const{
	cout<<"x = "<< getX()<<endl;
	cout<<"y = "<<getY()<<endl;
}
