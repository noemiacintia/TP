#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

#include "Empregado.cpp"

int main()
{
    // para traduzir os cout's pro portugu�s
    setlocale(LC_ALL, "Portuguese");
    cout << "Este programa" << endl << endl;
    // vari�veis para guardar informa��es que o usu�rio digitar
    int numSecao;
    float salariobase, ir;
    cout << "Insira os seguintes dados do empregado: " << endl << endl;
    cout << endl << "N�mero da se��o: ";
    cin >> numSecao;
    cout << endl << "Sal�rio base: ";
    cin >> salariobase;
    cout << endl << "Imposto de renda: ";
    cin >> ir;
    // definindo o objeto da classe
    Empregado pessoa1;
    pessoa1.setIR(ir);
    pessoa1.setSalarioBase(salariobase);
    pessoa1.setNumeroSecao(numSecao);
    pessoa1.imprimeDados();
    return 0;
}
