#include "..\BibPrototipo\Fornecedor.h"

Fornecedor::Fornecedor(string nome , long int CPF, Endereco endereco_auxi , Data data_auxi, float plafond , float valorEmDivida)
		:Pessoa(nome,CPF,endereco_auxi,data_auxi)
{
	this -> plafond = plafond;
    this -> valorEmDivida = valorEmDivida;
}

void Fornecedor::set_plafond(float plafond){
    this -> plafond = plafond;
}

void Fornecedor::set_valorEmDivida(float valorEmDidida){
    this -> valorEmDivida = valorEmDivida;
}

float Fornecedor::get_plafond()const{
    return plafond;
}

float Fornecedor::get_valorEmDivida()const{
    return valorEmDivida;
}

float Fornecedor::obterSaldo()const{
    return plafond - valorEmDivida;
}
void Fornecedor::imprime()const{
    Pessoa::imprime();
	cout << "Valor de Plafound: " << plafond << endl;
	cout<<"Valor da Dívida: "<< valorEmDivida<<endl;
	cout << "O valor do saldo foi de: " << plafond - valorEmDivida << endl;
	
}
