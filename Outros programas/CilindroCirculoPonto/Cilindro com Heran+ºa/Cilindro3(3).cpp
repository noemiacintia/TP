#include "Cilindro3.h"

Cilindro3::Cilindro3( int vx, int vy, double vraio, 
double alturaValue ) : Circulo3( vx, vy, vraio ){
		ajusta_altura( alturaValue );
}
void Cilindro3::ajusta_altura( double alturaValue ) {
	altura = ( alturaValue < 0.0 ? 0.0 : alturaValue );
} 
double Cilindro3::retorna_altura() const {
	return altura;
} 
double Cilindro3::retornaArea() const {
	return 2 * Circulo3::retornaArea() + Circulo3::retornaComp() * retorna_altura();
}
double Cilindro3::retorna_volume() const {
		return Circulo3::retornaArea() * retorna_altura();
}
void Cilindro3::imprime() const{
		Circulo3::imprime();
		cout << "Altura = " << retorna_altura()<<endl;
  
}
