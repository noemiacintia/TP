/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
Unidade 7 - LVP 14:

Crie a classe Im�vel, que possui como atributos um
endere�o e um pre�o. Esta classe n�o ter� m�todos,
somente o construtor que ir� inicializar os valores
do seu atributo.

a. Crie uma classe Novo, que herda Im�vel e possui
uma porcentagem de adicional no pre�o (que � fixa).
Crie m�todos de acesso e impress�o deste valor
adicional.
b. Crie uma classe Velho, que herda Im�vel e possui
uma porcentagem de desconto no pre�o (que � fixa).
Crie m�todos de acesso e impress�o para este desconto.

Os construtores das classes derivadas devem repassar
para a classe base os valores referentes a endere�o
e pre�o. Fa�a aten��o como devem ser declarados os
atributos da classe base para que a classe derivada
possa ter acesso.


Na main, crie um im�vel. Pe�a para o usu�rio digitar
1 para novo e 2 para velho. Conforme a defini��o do
usu�rio, imprima o valor final do im�vel.*/

#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

#include "Imovel.cpp"
#include "Novo.cpp"
#include "Velho.cpp"

int main()
{
    // para traduzir os cout's pro portugu�s
    setlocale(LC_ALL, "Portuguese");
    // vari�veis para guardar informa��es que o usu�rio digitar
    int tipoDoImovel;
    float percentual;
    cout << "Este programa informa ao usu�rio o valor final "
         << "do im�vel que ele escolher." << endl << endl;
    cout << "Insira o tipo de im�vel: ";
    cout << endl << "[1] Novo" << endl << "[2] Velho" << endl;
    cin >> tipoDoImovel;

    if(tipoDoImovel==1)
    {
        cout << endl << "Insira o percentual adicional:" << endl;
        cin >> percentual;
        /* inserindo as informa��es assim pois na quest�o n�o
        pede que o usu�rio insira */
        Novo imovel("", "", 100000.00, percentual); // criando o objeto
        imovel.imprimeDadosNovo();
    }
    else if(tipoDoImovel==2)
    {
        cout << "Insira o percentual de desconto:" << endl;
        cin >> percentual;
        Velho imovel("", "", 100000.00, percentual); // criando o objeto
        imovel.imprimeDadosVelho();
    }
    return 0;
}

