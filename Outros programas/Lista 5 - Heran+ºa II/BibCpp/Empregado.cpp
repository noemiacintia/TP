//atenção a localização do arquivo Empregado.h
#include "..\BibPrototipo\Empregado.h"

Empregado::Empregado():Pessoa(){
	this -> numeroSecao = 0;
    this -> salarioBase = 0.0;
    this -> INSS = 0;
}
Empregado::Empregado(string nome, long int CPF ,  Endereco endereco_auxi, Data data_auxi ,int numeroSecao, float salarioBase, float INSS):
Pessoa(nome,CPF,endereco_auxi,data_auxi){
    this -> numeroSecao = numeroSecao;
    this -> salarioBase = salarioBase;
    this -> INSS = INSS;
}

void Empregado::setNumeroSecao(int numeroSecao){
    this -> numeroSecao = numeroSecao;
}

int Empregado::getNumeroSecao()const{
    return numeroSecao;
}

void Empregado::setSalarioBase(float salarioBase){
    this -> salarioBase = salarioBase;
}

float Empregado::getSalarioBase()const{
    return salarioBase;
}

void Empregado::setINSS(float INSS){
    this -> INSS = INSS;
}

float Empregado::getINSS() const{
    return INSS;
}

float Empregado::calculaSalario() const{
    return salarioBase - ((salarioBase*INSS)/100);
}

void Empregado::imprime() const{
    Pessoa::imprime();
    cout << "Numero da seção: " << numeroSecao << endl;
    cout << "Salario bruto: " << salarioBase << endl;
    cout << "Porcentagem do INSS: " << INSS<<"%"<<endl;
    cout << "Salario base: " << calculaSalario() << endl;
}
