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
    //Imprime todos os funcion�rios que executam uma fun��o (passada por par�metro)
    void imprimePorFuncao(string);
    //Imprime a lista de funcion�rios por ordem crescente de sal�rio
    void imprimePorSalario();


    ~SetorPessoal();
};


#endif // SETORPESSOAL_H_INCLUDED
