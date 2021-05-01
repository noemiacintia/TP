#include "Circulo3.h"   

Circulo3::Circulo3(int x, int y, double raio):Ponto3(x,y) {
	  alteraRaio(raio);
}

void Circulo3::alteraRaio( double raio ) {
	 this->raio = ( raio < 0.0 ? 0.0 : raio ); 
}
double Circulo3::retornaRaio() const {
	return raio;
}
double Circulo3::retornaDiametro() const { 
	return 2 * raio;
} 
double Circulo3::retornaComp() const {
	return 3.14159 * retornaDiametro(); 
} 
double Circulo3::retornaArea() const {
	return 3.14159 * raio * raio;
}
void Circulo3::imprime() const{
	Ponto3::imprime();
	cout<<"raio = "<<retornaRaio()<<endl;
}
