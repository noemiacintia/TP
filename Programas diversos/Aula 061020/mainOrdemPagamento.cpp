/* Crie uma classe em C++ chamada OrdemPagamento (Ordem de Pagamento no Exterior). Use um membro 
de dados static para conter a taxaDeCambio do dolar para cada transferência. 
Cada membro da classe contém um membro de dados private valorEnviado indicando o 
valor da ordem de pagamento em dolar que o cliente deseja enviar. Forneça um 
método membro calculeValorOrdem que calcule o valor a ser desembolsado pelo cliente 
multiplicando a quantidade de dolares a ser enviada pela taxaDeCambio. Forneça uma 
função membro static modifiqueTaxaDeCambio que inicializa a variável static 
taxaDeCambio com um novo valor. 
Escreva um programa de teste que instancia dois objetos diferentes 
de OPI, cliente1 e cliente2, com valores da ordem de $1000 e $2500, 
respectivamente. Inicialize taxaDeCambio com 5,65%, então calcule o 
valor da ordem de pagamento em real e imprima esse valor para cada cliente.
Inicialize então a taxaDeCambio com 5,22%, calcule o valor da ordem de pagamento 
e imprima o novo saldo para cada um dos clientes. */

#include <iostream>
#include <locale.h>

using namespace std;

#include "OrdemPagamento.cpp"

int main(){
	setlocale(LC_ALL,"");
	
	OrdemPagamento cliente1(1000), cliente2(2500);
	cout<<"O valor da ordem de pagamento internacional será"<<endl;
	cout<<"Cliente1 = R$"<<cliente1.calculeValorOrdem()<<endl;
	cout<<"Cliente2 = R$"<<cliente2.calculeValorOrdem()<<endl;
	OrdemPagamento::modifiqueTaxaDeCambio(5.22);
	cout<<endl<<endl;
	cout<<"O valor da ordem de pagamento internacional será"<<endl;
	cout<<"Cliente1 = R$"<<cliente1.calculeValorOrdem()<<endl;
	cout<<"Cliente2 = R$"<<cliente2.calculeValorOrdem()<<endl;
	
	return 0;
}