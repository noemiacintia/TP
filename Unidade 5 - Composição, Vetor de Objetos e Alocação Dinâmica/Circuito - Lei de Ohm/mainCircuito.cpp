/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
Unidade 5 - LVP 09:

Lei de Ohm - Escrever uma classe que represente um
circuito el�trico. Essa classe deve ter os seguintes m�todos:

 Um construtor padr�o.
 Um m�todo p�blico que armazene o valor da resist�ncia,
e um para retornar esse valor.
 Um m�todo p�blico que armazene o valor da corrente I,
e um para retornar esse valor.
 Um m�todo p�blico para calcular a voltagem E em
rela��o a uma corrente I.
 Um m�todo p�blico para calcular a pot�ncia dissipada
P pela corrente I usando a f�rmula P= I*E, onde E
� calculado usando a fun��o membro anterior.

Em seguida, escreva um programa para calcular a
pot�ncia P de cinco circuitos el�tricos utilizando
um vetor. Leia os valores I e R desses circuitos e e
informe todos os valores utilizados (obs.: os comandos
de escrita devem estar localizados no main). */

#include <iostream>
#include <locale>

using namespace std;

#include "Circuito.cpp"

int main()
{
    // para traduzir os cout's pro portugu�s
    setlocale(LC_ALL, "Portuguese");
    // definindo um vetor como objeto classe
    Circuito circuitos[6];
    // vari�veis para guardar os valores que o usu�rio digitar
    float correnteI, resistenciaR;
    int i;
    cout << "Este programa calcula a voltagem e pot�ncia "
    << "de cinco circuitos el�tricos." << endl << endl;
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
             << endl << "pot�ncia: " << circuitos[i].calculaPotencia();
    }
    return 0;
}
