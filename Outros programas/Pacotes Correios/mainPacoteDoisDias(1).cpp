#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

#include "Pacote.cpp"
#include "PacoteDoisDias.cpp"

int main(){
	setlocale(LC_ALL, "Portuguese");
	PacoteDoisDias pacote1(3, 5.60, 35.00), pacote2;
  	pacote2.setPeso(10);
  	pacote2.setPrecoQuilo(8.55);
  	pacote2.setTaxaAdicional(25.00);
  	
  	cout<<"O peso do pacote1 é: "<<pacote1.getPeso()<<endl;
  	cout<<"O preço do quilo é: "<<pacote1.getPrecoQuilo()<<endl;
  	cout<<"A taxa adicional é: "<<pacote1.getTaxaAdicional()<<endl;
  	pacote1.imprimeValor();
  	
  	
  	cout<<"O peso do pacote1 é: "<<pacote2.getPeso()<<endl;
  	cout<<"O preço do quilo é: "<<pacote2.getPrecoQuilo()<<endl;
   	cout<<"A taxa adicional é: "<<pacote1.getTaxaAdicional()<<endl;
 	pacote2.imprimeValor();
	return 0;
}



