/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 7 - LVP 17 */

// para garantir que o arquivo não seja inicializado várias vezes
#ifndef ALUNOS_H
// definindo o arquivo que tô usando
#define ALUNOS_H

// criando a classe derivada Alunos
class Alunos:public Usuarios
{
    // definindo atributos
    string curso;
    string numeroDeMatricula;
public:
    Alunos(string="", string="", string="", string="", int=0);
    void setCurso(string);
    void setNumMatricula(string);
    void imprimeAlunos()const;
};
#endif // ALUNOS_H
