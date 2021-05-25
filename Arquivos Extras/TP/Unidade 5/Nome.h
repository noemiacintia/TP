/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 5 - LVP 11 */

// para garantir que o arquivo não seja inicializado várias vezes
#ifndef NOME_H
// definindo o arquivo que tô usando
#define NOME_H

// includindo a linha 11 e 12 neste arquivo para que possa rodar aqui no ava
#include <iostream>
using namespace std;

// criando a classe Nome
class Nome
{
    // definindo atributos
    string nome;
    string cpf;
public:
    // definindo métodos públicos
    Nome(); // criando o construtor padrão
    void setNome(string);
    void setCPF(string);
    string getNome();
    string getCPF();
    void imprimeDadosOrdenados(Nome[], int);
};

#endif // NOME_H
