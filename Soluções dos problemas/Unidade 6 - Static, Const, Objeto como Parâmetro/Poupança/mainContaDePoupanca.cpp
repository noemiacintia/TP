/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
Unidade 6 - LVP 12:
Crie uma classe em C++ chamada ContaDePoupanca.
Use um membro de dados static taxaDeJurosAnual
para armazenar a taxa de juros anual. Essa
classe cont�m tamb�m um membro de dados private
saldoDaPoupanca indicando a quantia que o
poupador atualmente tem em dep�sito. Forne�a um
m�todo membro calculeRendimentoMensal que calcule
o rendimento mensal multiplicando o saldo atual
pela taxaDeJurosAnual dividida por 12; este
rendimento deve ser somado ao saldoDaPoupanca.
Forne�a uma fun��o membro static modifiqueTaxaDeJuros
que inicializa a vari�vel static taxaDeJurosAnual com um novo valor.

Escreva um programa de teste que instancia dois
objetos diferentes contaDePoupanca, poupador1 e
poupador2, e inicialize a taxa de juros anual.
Em seguida, escreva os rendimentos de cada poupador ap�s um m�s

Entradas
Devem ser informados os saldos de cada poupador e a taxa de juros anual.

Sa�das
Devem ser mostrados os rendimentos de cada poupador ap�s um m�s. */

#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

#include "ContaDePoupanca.cpp"

int main()
{
    // para traduzir os cout's pro portugu�s
    setlocale(LC_ALL, "Portuguese");
    cout << "Este programa informa o rendimento "
         << "de 2 poupadores de acordo com a taxa de juros "
         << "informada pelo usu�rio" << endl << endl;
    // vari�veis para guardar informa��es que o usu�rio digitar
    float saldoPoupanca1, saldoPoupanca2;
    float taxaJuros;
    cout << "Insira o valor a ser depositado do poupador 1:" << endl;
    cin >> saldoPoupanca1;
    cout << endl << "Insira o valor a ser depositado do poupador 2:" << endl;
    cin >> saldoPoupanca2;
    // definindo os objetos da classe e passando os saldos das poupan�as
    ContaDePoupanca  poupador1(saldoPoupanca1), poupador2(saldoPoupanca2);
    cout << "Informe a taxa de juros (%):" << endl;
    cin >> taxaJuros;
    // inicializando o atributo static da taxaDeJurosAnual para todos os objetos
    ContaDePoupanca::modifiqueTaxaDeJuros(taxaJuros);
    cout << fixed << setprecision(2);
    cout << endl << "O rendimento do poupador 1 �: R$ "
         << poupador1.calculeRendimentoMensal() << endl
         << "O rendimento do poupador 2 �: R$ "
         << poupador2.calculeRendimentoMensal() << endl;
    return 0;
}
