/* /* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674

LVP 01: Escreva um programa que crie uma estrutura
chamada Ponto, contendo apenas a posição x e y (inteiros)
do ponto. Declare 2 pontos, leia a posição (coordenadas x e y)
de cada um e calcule a distância entre eles. Apresente no final
a distância entre os dois pontos, com uma precisão de duas casas
decimais.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    union Ponto
    {
        int x1;
        int y1;
        int x2;
        int y2;
    };

    float distancia=0;
    Ponto p1;
    cout << "Insira o valor de x1 e y1 no formato x1(espaco)y1: ";
    cin >> p1.x1 >> p1.y1;

    Ponto p2;
    cout << "Insira o valor de x2 e y2 no formato x2(espaco)y2: ";
    cin >> p2.x2 >> p2.y2;

    distancia = sqrt((pow((p2.x2 - p1.x1), 2)) + (pow((p2.y2 - p1.y1), 2)));
    cout << fixed << setprecision(2);
    cout << "\nA distancia entre os dois pontos eh de: " << distancia << endl;
    return 0;
}