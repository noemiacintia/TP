#include "circulo4.h"

Circulo4::Circulo4( int vx, int vy, double vraio )
			       : Ponto4( vx, vy ) { // chama o construtor da Classe-Base
	raio = vraio;
	cout << "construtor Circulo4: ";
	imprime();
}
Circulo4::~Circulo4() {                                 
	cout << "destrutor Circulo4 : ";
	imprime();                       
} 
void Circulo4::imprime() const {
	cout << "Centro = ";
	Ponto4::imprime();      // Chama a funcao imprimir Ponto4
}
