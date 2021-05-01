/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 6 - LVP 13 */

// para garantir que o arquivo não seja inicializado várias vezes
#ifndef LISTADENOMES_H
// definindo o arquivo que tô usando
#define LISTADENOMES_H

// includindo a linha 11 e 12 neste arquivo para que possa rodar aqui no ava
#include <iostream>
using namespace std;

// criando a classe ListaDeNomes
class ListaDeNomes{
    // definindo atributos
    string *nomes;
    int TamMax;
    int tamAtual; // número atual de pessoas na lista
public:
    // definindo métodos públicos
    ListaDeNomes(int);
    void insereNomes(string);
    void ordenaNomes();
    void imprimeNomes()const;
    ~ListaDeNomes();
};
#endif // LISTADENOMES_H
