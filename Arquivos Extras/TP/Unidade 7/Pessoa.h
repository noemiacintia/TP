/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 7 - LVP 15 */

// para garantir que o arquivo n�o seja inicializado v�rias vezes
#ifndef PESSOA_H
// definindo o arquivo que t� usando
#define PESSOA_H

// criando a classe base Pessoa
class Pessoa
{
    // definindo atributos
    string nome;
    string CPF;
public:
    // construtor para inicializar os atributos
    Pessoa();
    void setNome(string);
    void setCPF(string);
    void imprimeNomeCPF()const;
};
#endif // PESSOA_H
