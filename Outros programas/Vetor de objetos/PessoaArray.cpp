#include "PessoaArray.h"

Pessoa::Pessoa(){   //Inicializa os atributos da classe Pessoa
                 nome = " ";
                 cpf =0;
}

void Pessoa::setNome(string n){
     nome = n;
}

void Pessoa::setCPF (long int cpf){
     this->cpf = cpf;
}

string Pessoa::getNome(){
       return nome;
}

long int Pessoa::getCPF(){
       return cpf;
}
