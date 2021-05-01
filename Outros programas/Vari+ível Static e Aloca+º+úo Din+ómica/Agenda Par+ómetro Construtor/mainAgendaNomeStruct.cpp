/* Faça um programa em C++ que contenha uma classe que representa uma pessoa, 
registrando seu nome, endereço, DDD e telefone. Crie também uma classe que 
representa uma agenda, registrando o nome do proprietário e seu CPF. Em todas as 
classes defina os atributos como privados e crie métodos públicos para acessar 
e modificar os atributos. Finalmente, faça um programa que: 
· Crie uma agenda com capacidade para armazenar pessoas. Não esqueça de solicitar 
no início quantas (a agenda terá uma lista de pessoas que devem ser criadas 
dinamicamente);
· Adicione à agenda algumas pessoas, 
· Acrescente o digito 9 em todos os números com DDD 83.
Obs.: Use o construtor default para as duas classes e o destrutor para limpeza 
de memória para a classe Agenda.
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
	int tam; //variável auxiliar para leitura do tamanho máximo da agenda
	Endereco end; //variável auxiliar para leitura do endereço
	string nome; //variável auxiliar para leitura do nome
	int ddd, tel; //variável auxiliar para leitura do ddd e telefone
	int n=0; //utilizado para contar o número de pessoas digitadas
	
	cout<<"Qual o número de pessoas na agenda? ";
	cin>>tam;
	
	//criando a agenda com nome do proprietário e cpf
	Agenda salerno(tam);
	salerno.setNome("Marcus");
	salerno.setCPF(123456);
	
	//inserindo os dados da agenda (nome, endereço, ddd e telefone)
	do{
		cout<<"Digite o nome da pessoa "<<n+1<<":"<<endl;
		cin>>nome;
		p.setNome(nome);
		cout<<"Digite o nome da rua"<<endl;
		cin>>end.rua;
		cout<<"Digite o número da casa"<<endl;
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
		n++; //conta o número de pessoas digitadas
	} while (n<tam);
	
	salerno.imprimeAgenda();
	salerno.insereNove(83);
	cout<<endl<<"Agenda com a inclusão do número 9"<<endl;
	salerno.imprimeAgenda();
	return 0;
}
