#include <iostream>
#include <iomanip>
using namespace std;

#include "Ponto2.cpp"
#include "Circulo2.cpp"

int main()
{
	Circulo2 circulo( 55, 43, 2.4 );
	cout << "x = " << circulo.getX()<<endl<< "y = " << circulo.getY()<<endl
           << "raio = " << circulo.retornaRaio();
	circulo.setX( 2 );          
	circulo.setY( 2 );          
	circulo.alteraRaio( 4.25 ); 
	cout << endl<<endl;
	cout<<"Nova posicao e raio do circulo:"<<endl;
	cout << "Centro = (" << circulo.getX() << ", " << circulo.getY() << ")"<<endl;
	cout<< "Raio = " << circulo.retornaRaio()<<endl;
	cout << fixed << setprecision( 2 ); 
	cout <<"Diametro = "<<circulo.retornaDiametro()<<endl;
	cout <<"Comprimento = "<<circulo.retornaComp()<<endl;
	cout << "Area = " << circulo.retornaArea()<<endl;
	
	circulo.imprime();
	return 0;
}
