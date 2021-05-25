#include "setorPessoal.h"

SetorPessoal::SetorPessoal(int n){
    funcionarios = new Funcionario[n];
    num = 0;
}

void SetorPessoal::addFunc(Funcionario f){
        funcionarios[num] = f;
        num++;
}

void SetorPessoal::imprimeFolha(){
    cout << fixed << setprecision(2);
    for(unsigned i = 0; i < num; i++){
        cout << "===========================================" << endl;
        cout << "Nome: " << funcionarios[i].getNome() << endl;
        cout << "Salário: R$" << funcionarios[i].getSal() << endl;
    }
}

float SetorPessoal::valorFolha(){
    float soma = 0;
    for(unsigned i = 0; i < num; i++)
        soma += funcionarios[i].getSal();
    return soma;
}

string SetorPessoal::MaiorSalario(){
    int maiorpos = 0;
    float maiorSalario = funcionarios[0].getSal();
    for(unsigned i = 1; i < num; i++)
        if(funcionarios[i].getSal() > maiorSalario){
            maiorpos = i;
            maiorSalario = funcionarios[i].getSal();
        }
    return funcionarios[maiorpos].getNome();
}

void SetorPessoal::mostraPorDep(int d){
    for(unsigned i = 0; i < num; i++)
        if(funcionarios[i].getDep() == d)
            cout << "===========================================" << endl
                 << "Nome: " << funcionarios[i].getNome() << endl
                 << "Cargo: " << funcionarios[i].getFunc() << endl;
}

void SetorPessoal::imprimePorFuncao(string f){
   for(unsigned i = 0; i < num; i++)
        if(funcionarios[i].getFunc() == f)
            cout << "===========================================" << endl
                 << "Nome: " << funcionarios[i].getNome() << endl;

}
//Imprime por ordem de salário
void SetorPessoal::imprimePorSalario(){
    Funcionario f[num];
    Funcionario aux;

    cout << fixed << setprecision(2);

    for(unsigned i = 0; i < num; i++)
        f[i] = funcionarios[i];
    //Ordena pelo método Bubble Sort
    for(unsigned j = 0; j < num; j++){
        for(unsigned k = 0; k < num - 1; k++) {
            if(f[k].getSal() > f[k+1].getSal()){
                aux = f[k];
                f[k] = f[k+1];
                f[k+1] = aux;
            }
        }

    }

    for(unsigned k = 0; k < num; k++)
        cout << "=====================================" << endl
             << "Nome: " << f[k].getNome() << endl
             << "Salário: " << f[k].getSal() << endl;

}

SetorPessoal::~SetorPessoal(){
    delete []funcionarios;
}

