#include "..\BibPrototipo\Vendedor.h"

Vendedor::Vendedor (string nome, long int CPF ,  Endereco endereco_auxi, Data data_auxi ,int numeroSecao, float salarioBase, float INSS, 
			float valorVendas, float comissao):Empregado(nome , CPF, endereco_auxi, data_auxi, numeroSecao, salarioBase, INSS){
	this -> valorVendas = valorVendas;
	this -> comissao = comissao;		
}
void Vendedor::setValorVendas(float valorProducao){
	this -> valorVendas = valorVendas;
}

void Vendedor::setComissao(float comissao){
	this -> comissao=comissao;
}

float Vendedor::getValorVendas()const{
	return valorVendas;
}

float Vendedor::getComissao()const{
	return comissao;
}

float Vendedor::calculaSalario() const{
	return Empregado::calculaSalario() + (comissao/100)*valorVendas;
}

void Vendedor::imprime()const{
    Empregado::imprime();
	cout << "O valor de vendas foram: "<< valorVendas << endl;
	cout << "O valor da comissão foi: "<< comissao << endl;
	cout << "O salario final: "<< calculaSalario()<< endl;	
}	
