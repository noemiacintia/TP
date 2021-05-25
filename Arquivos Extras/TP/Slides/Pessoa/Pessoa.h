/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 7 - LVP 15 */

// para garantir que o arquivo n�o seja inicializado v�rias vezes
#ifndef PESSOA_H
// definindo o arquivo que t� usando
#define PESSOA_H

// criando a classe Pessoa
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
    string getNome()const;
    string getCPF()const;

// manipulando por friend pois n�o temos acesso a classe ostream e istream

    // extra��o com sobrecarga
    friend istream& operator >> (istream& is, Pessoa& pessoa1)
{
    is >> pessoa1.nome;
    is >> pessoa1.CPF;
    return is;
}
    // inser��o com sobrecarga
    friend ostream& operator << (ostream& os, const Pessoa& pessoa1)
{
    // escrevendo cada membro
    os << endl << pessoa1.nome << endl;
    os << pessoa1.CPF;
    return os;
}
};
#endif // PESSOA_H
