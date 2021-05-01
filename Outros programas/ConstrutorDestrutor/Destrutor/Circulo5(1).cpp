#include "circulo5.h"

Circulo5::Circulo5( int vx, int vy, double vraio )
			       : Ponto5( vx, vy ) { // chama o construtor da Classe-Base
	raio = vraio;
	cout << "construtor Circulo5: ";
	imprime();
}

Circulo5::~Circulo5() {                                 
	cout << "destrutor Circulo5 : ";
	imprime();                       
} 

void Circulo5::imprime() const {
	cout << "Centro = ";
	Ponto5::imprime();      // Chama a funcao imprimir Ponto4
}
