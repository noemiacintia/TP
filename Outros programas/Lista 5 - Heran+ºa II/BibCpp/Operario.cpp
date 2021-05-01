#include "..\BibPrototipo\Operario.h"

Operario::Operario (string nome, long int CPF ,  Endereco endereco_auxi, Data data_auxi ,int numeroSecao, float salarioBase, float INSS, 
			float valorProducao, float comissao):Empregado(nome , CPF, endereco_auxi, data_auxi, numeroSecao, salarioBase, INSS){
	this -> valorProducao = valorProducao;
	this -> comissao = comissao;		
}

void Operario::set_valorP(float valorProducao){
	this -> valorProducao = valorProducao;
}

void Operario::set_valorC(float comissao){
	this -> comissao=comissao;
}

float Operario::get_valorP()const{
	return valorProducao;
}

float Operario::get_valorC()const{
	return comissao;
}

float Operario::calculaSalario() const{
	return Empregado::calculaSalario() + (comissao/100)*valorProducao;
}

void Operario::imprime()const{
    Empregado::imprime();
	cout << "O valor da producao foi: "<< valorProducao <<endl;
	cout << "O valor da comissão foi: "<< comissao << endl;
	cout << "O salario final: "<< calculaSalario()<< endl;	
}	
