// cliente3.cpp
// Lendo Dados Sequencialmente a partir de um Arquivo de Acesso Aleatório
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
using namespace std;
#include "cliente.h"
int main()
{
    cliente c;
    ifstream inCredito("credito.dat", ios::in);
    if(!inCredito)
    {
        cerr << "Arquivo credito.dat nao pode ser aberto." << endl;
        exit(1);
    }
    // alinhar os valores exibidos do arquivo
    cout << setiosflags(ios::left)
         << setw(10) << "Conta"
         << setw(30) << "Nome"
         << resetiosflags(ios::left)
         << setw(10) << "Saldo" << endl;
    inCredito.read((char *)(&c),sizeof(cliente));
    while (inCredito && !inCredito.eof())
    {
        if(c.numero != 0)
            cout << setiosflags(ios::left)
                 << setw(10) << c.numero
                 << setw(30) << c.nome
                 << setw(10) << setprecision(2) << resetiosflags(ios::left)
                 << setiosflags(ios::fixed | ios::showpoint) << c.saldo << "\n";
        // comando para ler o que tem no arquivo
        inCredito.read((char*)(&c),sizeof(cliente));
    }
    return 0;
}
