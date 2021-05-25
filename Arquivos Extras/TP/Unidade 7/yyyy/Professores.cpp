/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 7 - LVP 17 */

#include "Professores.h"

/* construtor para inicializar os atributos dessa classe e
passar para classe Usuarios o nome, idade e email */
Professores::Professores(string nome, string email, string departamento,
                         int idade, int numeroDaSala):Usuarios(nome, idade, email)
{
    setDepartamento(departamento);
    setNumSala(numeroDaSala);
}

/* m�todo para incicializar o atributo da classe
com o departamento que o usu�rio inserir */
void Professores::setDepartamento(string departamento)
{
    this->departamento=departamento;
}

/* m�todo para incicializar o atributo da classe
com o n�mero da sala que o usu�rio inserir */
void Professores::setNumSala(int numeroDaSala)
{
    this->numeroDaSala=numeroDaSala;
}

// imprimindo os dados do professor
void Professores::imprimeProfessores()const
{
    cout << endl << "Dados do professor: " << endl
         << endl << "Nome: " << Usuarios::getNome()
         << endl << "Idade: " << Usuarios::getIdade()
         << endl << "Departamento: " << departamento
         << endl << "Sala: " << numeroDaSala
         << endl << "E-mail: " << Usuarios::getEmail() << endl << endl;

}
