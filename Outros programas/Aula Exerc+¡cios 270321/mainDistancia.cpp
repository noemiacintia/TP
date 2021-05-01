/*
Construa uma classe Cidade que possua como atributos o nome e as coordenadas 
x e y que representam a latidude e longitude da cidade. Construa tamb�m uma classe 
dist�ncia, respons�vel por calcular e armazenar a dist�ncia entre cidades. Essa 
classe ter� como atributos a dist�ncia e o nome das cidades cuja dist�ncia ser�
calculada. Sendo assim, um m�todo que recebe duas cidades, calcula a dist�ncia 
entre elas e armazena essas informa��es.  
Fa�a um programa que leia o nome de quatro cidades com as suas coordenadas. 
Tendo a primeira cidade como refer�ncia, calcule a dist�ncia dessa cidade 
em rela��o �s demais, informando a dist�ncia e o respectivo nome das cidades 
em cada caso.  
*/

#include <iostream>
#include <clocale>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

#include "Cidade.cpp"
#include "Distancia.cpp"

int main()
{
	setlocale(LC_ALL, "Portuguese");
	Cidade cidade1, cidade2("Campina",7,13,51,35,52,54);
	Distancia dist1;
	
	cidade1.setNome("Jo�o Pessoa");
	cidade1.setlatG(7);
	cidade1.setlatM(6);
	cidade1.setlatS(55);
	cidade1.setlonG(34);
	cidade1.setlonM(51);
	cidade1.setlonS(40);
	cout<<"Cidade1: "<<cidade1.getNome()<<endl;
	cout<<"Coordenadas: "<<endl;
	cout<<cidade1.getlatG()<<" "<<cidade1.getlatM()<<" "<<cidade1.getlatS()<<endl;
	cout<<cidade1.getlonG()<<" "<<cidade1.getlonM()<<" "<<cidade1.getlonS()<<endl;
	cout<<"Cidade2: "<<cidade2.getNome()<<endl;
	cout<<"Coordenadas: "<<endl;
	cout<<cidade2.getlatG()<<" "<<cidade2.getlatM()<<" "<<cidade2.getlatS()<<endl;
	cout<<cidade2.getlonG()<<" "<<cidade2.getlonM()<<" "<<cidade1.getlonS()<<endl;

	dist1.setCidades(cidade1,cidade2);
	dist1.calculaDist();
	dist1.imprimeDistancia();
	return 0;
}
