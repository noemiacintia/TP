#ifndef PESSOAPARAMETROSTRUCt_H
#define PESSOAPARAMETROSTRUCT_H

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
             Pessoa(string="", string="", int=0, string="", int=0, int=0, int=0);
             void setNome(string);
             void setEndereco(Endereco);
             void setEndereco(string="",int=0,string="",int=0);
             void setDDD(long int);
             void setTelefone(int);
             string getNome() const;
             Endereco getEndereco() const;
             long int getDDD() const;
             int getTelefone() const;
};
#endif
