#include "NroComplexos.h"

Complexo::Complexo(int pReal, int pImag){
	x= pReal;
	y= pImag;
}

int Complexo::getx() const{
	return x;
}

int Complexo::gety() const{
	return y;
}

void Complexo::multiplica(Complexo z1, Complexo z2){
//	z1 = a + bi e z2 = c + di  ==> z = (ac – bd) + (ad + bc)i

	int a, b, c, d;
	a = z1.getx();
	b = z1.gety();
	c = z2.getx();
	d = z2.gety();
	this->x = a*c - b*d;
	this->y = a*d + b*c;
}

void Complexo::soma(Complexo z1, Complexo z2){
//  z1 = a + bi e z2 = c + di ==> z = (a + c) + (b + d)i

	int a, b, c, d;
	a = z1.getx();
	b = z1.gety();
	c = z2.getx();
	d = z2.gety();
	this->x = a + c;
	this->y = b + d;
}

void Complexo::imprime() const{
	cout<<" O número complexo é z = "<< x <<" + "<< y << "i" <<endl<<endl;
}

Complexo::~Complexo(){
	//não faz nada.
}