/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 7 - LVP 17 */

#include "Usuarios.h"

/* construtor para incicializar os atributos da classe
com os valores que o usu�rio inserir */
Usuarios::Usuarios(string nome, int idade, string email)
{
    this->nome=nome;
    this->idade=idade;
    this->email=email;
}

// m�todo para retornar o nome inserido pelo usu�rio
string Usuarios::getNome()const
{
    return nome;
}

// m�todo para retornar a idade inserida pelo usu�rio
int Usuarios::getIdade()const
{
    return idade;
}

// m�todo para retornar o e-mail inserido pelo usu�rio
string Usuarios::getEmail()const
{
    return email;
}
