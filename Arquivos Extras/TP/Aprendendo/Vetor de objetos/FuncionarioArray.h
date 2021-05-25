#ifndef FUNCIONARIOARRAY_H
#define FUNCIONARIOARRAY_H

class Funcionario{
	long int matricula;
	int departamento;
	float salario;
	Pessoa pessoa;
	
  public:
  	Funcionario();
	void setDadosFunc(long int, int, float, Pessoa);
  	void setMat(long int);
	long int getMat();

	void setNome(string);
	string getNome();

	void setDep(int);
	int getDep();

	void setSal(float);
	float getSal();
	
	void imprimeDadosFunc();
};

#endif

