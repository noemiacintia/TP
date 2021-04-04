/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 5 - LVP 11 */

// para garantir que o arquivo n�o seja inicializado v�rias vezes
#ifndef NOME_H
// definindo o arquivo que t� usando
#define NOME_H

// criando a classe Nome
class Nome
{
    // definindo atributos
    string nome;
    string cpf;
public:
    // definindo m�todos p�blicos
    Nome(); // criando o construtor padr�o
    void setNome(string);
    void setCPF(string);
    string getNome();
    string getCPF();
    void imprimeDadosOrdenados(Nome[], int);
};

#endif // NOME_H
