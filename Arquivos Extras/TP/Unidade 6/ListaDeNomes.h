/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 6 - LVP 13 */

// para garantir que o arquivo n�o seja inicializado v�rias vezes
#ifndef LISTADENOMES_H
// definindo o arquivo que t� usando
#define LISTADENOMES_H

// includindo a linha 11 e 12 neste arquivo para que possa rodar aqui no ava
#include <iostream>
using namespace std;

// criando a classe ListaDeNomes
class ListaDeNomes{
    // definindo atributos
    string *nomes;
    int TamMax;
    int tamAtual; // n�mero atual de pessoas na lista
public:
    // definindo m�todos p�blicos
    ListaDeNomes(int);
    void insereNomes(string);
    void ordenaNomes();
    void imprimeNomes()const;
    ~ListaDeNomes();
};
#endif // LISTADENOMES_H
