/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 7 - LVP 17 */

// para garantir que o arquivo n�o seja inicializado v�rias vezes
#ifndef PROFESSORES_H
// definindo o arquivo que t� usando
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
