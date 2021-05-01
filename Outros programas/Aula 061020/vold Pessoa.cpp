#include "pessoa.h"

Pessoa::Pessoa(strintg name, string endRua, int endNumero, string endBairro, int endCEP,
    int ddd, int tel){//Inicializa as struct e os atributos simples da classe Pessoa
                 
                 nome = name;
                 endereco.rua=endRua;
                 endereco.numero=endNumero;
                 endereco.bairro=endBairro;
                 endereco.CEP=endCEP;
                 DDD = ddd;
                 telefone=tel;

}

#include "Pessoa.h"

void Pessoa::setNome(string n){
     nome = n;
}

void Pessoa::setEndereco(string r, int n, string b, int cep){  
     Endereco.rua=r;
     Endereco.numero=n;
     Endereco.bairro=b;
     Endereco.CEP=cep;     
}

void Pessoa::setDDD (long int ddd){
     DDD = ddd;
}

void setTelefone(int tel){
	telefone=tel;
}

string Pessoa::getNome(){
       return nome;
}

endereco Pessoa::getEndereco(){
    return Endereco;
}

long int Pessoa::getDDD(){
       return DDD;
}

data Pessoa::getTelefone(){
     return telefone;
}

