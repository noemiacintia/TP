/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674

UNIDADE 1
LVP 01: Escreva um programa que crie uma estrutura
chamada Ponto, contendo apenas a posição x e y (inteiros)
do ponto. Declare 2 pontos, leia a posição (coordenadas x e y)
de cada um e calcule a distância entre eles. Apresente no final
a distância entre os dois pontos, com uma precisão de duas casas
decimais.
*/

#include <iostream> // biblioteca para os comandos de entrada e saida
#include <cmath> // biblioteca que usei para calcular potencia e raiz
#include <iomanip> //biblioteca que usei para definir a precisão casas decimais

using namespace std; // definindo todas as funções da biblioteca padrão

int main()
{
    cout << "Este programa calcula a distancia entre dois pontos de coordenadas"
    "informadas pelo usuário.\n\n";
    // criando a struct para armazenar as coordenadas inseridas pelo usuario
    struct Ponto
    {
        int x;
        int y;
    };

    // inicializando as variaveis que usarei no programa
    float distancia=0;
    Ponto ponto1; //atribuindo ponto1 a struct q criei
    Ponto ponto2; //atribuindo ponto2 a struct q criei
    // atribuindo a coordenada que o usuario digitou do ponto 1 e 2 a struct Ponto
    cin >> ponto1.x >> ponto1.y >> ponto2.x >> ponto2.y;
    // calculando a distancia entre os pontos
    distancia = sqrt((pow((ponto2.x - ponto1.x), 2)) + (pow((ponto2.y - ponto1.y), 2)));
    cout << fixed << setprecision(2); // fixando as casas decimais
    // exibindo a distancia calculada
    cout << distancia;
    return 0;
}
