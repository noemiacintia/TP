#include "Retangulo.h"

void Retangulo::set_valores (int a, int b){
	x = a;
	y = b;
}

int Retangulo::get_x( ){
	return x;
}
int Retangulo::get_y( ){
	return y;
}

int Retangulo:: area ( ) { 
	return (x*y);
}