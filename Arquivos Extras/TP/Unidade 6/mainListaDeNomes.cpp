/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
Unidade 6 - LVP 13:

Crie uma classe que possui como atributos uma
lista de nomes e o seu tamanho máximo.
Crie um método para essa classe que ordena os
nomes em ordem alfabética, um método que insere
um nome na lista e um método que imprime essa
lista ordenada. Não esqueça de criar a lista
dinamicamente no construtor, a partir do valor
do tamanho máximo passado por parâmetro. Não
esqueça também de liberar no Destrutor o
espaço de memória utilizado.

Na main, crie uma aplicação para inserir 5 nomes
na lista, imprimir a lista como foi digitada e
imprimir essa lista ordenada. Em seguida,
insira um novo nome e imprima a lista ordenada.

Entradas
Devem ser informados o tamanho da lista e os
nomes para inserir na lista.

Saídas
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
    // para traduzir os cout's pro português
    setlocale(LC_ALL, "Portuguese");
    cout << "Este programa coloca em ordem alfabética, "
         << "uma lista de nomes informados pelo usuário "
         << endl << endl;
    // variáveis para guardar informações que o usuário digitar
    int tamanhoMax, i;
    string listaNomes;
    cout << "Digite o tamanho máximo da lista de nomes:" << endl;
    cin >> tamanhoMax;
    // definindo o objeto da classe e passando o tamanho max da lista
    ListaDeNomes lista(tamanhoMax);
    fflush(stdin);
    cout << "Insira os nomes:" << endl;
    // guardando e passando pra classe os nomes que o usuário informa
    for(i=0; i<5; i++)
    {
        cin >> listaNomes;
        lista.insereNomes(listaNomes);
    }

    // chamando os métodos para ordenar e imprimir a lista
    cout << endl << "Lista inserida:" << endl;
    lista.imprimeNomes();
    lista.ordenaNomes();
    cout << endl << "Lista Ordenada:" << endl << endl;
    lista.imprimeNomes();
    cout << "Insira um nome: ";
    // inserindo um nome no vetor
    cin >> listaNomes;
    lista.insereNomes(listaNomes);
    // chamando novamente os métodos para ordenar e imprimir a nova lista
    lista.ordenaNomes();
    cout << endl << "Lista Ordenada:" << endl << endl;
    lista.imprimeNomes();
    cout << "Memoria Liberada.";
    return 0;
}
