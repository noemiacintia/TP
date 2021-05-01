/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674

INTRODUÇÃO A C++
LVP 00: Faça um programa, utilizando os
comandos de C++, que leia dois números e
calcule o resto da divisão do primeiro
pelo segundo. Escreva o resultado.

*/
#include <iostream> // biblioteca para os comandos de entrada e saida
using namespace std; // definindo todas as funções da biblioteca padrão

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
