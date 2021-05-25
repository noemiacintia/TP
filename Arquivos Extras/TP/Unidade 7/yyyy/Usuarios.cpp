/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 7 - LVP 17 */

#include "Usuarios.h"

/* construtor para incicializar os atributos da classe
com os valores que o usuário inserir */
Usuarios::Usuarios(string nome, int idade, string email)
{
    this->nome=nome;
    this->idade=idade;
    this->email=email;
}

// método para retornar o nome inserido pelo usuário
string Usuarios::getNome()const
{
    return nome;
}

// método para retornar a idade inserida pelo usuário
int Usuarios::getIdade()const
{
    return idade;
}

// método para retornar o e-mail inserido pelo usuário
string Usuarios::getEmail()const
{
    return email;
}
