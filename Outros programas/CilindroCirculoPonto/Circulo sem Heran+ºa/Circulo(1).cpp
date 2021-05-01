#include "Circulo.h"   

Circulo::Circulo(int x, int y, double raio) {
	  this->x = x;
 	  this->y = y;
	  alteraRaio(raio);
}
void Circulo::setX( int x ){
	 this->x = x; 
}
int Circulo::getX() const {
	return x;
}
void Circulo::setY( int y ){
	 this-> y = y;   
}
int Circulo::getY() const {
	return y;
} 
void Circulo::alteraRaio( double raio ) {
	 this->raio = ( raio < 0.0 ? 0.0 : raio ); 
}
double Circulo::retornaRaio() const {
	return raio;
}
double Circulo::retornaDiametro() const { 
	return 2 * raio;
} 
double Circulo::retornaComp() const {
	return 3.14159 * retornaDiametro(); 
} 
double Circulo::retornaArea() const {
	return 3.14159 * raio * raio;
}
