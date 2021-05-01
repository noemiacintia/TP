/*
Existem diferentes tipos de opções de entregas de pacotes, cada um com custos 
específicos associados. Crie uma hierarquia de herança para representar várias 
formas de entrega de pacotes. Todos os construtores devem realizar testes de 
consistência quanto aos dados fornecidos (por exemplo, garanta que o peso e o 
preço por quilo não serão menores ou iguais a zero). O cálculo dos custos deve 
ser realizado como especificado abaixo:
a) Classe Pacote: peso x preço por quilo;
b) Classe PacoteDoisDias: resultado do cálculo anterior somado de uma taxa adicional;
c) Classe PacoteOvernight: resultado do item a somado a uma taxa adicional 
   multiplicada pelo peso do pacote. 
Crie uma main para testar o programa
*/
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

#include "Pacote.cpp"
#include "PacoteDoisDias.cpp"
#include "PacoteOvernight.cpp"

int main(){
	setlocale(LC_ALL, "Portuguese");
	Pacote pacote1(3.5,5.00); 
	PacoteDoisDias pacote2(3.5,5.0,35.00);
	PacoteOvernight pacote3(3.5, 5.0, 50.00), pacote4;
  	pacote4.setPeso(10);
  	pacote4.setPrecoQuilo(5.0);
  	pacote4.setTaxaAdicional(50.00);
  	
  	cout<<"Pacote normal"<<endl;
  	cout<<"O peso do pacote1 é: "<<pacote1.getPeso()<<endl;
  	cout<<"O preço do quilo é: "<<pacote1.getPrecoQuilo()<<endl;
   	pacote1.imprimeValor();  	
  	
   	cout<<"Pacote Dois Dias"<<endl;
 	cout<<"O peso do pacote2 é: "<<pacote2.getPeso()<<endl;
  	cout<<"O preço do quilo é: "<<pacote2.getPrecoQuilo()<<endl;
   	cout<<"A taxa adicional é: "<<pacote2.getTaxaAdicional()<<endl;
 	pacote2.imprimeValor();
 	
   	cout<<"Pacote Overnight"<<endl;
	cout<<"O peso do pacote3 é: "<<pacote3.getPeso()<<endl;
  	cout<<"O preço do quilo é: "<<pacote3.getPrecoQuilo()<<endl;
  	cout<<"A taxa adicional é: "<<pacote3.getTaxaAdicional()<<endl;
  	pacote3.imprimeValor();
  		
    cout<<"Pacote Overnight"<<endl;
 	cout<<"O peso do pacote4 é: "<<pacote4.getPeso()<<endl;
  	cout<<"O preço do quilo é: "<<pacote4.getPrecoQuilo()<<endl;
   	cout<<"A taxa adicional é: "<<pacote4.getTaxaAdicional()<<endl;
 	pacote4.imprimeValor();

	return 0;
}

