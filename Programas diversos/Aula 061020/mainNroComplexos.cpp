/* Crie uma classe chamada Complexo para realizar aritm�tica com n�meros complexos.  
Descri��o: Utilize vari�veis do tipo inteiro para representar os dados private da classe 
- o n�mero real e o n�mero imagin�rio. Forne�a um construtor que permita que um objeto 
dessa classe seja inicializado com valores default quando ele for declarado. 
O construtor deve conter valores-padr�o no caso de nenhum inicializador ser fornecido. 
Forne�a fun��es-membro public que realizam cada uma das tarefas a seguir:
a)	Multiplicar dois n�meros Complexos.
b)	Somar dois n�meros Complexos. 
Adicione � classe anterior chamada Complexo a seguinte funcionalidade:
a)	Imprimir os n�meros Complexos na forma x + yi, onde x � o n�mero real e y � o 
n�mero imagin�rio.
Maiores informa��es sobre opera��es com N�meros Complexos: 
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