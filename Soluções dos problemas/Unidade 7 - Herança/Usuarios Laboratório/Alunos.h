/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 7 - LVP 17 */

// para garantir que o arquivo n�o seja inicializado v�rias vezes
#ifndef ALUNOS_H
// definindo o arquivo que t� usando
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
