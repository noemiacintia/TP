#include "Cilindro4.h"

Cilindro4::Cilindro4( int vx, int vy, double vraio, double alturaValue ) 
		:Circulo4( vx, vy, vraio ){
	altura = alturaValue;
	cout << "construtor Cilindro4: ";
	imprime();

}
void Cilindro4::imprime() const{
		Circulo4::imprime();
//		cout << "Altura = " << altura<<endl;
  
}
