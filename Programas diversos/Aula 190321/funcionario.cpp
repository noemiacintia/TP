#include "funcionario.h"

Funcionario::Funcionario(int mat, string nom, int dep, float sal, string func)
			:matricula(mat), nome(nom), departamento(dep), salario(sal), funcao(func){}


Funcionario::Funcionario(){
    matricula = 0;
    departamento = 0;
    salario = 0;
}

void Funcionario::setMat(int m){
    matricula = m;
}

int Funcionario::getMat(){
    return matricula;
}
void Funcionario::setNome(string n){
    nome = n;
}
string Funcionario::getNome(){
    return nome;
}

void Funcionario::setDep(int d){
    departamento = d;
}

int Funcionario::getDep(){
    return departamento;
}

void Funcionario::setSal(float s){
    salario = s;
}

float Funcionario::getSal(){
    return salario;
}

void Funcionario::setFunc(string f){
    funcao = f;
}

string Funcionario::getFunc(){
    return funcao;
}
