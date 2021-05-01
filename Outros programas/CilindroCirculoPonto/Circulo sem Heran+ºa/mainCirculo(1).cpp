#include <iostream>
#include <iomanip>
using namespace std;

#include "Circulo.cpp"

int main() {
	Circulo circulo1( 37, 43, 2.4 );
	cout << "x = " << circulo1.getX()<<endl<< "y = " << circulo1.getY()<<endl
           << "raio = " << circulo1.retornaRaio();
	circulo1.setX( 2 );          
	circulo1.setY( 2 );          
	circulo1.alteraRaio( 4.25 ); 
	cout << endl<<endl;
	cout<<"Nova posicao e raio do circulo:"<<endl;
	cout << "Centro = (" << circulo1.getX() << ", " << circulo1.getY() << ")"<<endl;
	cout<< "Raio = " << circulo1.retornaRaio()<<endl;
	cout << fixed << setprecision( 2 ); 
	cout <<"Diametro = "<<circulo1.retornaDiametro()<<endl;
	cout <<"Comprimento = "<<circulo1.retornaComp()<<endl;
	cout << "Area = " << circulo1.retornaArea()<<endl;
	return 0;
}
