/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
Unidade 5 - LVP 11:

Crie uma classe Nome que armazene o nome e cpf
de uma pessoa. O construtor pode ser criado por
default (sem parâmetros).

Na main, crie um vetor de 50 posições do tipo
Nome. Pergunte ao usuário quantos nomes com o
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
    // para traduzir os cout's pro português
    setlocale(LC_ALL, "Portuguese");
    // definindo um vetor como objeto classe
    Nome pessoas[50];
    // aux1 para chamar o método imprimeDadosOrdenados()
    Nome aux1;
    // variáveis para guardar os valores que o usuário digitar
    int n, i;
    string nomePessoa;
    string cpfPessoa;
    cout << "Este programa retorna em ordem alfabética"
         << " as pessoas cadastradas pelo usuário." << endl << endl;
    cout << "Quantas pessoas você deseja cadastrar: " << endl << endl;
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
