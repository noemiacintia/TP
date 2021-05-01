// Mostra a ordem segundo a qual os construtores da
// Classe-Base e das classes derivadas s�o chamados

#include <iostream>  
using namespace std;

#include "Ponto4.cpp"  // definicao da classe Ponto4      
#include "Circulo4.cpp"  // definicao da classe Circulo4
#include "Cilindro4.cpp" //defini��o da classe Cilindro4

    
int main(){
	cout<<"Objeto ponto"<<endl;
 	Ponto4 ponto( 11, 22 );       //cria��o do objeto ponto                        
	cout<<endl;
	cout<<"Objeto circulo"<<endl;
	Circulo4 circulo( 72, 29, 4.5 );	//cria��o do objeto circulo
	cout<<endl;
	cout<<"Objeto cilindro"<<endl;
	Cilindro4 cilindro(25,35,8.26, 4.0);	//cria��o do objeto cilindro
	return 0; 
}
