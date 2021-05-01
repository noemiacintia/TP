/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
Unidade 5 - LVP 11:

Crie uma classe Nome que armazene o nome e cpf
de uma pessoa. O construtor pode ser criado por
default (sem par�metros).

Na main, crie um vetor de 50 posi��es do tipo
Nome. Pergunte ao usu�rio quantos nomes com o
respectivo cpf ele deseja armazenar nesse vetor.
Escreva os dados desse vetor. Em seguida, ordene
esse vetor e escreva o vetor ordenado. */

#include <iostream>
#include <locale>
#include <string>
#include <stdio.h>

using namespace std;

#include "Nome.cpp"

int main()
{
    // para traduzir os cout's pro portugu�s
    setlocale(LC_ALL, "Portuguese");
    // definindo um vetor como objeto classe
    Nome pessoas[50];
    // aux1 para chamar o m�todo imprimeDadosOrdenados()
    Nome aux1;
    // vari�veis para guardar os valores que o usu�rio digitar
    int n, i;
    string nomePessoa;
    string cpfPessoa;
    cout << "Este programa retorna em ordem alfab�tica"
         << " as pessoas cadastradas pelo usu�rio." << endl << endl;
    cout << "Quantas pessoas voc� deseja cadastrar: " << endl << endl;
    cin >> n;
    cout << endl << "Digite o nome e CPF de "
         << n << " pessoas: " << endl << endl;

    // percorrendo e armazenando no vetor de objetos
    for(i=0; i<n; i++)
    {
        fflush(stdin);
        cin >> nomePessoa >> cpfPessoa;
        pessoas[i].setNome(nomePessoa);
        pessoas[i].setCPF(cpfPessoa);
    }

    // imprimindo os dados do vetor
    cout << endl << "Dados do vetor: " << endl << endl;
    for(i=0; i<n; i++)
    {
        cout << "Nome: " << pessoas[i].getNome()
             << " CPF: " << pessoas[i].getCPF() << endl << endl;
    }

    // imprimindo os dados do vetor ordenados
    aux1.imprimeDadosOrdenados(pessoas, n);
    cout << "Dados do vetor ordenados por nome: " << endl << endl;
    for(i=0; i<n; i++)
    {
        cout << "Nome: " << pessoas[i].getNome()
             << " CPF: " << pessoas[i].getCPF() << endl << endl;
    }

    return 0;
}
