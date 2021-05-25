/*
Crie uma classe Funcionário cujos atributos são: 
número de matrícula, departamento, salário e Pessoa. Neste caso, Pessoa é um objeto 
cujos atributos são nome, endereço e cpf. Considere também que existam 3 departamentos 
(1 - Produção; 2 - Vendas; 3 - Marketing).
Na main, faça uma aplicação que leia os dados de n funcionários (ou seja, é necessário criar um vetor 
de n posições do tipo funcionário),  e calcule o total 
de salário desses funcionários e o total de salário por departamento. 

*/

#include <iostream>
#include <clocale>
#include <iomanip>
#include <cstring>
#include <stdio.h>

using namespace std;

#include "PessoaArray.cpp"
#include "FuncionarioArray.cpp"

int main(){
	setlocale(LC_ALL, "Portuguese");
	long int mat, cpf;
	int dep, n, i;
	float sal, totSal=0;
	string nome;

	Funcionario f1[20];  //cria um vetor de no máximo 20 posições (reserva espaço de memória
	Pessoa p;

	cout<<"Qual o número de funcionários (<=20)?"<<endl;
	cin>>n;
	for (i=0;i<n;i++){
		cout<<"Digite o nome do funcionário "<<i+1<<": ";
		fflush(stdin);
		cin>>nome;
		cout<<"Digite o CPF do funcionário: ";
		cin>>cpf;
		cout<<"Digite a matrícula: ";
		cin>>mat;
		cout<<"Digite o departamento: ";
		cin>>dep;
		cout<<"Digite o salario: ";
		cin>>sal;
		
		p.setNome(nome);
	   	p.setCPF(cpf);
	   	f1[i].setDadosFunc(mat, dep, sal, p);
	   	cout<<endl;
	}
	cout<<endl<<"DADOS DOS FUNCIONÁRIOS"<<endl;
	for (i=0;i<n;i++){
		f1[i].imprimeDadosFunc();
	}
	
	for (i=0;i<n;i++)
	   	totSal +=f1[i].getSal();
	cout<<endl<<"O salário total dos funcionários é: "<<fixed<<setprecision(2)<<totSal<<endl;
	return 0;
}