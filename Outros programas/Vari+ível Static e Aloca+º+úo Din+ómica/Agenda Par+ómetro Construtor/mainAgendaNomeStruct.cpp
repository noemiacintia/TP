/* Fa�a um programa em C++ que contenha uma classe que representa uma pessoa, 
registrando seu nome, endere�o, DDD e telefone. Crie tamb�m uma classe que 
representa uma agenda, registrando o nome do propriet�rio e seu CPF. Em todas as 
classes defina os atributos como privados e crie m�todos p�blicos para acessar 
e modificar os atributos. Finalmente, fa�a um programa que: 
� Crie uma agenda com capacidade para armazenar pessoas. N�o esque�a de solicitar 
no in�cio quantas (a agenda ter� uma lista de pessoas que devem ser criadas 
dinamicamente);
� Adicione � agenda algumas pessoas, 
� Acrescente o digito 9 em todos os n�meros com DDD 83.
Obs.: Use o construtor default para as duas classes e o destrutor para limpeza 
de mem�ria para a classe Agenda.
 */

#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

#include "PessoaParametroStruct.cpp"
#include "Agenda.cpp"

int main(){
	setlocale(LC_ALL, "");
	Pessoa p;
	int tam; //vari�vel auxiliar para leitura do tamanho m�ximo da agenda
	Endereco end; //vari�vel auxiliar para leitura do endere�o
	string nome; //vari�vel auxiliar para leitura do nome
	int ddd, tel; //vari�vel auxiliar para leitura do ddd e telefone
	int n=0; //utilizado para contar o n�mero de pessoas digitadas
	
	cout<<"Qual o n�mero de pessoas na agenda? ";
	cin>>tam;
	
	//criando a agenda com nome do propriet�rio e cpf
	Agenda salerno(tam);
	salerno.setNome("Marcus");
	salerno.setCPF(123456);
	
	//inserindo os dados da agenda (nome, endere�o, ddd e telefone)
	do{
		cout<<"Digite o nome da pessoa "<<n+1<<":"<<endl;
		cin>>nome;
		p.setNome(nome);
		cout<<"Digite o nome da rua"<<endl;
		cin>>end.rua;
		cout<<"Digite o n�mero da casa"<<endl;
		cin>>end.numero;
		cout<<"Digite o bairro"<<endl;
		cin>>end.bairro;
		cout<<"Digite o CEP da rua"<<endl;
		cin>>end.CEP;
		p.setEndereco(end);
		cout<<"Digite o DDD"<<endl;
		cin>>ddd;
		p.setDDD(ddd);
		cout<<"Digite o telefone"<<endl;
		cin>>tel;
		p.setTelefone(tel);
		salerno.setAgenda(p);
		n++; //conta o n�mero de pessoas digitadas
	} while (n<tam);
	
	salerno.imprimeAgenda();
	salerno.insereNove(83);
	cout<<endl<<"Agenda com a inclus�o do n�mero 9"<<endl;
	salerno.imprimeAgenda();
	return 0;
}
