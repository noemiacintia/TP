#include "pessoa.h"

Pessoa::Pessoa(){//Inicializa as struct e os atributos simples da classe Pessoa
                 dataNasc.dia=0;
                 dataNasc.mes=0;
                 dataNasc.ano=0;
                 nome = " ";
                 cpf =00000000000;
                 endereco.rua=" ";
                 endereco.numero=0;
                 endereco.bairro=" ";
                 endereco.cep=0;

}

void Pessoa::setNome(string n){
     nome = n;
}

void Pessoa::setCPF (long int cpf){
     this->cpf = cpf;
}

void Pessoa::setEndereco(string r, int n, string b, int Cep){
     
     endereco.rua=r;
     endereco.numero=n;
     endereco.bairro=b;
     endereco.cep=Cep;     
}


void Pessoa::setdataNasc(int d,int m,int a){
     
     dataNasc.dia=d;
     dataNasc.mes=m;
     dataNasc.ano=a;
}
     
string Pessoa::getNome(){
       return nome;
}

long int Pessoa::getCPF(){
       return cpf;
}

Data Pessoa::getDataNasc(){
     return dataNasc;
}

Endereco Pessoa::getEndereco(){
    return endereco;
}
