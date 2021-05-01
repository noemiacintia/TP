#include "PessoaparametroStruct.h"

Pessoa::Pessoa(string name, string endRua, int endNumero, string endBairro, int endCEP,
    int ddd, int tel){//Inicializa as struct e os atributos simples da classe Pessoa
                 
                 nome = name;
                 endereco.rua=endRua;
                 endereco.numero=endNumero;
                 endereco.bairro=endBairro;
                 endereco.CEP=endCEP;
                 DDD = ddd;
                 telefone=tel;

}


void Pessoa::setNome(string n){
     nome = n;
}

void Pessoa::setEndereco(Endereco end){  
     endereco=end;
}

void Pessoa::setEndereco(string endRua,int endNumero,string endBairro,int endCEP){
	endereco.rua=endRua;
    endereco.numero=endNumero;
    endereco.bairro=endBairro;
    endereco.CEP=endCEP;
}


void Pessoa::setDDD (long int ddd){
     DDD = ddd;
}

void Pessoa::setTelefone(int tel){
	telefone=tel;
}

string Pessoa::getNome() const{
       return nome;
}

Endereco Pessoa::getEndereco() const{
    return endereco;
}

long int Pessoa::getDDD() const{
       return DDD;
}

int Pessoa::getTelefone() const{
     return telefone;
}

