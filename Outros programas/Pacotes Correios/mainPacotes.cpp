/*
Existem diferentes tipos de op��es de entregas de pacotes, cada um com custos 
espec�ficos associados. Crie uma hierarquia de heran�a para representar v�rias 
formas de entrega de pacotes. Todos os construtores devem realizar testes de 
consist�ncia quanto aos dados fornecidos (por exemplo, garanta que o peso e o 
pre�o por quilo n�o ser�o menores ou iguais a zero). O c�lculo dos custos deve 
ser realizado como especificado abaixo:
a) Classe Pacote: peso x pre�o por quilo;
b) Classe PacoteDoisDias: resultado do c�lculo anterior somado de uma taxa adicional;
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
  	cout<<"O peso do pacote1 �: "<<pacote1.getPeso()<<endl;
  	cout<<"O pre�o do quilo �: "<<pacote1.getPrecoQuilo()<<endl;
   	pacote1.imprimeValor();  	
  	
   	cout<<"Pacote Dois Dias"<<endl;
 	cout<<"O peso do pacote2 �: "<<pacote2.getPeso()<<endl;
  	cout<<"O pre�o do quilo �: "<<pacote2.getPrecoQuilo()<<endl;
   	cout<<"A taxa adicional �: "<<pacote2.getTaxaAdicional()<<endl;
 	pacote2.imprimeValor();
 	
   	cout<<"Pacote Overnight"<<endl;
	cout<<"O peso do pacote3 �: "<<pacote3.getPeso()<<endl;
  	cout<<"O pre�o do quilo �: "<<pacote3.getPrecoQuilo()<<endl;
  	cout<<"A taxa adicional �: "<<pacote3.getTaxaAdicional()<<endl;
  	pacote3.imprimeValor();
  		
    cout<<"Pacote Overnight"<<endl;
 	cout<<"O peso do pacote4 �: "<<pacote4.getPeso()<<endl;
  	cout<<"O pre�o do quilo �: "<<pacote4.getPrecoQuilo()<<endl;
   	cout<<"A taxa adicional �: "<<pacote4.getTaxaAdicional()<<endl;
 	pacote4.imprimeValor();

	return 0;
}

