/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 6 - LVP 13 */

#include <string>
// incluindo o arquivo que definimos o protótipo da classe
#include "ListaDeNomes.h"

// construtor para alocar dinamicamente a lista
ListaDeNomes::ListaDeNomes(int TamMax)
{
    this->TamMax=TamMax>0?TamMax:0;
    nomes=new string[TamMax]; // colocando um ponteiro no inicio da memória
    this->tamAtual=0;

}

// método para inserir os nomes que o usuário digitou no atributo da classe
void ListaDeNomes::insereNomes(string nome)
{
    if(tamAtual<TamMax){
    nomes[tamAtual]=nome;
    tamAtual++;
}
}

// método para ordenar a lista
void ListaDeNomes::ordenaNomes()
{
    string aux;
    for(int i=0; i<tamAtual-1; i++)
    {
        // for para comparar os elementos
        for(int j=0; j<tamAtual-1; j++)
        {
            // função da biblioteca string compare() para comparar os elementos

            if(nomes[j].compare(nomes[j+1]) > 0)
            {
                // ordenando os objetos
                aux=nomes[j];
                nomes[j]=nomes[j+1];
                nomes[j+1]=aux;
            }
        }
    }
}

// método para imprimir a lista ordenada
void ListaDeNomes::imprimeNomes()const
{
    for(int i=0; i<tamAtual; i++)
    {
        cout << "Nome[" << i+1 << "]: " << nomes[i] << endl << endl;
    }
}

// destrutor para liberar o espaço de memória utilizado
ListaDeNomes::~ListaDeNomes()
{
        delete [] nomes;
}
