/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 7 - LVP 15 */

#include "Pessoa.h"

// construtor para inicializar os atributos da classe
Pessoa::Pessoa()
{
    this->nome="";
    this->CPF="";
}

// m�todo que modifica o nome para o nome inserido pelo usu�rio
void Pessoa::setNome(string nome)
{
    this->nome=nome;
}

// m�todo que modifica o CPF para o CPF inserido pelo usu�rio
void Pessoa::setCPF(string CPF)
{
    this->CPF=CPF;
}

// imprime nome e CPF do empregado
string Pessoa::getNome()const
{
    return nome;
}

string Pessoa::getCPF()const
{
    return CPF;
}
