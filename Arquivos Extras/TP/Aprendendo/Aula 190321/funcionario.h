#ifndef FUNCIONARIO_H_INCLUDED
#define FUNCIONARIO_H_INCLUDED


#include <iostream>
using namespace std;

class Funcionario{
	int matricula;
	string nome;
	int departamento;
	float salario;
	string funcao;
public:
	Funcionario(int, string, int, float, string);
	Funcionario();

	void setMat(int);
	int getMat();

	void setNome(string);
	string getNome();

	void setDep(int);
	int getDep();

	void setSal(float);
	float getSal();

	void setFunc(string);
	string getFunc();

};

#endif // FUNCIONARIO_H_INCLUDED
