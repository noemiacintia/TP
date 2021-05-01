#ifndef PESSOA_H
#define PESSOA_H

struct Endereco{
       string rua;
       int numero;
       string bairro;
       int cep;
};
struct Data{
       int dia;
       int mes;
       int ano;
};

class Pessoa{
      private:
              string nome;
              long int cpf;
              Endereco endereco;
              Data dataNasc;
              
      public:
             Pessoa();
             void setNome(string);
             void setCPF(long int);
             void setEndereco(string,int,string,int);
             void setdataNasc(int,int,int);
             string getNome();
             long int getCPF();
             Endereco getEndereco();
             Data getDataNasc();
};
#endif
