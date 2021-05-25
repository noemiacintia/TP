/*
Crie uma classe Funcion�rio cujos atributos s�o: 
n�mero de matr�cula, departamento, sal�rio e Pessoa. Neste caso, Pessoa � um objeto 
cujos atributos s�o nome, endere�o e cpf. Considere tamb�m que existam 3 departamentos 
(1 - Produ��o; 2 - Vendas; 3 - Marketing).
Na main, fa�a uma aplica��o que leia os dados de n funcion�rios (ou seja, � necess�rio criar um vetor 
de n posi��es do tipo funcion�rio),  e calcule o total 
de sal�rio desses funcion�rios e o total de sal�rio por departamento. 

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

	Funcionario f1[20];  //cria um vetor de no m�ximo 20 posi��es (reserva espa�o de mem�ria
	Pessoa p;

	cout<<"Qual o n�mero de funcion�rios (<=20)?"<<endl;
	cin>>n;
	for (i=0;i<n;i++){
		cout<<"Digite o nome do funcion�rio "<<i+1<<": ";
		fflush(stdin);
		cin>>nome;
		cout<<"Digite o CPF do funcion�rio: ";
		cin>>cpf;
		cout<<"Digite a matr�cula: ";
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
	cout<<endl<<"DADOS DOS FUNCION�RIOS"<<endl;
	for (i=0;i<n;i++){
		f1[i].imprimeDadosFunc();
	}
	
	for (i=0;i<n;i++)
	   	totSal +=f1[i].getSal();
	cout<<endl<<"O sal�rio total dos funcion�rios �: "<<fixed<<setprecision(2)<<totSal<<endl;
	return 0;
}