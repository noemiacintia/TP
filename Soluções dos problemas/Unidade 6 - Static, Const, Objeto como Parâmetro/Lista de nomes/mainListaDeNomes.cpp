/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
Unidade 6 - LVP 13:

Crie uma classe que possui como atributos uma
lista de nomes e o seu tamanho m�ximo.
Crie um m�todo para essa classe que ordena os
nomes em ordem alfab�tica, um m�todo que insere
um nome na lista e um m�todo que imprime essa
lista ordenada. N�o esque�a de criar a lista
dinamicamente no construtor, a partir do valor
do tamanho m�ximo passado por par�metro. N�o
esque�a tamb�m de liberar no Destrutor o
espa�o de mem�ria utilizado.

Na main, crie uma aplica��o para inserir 5 nomes
na lista, imprimir a lista como foi digitada e
imprimir essa lista ordenada. Em seguida,
insira um novo nome e imprima a lista ordenada.

Entradas
Devem ser informados o tamanho da lista e os
nomes para inserir na lista.

Sa�das
Devem ser mostrados uma lista com todos os
nomes inseridos e depois uma lista com os nomes
ordenados. */

#include <string>
#include <iostream>
#include <locale>
#include <stdio.h>

using namespace std;

#include "ListaDeNomes.cpp"

int main()
{
    // para traduzir os cout's pro portugu�s
    setlocale(LC_ALL, "Portuguese");
    cout << "Este programa coloca em ordem alfab�tica, "
         << "uma lista de nomes informados pelo usu�rio "
         << endl << endl;
    // vari�veis para guardar informa��es que o usu�rio digitar
    int tamanhoMax, i;
    string listaNomes;
    cout << "Digite o tamanho m�ximo da lista de nomes:" << endl;
    cin >> tamanhoMax;
    // definindo o objeto da classe e passando o tamanho max da lista
    ListaDeNomes lista(tamanhoMax);
    fflush(stdin);
    cout << "Insira os nomes:" << endl;
    // guardando e passando pra classe os nomes que o usu�rio informa
    for(i=0; i<5; i++)
    {
        cin >> listaNomes;
        lista.insereNomes(listaNomes);
    }

    // chamando os m�todos para ordenar e imprimir a lista
    cout << endl << "Lista inserida:" << endl;
    lista.imprimeNomes();
    lista.ordenaNomes();
    cout << endl << "Lista Ordenada:" << endl << endl;
    lista.imprimeNomes();
    cout << "Insira um nome: ";
    // inserindo um nome no vetor
    cin >> listaNomes;
    lista.insereNomes(listaNomes);
    // chamando novamente os m�todos para ordenar e imprimir a nova lista
    lista.ordenaNomes();
    cout << endl << "Lista Ordenada:" << endl << endl;
    lista.imprimeNomes();
    cout << "Memoria Liberada.";
    return 0;
}
