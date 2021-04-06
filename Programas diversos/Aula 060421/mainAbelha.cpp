/* Cria uma classe de abelhas, onde cada abelha pode possuir um nome. Usando a
   variável static, é possível contar quantas abelhas tem durante a execução
   do programa */
   
#include <iostream>
#include <cstring>
using namespace std;

#include "abelha.cpp"

int main() { 
	cout << "Total de abelhas = " << Abelha::total_de_abelhas() << endl; 
	Abelha ab1("Mara"), ab2, ab3("Vilma");   // cria abelhas 
	cout << "Abelha ab1= " << ab1.nome() << endl; 
	cout << "Abelha ab2= " << ab2.nome() << endl; 
	cout << "Abelha ab3= " << ab3.nome() << endl; 
	cout << "Total de abelhas = " << Abelha::total_de_abelhas() << endl; 
	return 0;
} 
