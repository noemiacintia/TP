/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674

INTRODU��O A C++
LVP 00: Fa�a um programa, utilizando os
comandos de C++, que leia dois n�meros e
calcule o resto da divis�o do primeiro
pelo segundo. Escreva o resultado.

*/
#include <iostream> // biblioteca para os comandos de entrada e saida
using namespace std; // definindo todas as fun��es da biblioteca padr�o

int main()
{
    // declarando as variaveis com os numeros que iremos pedir ao usuario
    int num1=0;
    int num2=0;
    cout << "Este programa calcula o resto da divisao entre dois numeros"
    "informados pelo usuario.";
    cout << "\n\nInsira o primeiro numero: ";
    cin >> num1; // pedindo numeros ao usuario
    cout << "Insira o segundo numero: ";
    cin >> num2;
    // calculando e exibindo o resto da divisao
    cout << "O resto da divisao dos numeros eh: " << num1%num2 << endl;
    return 0;
}
