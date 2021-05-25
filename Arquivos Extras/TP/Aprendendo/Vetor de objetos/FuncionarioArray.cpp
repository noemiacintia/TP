#include "FuncionarioArray.h"

Funcionario::Funcionario(){
	this->matricula=0;
	this->departamento=0;
	this->salario=0.0;
}
void Funcionario::setDadosFunc(long int matricula, int departamento, float salario, Pessoa pessoa){
	this->matricula=matricula;
	this->departamento=departamento;
	this->salario=salario;
	this->pessoa=pessoa;
}
void Funcionario::setMat(long int){
	this->matricula=matricula;
}
long int Funcionario::getMat(){
	return matricula;
}

void Funcionario::setDep(int){
	this->departamento=departamento;
}
int Funcionario::getDep(){
	return departamento;
}

void Funcionario::setSal(float){
	this->salario=salario;
}
float Funcionario::getSal(){
	return salario;
}

void Funcionario::imprimeDadosFunc(){
	cout<<pessoa.getNome()<<" "<<pessoa.getCPF()<<" "<<matricula<<" "<<departamento<<" "<<fixed<<setprecision(2)<<salario<<" "<<endl;
}