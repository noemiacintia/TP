#include <iostream>  
#include <iomanip>
#include <locale>
using  namespace std;

#include "Ponto3.cpp"
#include "Circulo3.cpp"
#include "Cilindro3.cpp" 

int main(){
	setlocale(LC_ALL, "Portuguese");
	Cilindro3 cilindro( 12, 23, 2.4, 5.7 );
	cilindro.imprime();  //m�todo da classe Cilindro
	
	cilindro.setX( 2 ); 	//m�todo da classe Ponto
	cilindro.setY( 2 );	 //m�todo da classe Ponto
	cilindro.alteraRaio( 4.25 ); //m�todo da classe Circulo2
	cilindro.ajusta_altura( 10 ); //m�todo da classe Cilindro
	cout <<endl<< "Nova localizacao e modifica��o dos valores do raio e altura: "<<endl;
	cilindro.imprime();		 //m�todo da classe Cilindro
	cout << fixed << setprecision( 2 );
	cout<<endl;	
	cout <<"Diametro = " << cilindro.retornaDiametro()<<endl; //m�todo da Classe Circulo2
	cout <<"Comprimento = " << cilindro.retornaComp()<<endl; //m�todo da classe Circulo2
	cout <<"Area = " << cilindro.retornaArea()<<endl;  //m�todo da classe Cilindro
	cout <<"Volume = " << cilindro.retorna_volume()<<endl<<endl; //m�todo da classe Cilindro
	return 0;
}
