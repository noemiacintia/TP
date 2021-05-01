#include "Cilindro5.h"

Cilindro5::Cilindro5( int vx, int vy, double vraio, double alturaValue ) 
		:Circulo5( vx, vy, vraio ){
	altura = alturaValue;
	cout << "construtor Cilindro5: ";
	imprime();

}
Cilindro5::~Cilindro5() {                                 
	cout <<endl<<"destrutor Cilindro5 : ";
	imprime();                       
} 

void Cilindro5::imprime() const{
		Circulo5::imprime();
//		cout << "Altura = " << altura<<endl;
  
}
