#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

#include "Pessoa.cpp"

int main()
{
    // para traduzir os cout's pro portugu�s
    setlocale(LC_ALL, "Portuguese");
    cout << "Este programa" << endl << endl;
    // vari�veis para guardar informa��es que o usu�rio digitar
    string nomeFun, cpf;
    cout << "Insira os seguintes dados do empregado: " << endl << endl;
    cout << "Nome: ";
    cin >> nomeFun;
    cout << endl << "CPF: ";
    cin >> cpf;
    // definindo o objeto da classe
    Pessoa pessoa1;
    pessoa1.setNome(nomeFun);
    pessoa1.setCPF(cpf);
    pessoa1.imprimeNomeCPF();
    return 0;
}

