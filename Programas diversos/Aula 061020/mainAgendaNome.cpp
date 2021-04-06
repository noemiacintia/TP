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

#include "Pessoa.cpp"
#include "Agenda.cpp"

int main(){
	setlocale(LC_ALL, "");
	Pessoa p;
	
	Agenda salerno(100);
	salerno.setNome("Marcus");
	salerno.setCPF(123456);
	p.setNome("Jo�o");
	p.setEndereco("Rua das Flores",333,"Primavera",58000);
	p.setDDD(83);
	p.setTelefone(33331000);

	salerno.setAgenda(p);
	salerno.imprimeAgenda();
	
	salerno.insereNove(83);
	salerno.imprimeAgenda();
	return 0;
}
