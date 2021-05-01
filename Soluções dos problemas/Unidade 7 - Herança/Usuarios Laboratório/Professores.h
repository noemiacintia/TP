/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 7 - LVP 17 */

// para garantir que o arquivo não seja inicializado várias vezes
#ifndef PROFESSORES_H
// definindo o arquivo que tô usando
#define PROFESSORES_H

// criando a classe derivada Professores
class Professores:public Usuarios{
    // definindo atributos
    string departamento;
    int numeroDaSala;
public:
    Professores(string="", string="", string="", int=0, int=0);
    void setDepartamento(string);
    void setNumSala(int);
    void imprimeProfessores()const;
};
#endif // PROFESSORES_H
