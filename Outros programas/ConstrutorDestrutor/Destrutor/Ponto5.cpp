#include "Ponto5.h" 

Ponto5::Ponto5( int vx, int vy ): x( vx ), y( vy ) {
	cout << "construtor Ponto5 : ";
	imprime();
}

Ponto5::~Ponto5 ()  {                                
	cout << "destrutor Ponto5 : ";
	imprime();                      
	cout << endl;
}

int Ponto5::retornaX() const{
	return x;
}
int Ponto5::retornaY()const{
	return y;
}
void Ponto5::imprime()const{
   cout << "(" << retornaX() << ", " << retornaY() << ")"<<endl;
}
