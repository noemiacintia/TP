// Mostra a ordem segundo a qual os construtores da
// Classe-Base e das classes derivadas são chamados

#include <iostream>  
using namespace std;
      
#include "Circulo4.cpp"  // definicao da classe Circulo5
    
int main(){
      { // inicio de novo escopo
			Ponto4 ponto( 11, 22 );                               
	} // fim do escopo
	cout<<endl;
	Circulo4 c1( 72, 29, 4.5 );
	cout<<endl;
	Circulo4 c2( 5, 5, 10 );
	return 0; 
}
