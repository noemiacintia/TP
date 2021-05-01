/* Crie uma classe chamada Complexo para realizar aritmética com números complexos.  
Descrição: Utilize variáveis do tipo inteiro para representar os dados private da classe 
- o número real e o número imaginário. Forneça um construtor que permita que um objeto 
dessa classe seja inicializado com valores default quando ele for declarado. 
O construtor deve conter valores-padrão no caso de nenhum inicializador ser fornecido. 
Forneça funções-membro public que realizam cada uma das tarefas a seguir:
a)	Multiplicar dois números Complexos.
b)	Somar dois números Complexos. 
Adicione à classe anterior chamada Complexo a seguinte funcionalidade:
a)	Imprimir os números Complexos na forma x + yi, onde x é o número real e y é o 
número imaginário.
Maiores informações sobre operações com Números Complexos: 
https://matematicabasica.net/numeros-complexos/#adi%C3%A7%C3%A3o-com-n%C3%BAmeros-complexos
*/

#include <iostream>
#include <locale.h>

using namespace std;

#include "NroComplexos.cpp"

int main(){
	setlocale(LC_ALL,"");
	
	Complexo complex1(3,2), complex2(2,5), complexR;
	complexR.imprime();
	complexR.multiplica(complex1, complex2);
	complexR.imprime();
	complexR.soma(complex1, complex2);
	complexR.imprime();
	return 0;
};