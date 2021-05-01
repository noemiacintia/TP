#ifndef PESSOA_H
#define PESSOA_H

struct Endereco{
       string rua;
       int numero;
       string bairro;
       int CEP;
};

class Pessoa{
      private:
              string nome;
              Endereco endereco;
              int DDD;
              int telefone;
              
      public:
             Pessoa(string, Endereco, int, int);
             void setNome(string);
             void setEndereco(string,int,string,int);
             void setDDD(int);
             void setTelefone(int);
             string getNome() const;
             Endereco getEndereco() const;
             int getDDD() const;
             int getTelefone() const;
};
#endif
