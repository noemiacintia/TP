/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 5 - LVP 11 */

#include <string>
// incluindo o arquivo que definimos o protótipo da classe
#include "Nome.h"

// construtor para inicializar os atributos da classe
Nome::Nome()
{
    nome = "";
    cpf = "";
}

/* método para atribuir ao atributo da classe o nome
da pessoa inserido pelo usário */
void Nome::setNome(string nome)
{
    this->nome = nome;
}

/* método para atribuir ao atributo da classe o cpf
da pessoa inserido pelo usário */
void Nome::setCPF (string cpf)
{
    this->cpf = cpf;
}

// método para exibir o retornar o nome da pessoa
string Nome::getNome()
{
    return nome;
}

// método para exibir o retornar o cpf da pessoa
string Nome::getCPF()
{
    return cpf;
}

// método para ordenar o vetor
void Nome::imprimeDadosOrdenados(Nome pessoas[], int n)
{
    // variáveis para percorrer o vetor
    int i, j;
    // objeto para armazenar temporariamente os atributos
    Nome aux;
    // for para percorrer o vetor de objetos
    for(i=0; i<n-1; i++)
    {
        // for para comparar os atributos
        for(j=0; j<n-1; j++)
        {
            // função da biblioteca string compare() para comparar os atributos
            if((pessoas[j].getNome().compare(pessoas[j+1].getNome())) > 0)
            {
                // ordenando os objetos
                aux=pessoas[j];
                pessoas[j]=pessoas[j+1];
                pessoas[j+1]=aux;
            }
        }
    }
}

