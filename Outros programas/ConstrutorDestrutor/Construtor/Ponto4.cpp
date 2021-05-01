#include "Ponto4.h" 

Ponto4::Ponto4( int vx, int vy ): x( vx ), y( vy ) {
	cout << "construtor Ponto4 : ";
	imprime();
//	cout << endl;
}
/*
Ponto4::~Ponto4 ()  {                                
	cout << "destrutor Ponto4 : ";
	imprime();                      
	cout << endl;
}
*/
int Ponto4::retornaX() const{
	return x;
}
int Ponto4::retornaY()const{
	return y;
}
void Ponto4::imprime()const{
   cout << "(" << retornaX() << ", " << retornaY() << ")"<<endl;
}
