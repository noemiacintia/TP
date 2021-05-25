/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
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

/* método para incicializar o atributo da classe
com o curso que o usuário inserir */
void Alunos::setCurso(string curso)
{
    this->curso=curso;
}

/* método para incicializar o atributo da classe
com a matrícula que o usuário inserir */
void Alunos::setNumMatricula(string numeroDeMatricula)
{
    this->numeroDeMatricula=numeroDeMatricula;
}

// método para imprimir os dados de aluno
void Alunos::imprimeAlunos()const
{
    cout << endl << "Dados do aluno: " << endl
         << endl << "Nome: " << Usuarios::getNome()
         << endl << "Idade: " << Usuarios::getIdade()
         << endl << "Curso: " << curso
         << endl << "Matrícula: " << numeroDeMatricula
         << endl << "E-mail: " << Usuarios::getEmail() << endl << endl;
}
