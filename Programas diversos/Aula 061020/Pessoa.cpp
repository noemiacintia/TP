#include "pessoa.h"

Pessoa::Pessoa(){
                 
                 nome = "";
                 endereco.rua="";
                 endereco.numero=0;
                 endereco.bairro="";
                 endereco.CEP=0;
                 DDD = 0;
                 telefone=0;

}

#include "Pessoa.h"

void Pessoa::setNome(string n){
     nome = n;
}

void Pessoa::setEndereco(string r, int n, string b, int cep){  
     endereco.rua=r;
     endereco.numero=n;
     endereco.bairro=b;
     endereco.CEP=cep;     
}

void Pessoa::setDDD (int ddd){
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

int Pessoa::getDDD() const{
       return DDD;
}

int Pessoa::getTelefone() const{
     return telefone;
}

