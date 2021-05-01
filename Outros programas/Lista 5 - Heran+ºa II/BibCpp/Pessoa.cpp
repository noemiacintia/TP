//atenção a localização do arquivo Pessoa.h
#include "C:\cpMarcus\Atuais Disciplinas 2020.1e\TP 2020.1e\Lista 5 Exemplo\BibPrototipo\Pessoa.h"

Pessoa::Pessoa(){
	this -> nome = "";
    this -> CPF = 0;
    ende.rua = "";
    ende.numero = 0;
	ende.bairro = "";
	ende.CEP=0;
	datanasc.dia = 0;
	datanasc.mes = 0;
	datanasc.ano = 0;
}

Pessoa::Pessoa(string nome, long int CPF, Endereco endereco_auxi, Data data_auxi){
    this -> nome = nome;
    this -> CPF = CPF;
    ende = endereco_auxi;
    datanasc = data_auxi;
}

void Pessoa::setNome(string nome){
    this -> nome = nome;
}

void Pessoa::setCPF(long int CPF){
    this -> CPF = CPF;
}

void Pessoa::setEndereco(Endereco endereco_auxi){
    ende = endereco_auxi;
}

void Pessoa::setDataNasc(Data data_auxi){
    datanasc = data_auxi;
}

string Pessoa::getNome(void) const{
    return nome;
}

long int Pessoa::getCPF(void)const{
    return CPF;
}

Endereco Pessoa::getEndereco() const{
    return ende;
}

Data Pessoa::getDataNasc(void)const{
    return datanasc;
}

void Pessoa::imprime()const{
    cout << "Nome: " << getNome() << endl;
    cout << "CPF: " << getCPF() << endl;
    cout << "Endereço Rua: " << getEndereco().rua << " Numero: " << getEndereco().numero << " Bairro: " << getEndereco().bairro << " CEP: " << getEndereco().numero << endl;
    cout << "Data Nascimento: " << getDataNasc().dia << "/" << getDataNasc().mes << "/" << getDataNasc().ano << endl;
}
