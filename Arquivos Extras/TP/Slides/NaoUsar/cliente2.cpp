// cliente2.cpp
// Escrevendo Dados de modo aleatorio
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
#include "cliente.h"
int main()
{
    cliente c;
    ofstream outCredito("credito.dat",ios::ate);
    if(!outCredito)
    {
        cerr << "Arquivo credito.dat nao pode ser aberto." << endl;
        exit(1);
    }
    cout << "Enter numero da conta de 1 a 100 (0 termina) ";
    cin >> c.numero;
    while(c.numero > 0 && c.numero <= 100)
    {
        cout << "Entre nome, saldo\n? ";
        cin >> c.nome >> c.saldo;
        // posicionar no cliente desejado
        outCredito.seekp((c.numero - 1) * sizeof(cliente));
        // atualizar dados
        outCredito.write((const char *)(&c),sizeof(cliente));
        cout << "Enter numero da conta de 1 a 100 (0 termina) ";
        cin >> c.numero;
    }
    return 0;
}
