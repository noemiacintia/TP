#ifndef AGENDA_H
#define AGENDA_H

class Agenda{
	string nome;
	long int CPF;
	int maxLista; //tamanho máximo da lista
	Pessoa *ptr;
	int t;  //número atual de pessoas na lista
   public:
   	  Agenda(int);
   	  void setNome(string);
   	  void setCPF(long int);
   	  void setAgenda(Pessoa);
   	  void insereNove(int); //insere o número 9 em todos os números que tiverem 83
   	  string getNome() const;
   	  long int getCPF() const;
   	  void imprimeAgenda() const;
   	  ~Agenda();
};

#endif