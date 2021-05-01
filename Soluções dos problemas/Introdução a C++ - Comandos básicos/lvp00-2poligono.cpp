/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674

INTRODUÇÃO A C++
LVP 00-2: Dado um polígono convexo de n lados,
podemos calcular o número de diagonais diferentes
nd desse polígono, pela fórmula:

nd=n(n−3)/2

Escreva um programa que leia quantos lados tem o
polígono e, posteriormente, calcule e mostre a
quantidade de diagonais diferentes que o polígono
possui.

*/

#include <iostream> // biblioteca para os comandos de entrada e saida
#include <iomanip> /*biblioteca que usei para definir a precisão de 1
                                            casa decimal no cout */
using namespace std; // definindo todas as funções da biblioteca padrão

int main() // função principal
{
    /* declarando a variavel referente ao numero de lados do poligono que iremos
    pedir ao usuario */
    int numeroDeLados=0;
    float numeroDeDiagonais=0.0; /* declarando e inicializando a variavel que
    iremos calcular as diagonais */
    cout << "Este programa calcula o numero de diagonais diferentes de um"
    "poligono convexo de n lados.";
    cout << "\n\nInforme o numero de lados: ";
    cin >> numeroDeLados; // pedindo o valor dos lados ao usuario
    // calculando as diagonais
    numeroDeDiagonais=numeroDeLados*(numeroDeLados-3)/2;
    cout << fixed << setprecision(1); // fixando as casas decimais
    cout << "A quantidade de diagonais diferentes deste poligono eh: ";
    cout << numeroDeDiagonais << endl; // exibindo o quantidade de diagonais
    return 0;
}
