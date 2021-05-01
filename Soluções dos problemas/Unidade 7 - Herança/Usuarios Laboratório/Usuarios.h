/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 7 - LVP 17 */

// para garantir que o arquivo não seja inicializado várias vezes
#ifndef USUARIOS_H
// definindo o arquivo que tô usando
#define USUARIOS_H
// criando a classe base Usuarios
class Usuarios
{
     // definindo atributos
    string nome;
    int idade;
    string email;
public:
    // construtor que inicializa os atributos de um objeto da classe
    Usuarios(string="", int=0, string="");
    string getNome()const; // retorna o nome armazenado pelo objeto da classe;
    int getIdade()const; // retorna a idade armazenada pelo objeto da classe;
    string getEmail()const; // retorna o email armazenado pelo objeto da classe.
};
#endif // USUARIOS_H
