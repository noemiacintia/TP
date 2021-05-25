/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 7 - LVP 15 */

// para garantir que o arquivo não seja inicializado várias vezes
#ifndef PESSOA_H
// definindo o arquivo que tô usando
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
