#ifndef PESSOAARRAY_H
#define PESSOAARRAY_H

class Pessoa{
      private:
              string nome;
              long int cpf;
      public:
             Pessoa();
             void setNome(string);
             void setCPF(long int);
             string getNome();
             long int getCPF();
};
#endif
