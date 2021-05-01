/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 7 - LVP 17 */

#include "Alunos.h"

/* construtor para inicializar os atributos dessa classe e
passar para classe Usuarios o nome, idade e email*/
Alunos::Alunos(string nome, string email, string numeroDeMatricula,
               string curso, int idade):Usuarios(nome, idade, email)
{
    setCurso(curso);
    setNumMatricula(numeroDeMatricula);
}

/* m�todo para incicializar o atributo da classe
com o curso que o usu�rio inserir */
void Alunos::setCurso(string curso)
{
    this->curso=curso;
}

/* m�todo para incicializar o atributo da classe
com a matr�cula que o usu�rio inserir */
void Alunos::setNumMatricula(string numeroDeMatricula)
{
    this->numeroDeMatricula=numeroDeMatricula;
}

// m�todo para imprimir os dados de aluno
void Alunos::imprimeAlunos()const
{
    cout << endl << "Dados do aluno: " << endl
         << endl << "Nome: " << Usuarios::getNome()
         << endl << "Idade: " << Usuarios::getIdade()
         << endl << "Curso: " << curso
         << endl << "Matr�cula: " << numeroDeMatricula
         << endl << "E-mail: " << Usuarios::getEmail() << endl << endl;
}
