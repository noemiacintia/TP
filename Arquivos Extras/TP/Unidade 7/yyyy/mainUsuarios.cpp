/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
Unidade 7 - LVP 17:

Defina uma classe para armazenar os dados relativos
aos usuários de um laboratório. A classe deverá
conter os seguintes atributos:
· nome (string)
· email (string)
· idade (int)
Escreva os métodos:
· usuario(string nome, string email, int idade):
construtor que inicializa os atributos de um
objeto da classe;
· getNome(): retorna o nome armazenado pelo
objeto da classe;
· getIdade(): retorna a idade armazenada pelo
objeto da classe;
· getEmail(): retorna o email armazenado pelo
objeto da classe.

Defina uma hierarquia de classes para armazenar os
dados relativos a usuários de um laboratório, que
podem ser alunos e professores. Defina uma classe
básica Usuario e duas classes derivadas dessa
classe básica, as classes Aluno e Professor.
A classe Aluno, derivada de Usuario, deverá
conter, adicionalmente, os seguintes atributos:
· número de matrícula (string);
· curso (string).
A classe Professor deverá conter, adicionalmente,
os seguintes atributos:
· departamento (string);
· número da sala (int).
Todos os atributos das classes são private.
Adicione métodos print() para essas classes
para imprimir os seus atributos.
Teste as classes e as funções escritas. */

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
    // para traduzir os cout's pro português
    setlocale(LC_ALL, "Portuguese");
    cout << "Este programa cadastra alunos e professores de um laboratório."
         << endl << endl;
    // variáveis para guardar informações que o usuário digitar
    string nomeUsuario, emailUsuario, departamentoUsuario;
    string numMatriculaUsuario, cursoUsuario;
    int numSalaUsuario, idadeUsuario, usuario;

    // caso seja aluno:

    cout << "Nome do usuário: ";
    getline(cin, nomeUsuario);
    cout << "E-mail: ";
    cin >> emailUsuario;
    cout << "Idade: ";
    cin >> idadeUsuario;
    cout << endl << "O usuário é aluno ou professor?" << endl
         << "[1] Aluno" << endl << "[2] Professor" << endl;
    cin >> usuario;
    if(usuario==1)
    {
        cout << "Matrícula: ";
        cin >> numMatriculaUsuario;
        cout << "Curso: ";
        cin.ignore();
        getline(cin, cursoUsuario);

        /* criando o objeto do tipo Alunos e passando os
        parâmetros pro construtor inicializar */
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
        cout << "Número da sala: ";
        cin >> numSalaUsuario;

        /* criando o objeto do tipo Professores e
        passando os parâmetros pro construtor inicializar */
        Professores professor1(nomeUsuario, emailUsuario,
                               departamentoUsuario, idadeUsuario, numSalaUsuario);
        system("cls");
        professor1.imprimeProfessores();
    }
    return 0;
}
