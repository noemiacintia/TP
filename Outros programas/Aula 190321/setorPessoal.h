#ifndef SETORPESSOAL_H
#define SETORPESSOAL_H

#include "funcionario.cpp"


class SetorPessoal{
    Funcionario *funcionarios;
    unsigned num;
public:
    SetorPessoal(int);
    void addFunc(Funcionario);
    void imprimeFolha();
    float valorFolha();
    string MaiorSalario();
    void mostraPorDep(int);
    //Imprime todos os funcionários que executam uma função (passada por parâmetro)
    void imprimePorFuncao(string);
    //Imprime a lista de funcionários por ordem crescente de salário
    void imprimePorSalario();


    ~SetorPessoal();
};


#endif // SETORPESSOAL_H_INCLUDED
