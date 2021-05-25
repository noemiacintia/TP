#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

#include "Empregado.cpp"

int main()
{
    // para traduzir os cout's pro português
    setlocale(LC_ALL, "Portuguese");
    cout << "Este programa" << endl << endl;
    // variáveis para guardar informações que o usuário digitar
    int numSecao;
    float salariobase, ir;
    cout << "Insira os seguintes dados do empregado: " << endl << endl;
    cout << endl << "Número da seção: ";
    cin >> numSecao;
    cout << endl << "Salário base: ";
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
