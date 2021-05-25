/*
              Aluno: Rafael dos Santos Lima - 119210677
*************************
                     Laboratório de programação 01
*************************
Escreva um programa que crie uma estrutura chamada Ponto, contendo apenas
a posição x e y (inteiros) do ponto. Declare 2 pontos, leia a posição
(coordenadas x e y) de cada um e calcule a distância entre eles.
    Apresente no final a distância entre os dois pontos,
        com uma precisão de duas casas decimais.
*/

#include <iostream> //Para comandos de entrada e saída
#include <math.h> //Calcular potencia e raiz
#include <iomanip> //Definir a precisão
#include <locale> //Usar palavras em Português

using namespace std;

struct Ponto//Struct para armazenar os valores inseridos pelo usuário.
{
    float x1;
    float y1;
    float x2;
    float y2;

};

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    //Declarando uma variável
    Ponto pont;

    float distancia;

    //Explicando o que o programa faz;
    cout << "O programa irá calcular a distância entre dois pontos." << endl;
    //Pedindo as coordenadas do primeiro ponto ao usuário:
    cout << "Digite as coodenadas X e Y do primeiro ponto:" << endl;
    //Coletando os valores digitados:
    cin >> pont.x1 >> pont.y1;
    //Pedindo as coordenadas do segundo ponto ao usuário:
    cout << "Digite as coodenadas X e Y do segundo ponto:" << endl;
    //Coletando os valores digitados:
    cin >> pont.x2 >> pont.y2;

    //Fazendo o cálculo da distância
    distancia = sqrt((pow(pont.x2 - pont.x1, 2)) + (pow(pont.y2 - pont.y1,2)));

    //Fixando a saída com aproximação de duas casas decimais.
    cout << fixed << setprecision (2);
    //Mostrando o resultado:
    cout << "A distância  entre os pontos é: " << distancia;

    return 0;
}
