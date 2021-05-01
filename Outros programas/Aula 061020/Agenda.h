#ifndef AGENDA_H
#define AGENDA_H

class Agenda{
	string nome;
	long int CPF;
	int maxLista; //tamanho m�ximo da lista
	Pessoa *ptr;
	int t;  //n�mero atual de pessoas na lista
   public:
   	  Agenda(int);
   	  void setNome(string);
   	  void setCPF(long int);
   	  void setAgenda(Pessoa);
   	  void insereNove(int); //insere o n�mero 9 em todos os n�meros que tiverem 83
   	  string getNome() const;
   	  long int getCPF() const;
   	  void imprimeAgenda() const;
   	  ~Agenda();
};

#endif