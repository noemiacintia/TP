/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
Unidade 5 - LVP 09:

Lei de Ohm - Escrever uma classe que represente um
circuito elétrico. Essa classe deve ter os seguintes métodos:

 Um construtor padrão.
 Um método público que armazene o valor da resistência,
e um para retornar esse valor.
 Um método público que armazene o valor da corrente I,
e um para retornar esse valor.
 Um método público para calcular a voltagem E em
relação a uma corrente I.
 Um método público para calcular a potência dissipada
P pela corrente I usando a fórmula P= I*E, onde E
é calculado usando a função membro anterior.

Em seguida, escreva um programa para calcular a
potência P de cinco circuitos elétricos utilizando
um vetor. Leia os valores I e R desses circuitos e e
informe todos os valores utilizados (obs.: os comandos
de escrita devem estar localizados no main). */

#include <iostream>
#include <locale>

using namespace std;

#include "Circuito.cpp"

int main()
{
    // para traduzir os cout's pro português
    setlocale(LC_ALL, "Portuguese");
    // definindo um vetor como objeto classe
    Circuito circuitos[6];
    // variáveis para guardar os valores que o usuário digitar
    float correnteI, resistenciaR;
    int i;
    cout << "Este programa calcula a voltagem e potência "
    << "de cinco circuitos elétricos." << endl << endl;
    cout << "Insira os valores da corrente e da resistencia "
    << "de cada circuito: ";
    // percorrendo todos os objetos, calculando e exibindo o que se pede
    for(i=1; i<6; i++)
    {
        cin >> correnteI >> resistenciaR;
        circuitos[i].setResistencia(resistenciaR);
        circuitos[i].setCorrente(correnteI);
        cout << endl << i << ": " << endl
             << "voltagem: " << circuitos[i].calculaVoltagem()
             << endl << "potência: " << circuitos[i].calculaPotencia();
    }
    return 0;
}
