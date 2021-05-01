#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

#include "Pacote.cpp"

int main(){
	setlocale(LC_ALL, "Portuguese");
	Pacote pacote1(3, 5.60), pacote2;
  	pacote2.setPeso(10);
  	pacote2.setPrecoQuilo(8.55);
  	
  	cout<<"O peso do pacote1 é: "<<pacote1.getPeso()<<endl;
  	cout<<"O preço do quilo é: "<<pacote1.getPrecoQuilo()<<endl;
  	pacote1.imprimeValor();
  	
  	
  	cout<<"O peso do pacote1 é: "<<pacote2.getPeso()<<endl;
  	cout<<"O preço do quilo é: "<<pacote2.getPrecoQuilo()<<endl;
  	pacote2.imprimeValor();
	return 0;
}



