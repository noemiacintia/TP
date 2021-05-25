/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
Unidade 7 - LVP 14:

Crie a classe Imóvel, que possui como atributos um
endereço e um preço. Esta classe não terá métodos,
somente o construtor que irá inicializar os valores
do seu atributo.

a. Crie uma classe Novo, que herda Imóvel e possui
uma porcentagem de adicional no preço (que é fixa).
Crie métodos de acesso e impressão deste valor
adicional.
b. Crie uma classe Velho, que herda Imóvel e possui
uma porcentagem de desconto no preço (que é fixa).
Crie métodos de acesso e impressão para este desconto.

Os construtores das classes derivadas devem repassar
para a classe base os valores referentes a endereço
e preço. Faça atenção como devem ser declarados os
atributos da classe base para que a classe derivada
possa ter acesso.


Na main, crie um imóvel. Peça para o usuário digitar
1 para novo e 2 para velho. Conforme a definição do
usuário, imprima o valor final do imóvel.*/

#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

#include "Imovel.cpp"
#include "Novo.cpp"
#include "Velho.cpp"

int main()
{
    // para traduzir os cout's pro português
    setlocale(LC_ALL, "Portuguese");
    // variáveis para guardar informações que o usuário digitar
    int tipoDoImovel;
    float percentual;
    cout << "Este programa informa ao usuário o valor final "
         << "do imóvel que ele escolher." << endl << endl;
    cout << "Insira o tipo de imóvel: ";
    cout << endl << "[1] Novo" << endl << "[2] Velho" << endl;
    cin >> tipoDoImovel;

    if(tipoDoImovel==1)
    {
        cout << endl << "Insira o percentual adicional:" << endl;
        cin >> percentual;
        /* inserindo as informações assim pois na questão não
        pede que o usuário insira */
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

