// Mostra a ordem segundo a qual os construtores da
// Classe-Base e das classes derivadas são chamados

#include <iostream>  
using namespace std;

#include "Ponto5.cpp"  // definicao da classe Ponto4      
#include "Circulo5.cpp"  // definicao da classe Circulo4
#include "Cilindro5.cpp" //definição da classe Cilindro4

    
int main(){
	cout<<"Objeto ponto"<<endl;
 	Ponto5 ponto( 11, 22 );       //criação do objeto ponto                        
	cout<<endl;
	cout<<"Objeto circulo"<<endl;
	Circulo5 circulo( 72, 29, 4.5 );	//criação do objeto circulo
	cout<<endl;
	cout<<"Objeto cilindro"<<endl;
	Cilindro5 cilindro(25,35,8.26, 4.0);	//criação do objeto cilindro
	return 0; 
}
