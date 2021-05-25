/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
Unidade 7 - LVP 17:

Defina uma classe para armazenar os dados relativos
aos usu�rios de um laborat�rio. A classe dever�
conter os seguintes atributos:
� nome (string)
� email (string)
� idade (int)
Escreva os m�todos:
� usuario(string nome, string email, int idade):
construtor que inicializa os atributos de um
objeto da classe;
� getNome(): retorna o nome armazenado pelo
objeto da classe;
� getIdade(): retorna a idade armazenada pelo
objeto da classe;
� getEmail(): retorna o email armazenado pelo
objeto da classe.

Defina uma hierarquia de classes para armazenar os
dados relativos a usu�rios de um laborat�rio, que
podem ser alunos e professores. Defina uma classe
b�sica Usuario e duas classes derivadas dessa
classe b�sica, as classes Aluno e Professor.
A classe Aluno, derivada de Usuario, dever�
conter, adicionalmente, os seguintes atributos:
� n�mero de matr�cula (string);
� curso (string).
A classe Professor dever� conter, adicionalmente,
os seguintes atributos:
� departamento (string);
� n�mero da sala (int).
Todos os atributos das classes s�o private.
Adicione m�todos print() para essas classes
para imprimir os seus atributos.
Teste as classes e as fun��es escritas. */

#include <iostream>
#include <locale>
#include <stdio.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;

#include "Usuarios.cpp"
#include "Alunos.cpp"
#include "Professores.cpp"

int main()
{
    // para traduzir os cout's pro portugu�s
    setlocale(LC_ALL, "Portuguese");
    cout << "Este programa cadastra alunos e professores de um laborat�rio."
         << endl << endl;
    // vari�veis para guardar informa��es que o usu�rio digitar
    string nomeUsuario, emailUsuario, departamentoUsuario;
    string numMatriculaUsuario, cursoUsuario;
    int numSalaUsuario, idadeUsuario, usuario;

    // caso seja aluno:

    cout << "Nome do usu�rio: ";
    getline(cin, nomeUsuario);
    cout << "E-mail: ";
    cin >> emailUsuario;
    cout << "Idade: ";
    cin >> idadeUsuario;
    cout << endl << "O usu�rio � aluno ou professor?" << endl
         << "[1] Aluno" << endl << "[2] Professor" << endl;
    cin >> usuario;
    if(usuario==1)
    {
        cout << "Matr�cula: ";
        cin >> numMatriculaUsuario;
        cout << "Curso: ";
        cin.ignore();
        getline(cin, cursoUsuario);

        /* criando o objeto do tipo Alunos e passando os
        par�metros pro construtor inicializar */
        Alunos aluno1(nomeUsuario, emailUsuario,
                      numMatriculaUsuario, cursoUsuario, idadeUsuario);
        system("cls");
        aluno1.imprimeAlunos();
    }

    // caso seja professor
    else if(usuario==2)
    {
        cout << "Departamento: ";
        cin.ignore();
        getline(cin, departamentoUsuario);
        cout << "N�mero da sala: ";
        cin >> numSalaUsuario;

        /* criando o objeto do tipo Professores e
        passando os par�metros pro construtor inicializar */
        Professores professor1(nomeUsuario, emailUsuario,
                               departamentoUsuario, idadeUsuario, numSalaUsuario);
        system("cls");
        professor1.imprimeProfessores();
    }
    return 0;
}
