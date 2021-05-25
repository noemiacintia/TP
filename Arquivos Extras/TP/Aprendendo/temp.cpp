/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674

UNIDADE 1
LVP 02: Escreva um programa que converte certa
temperatura de graus Celsius para Fahrenheit e
vice-versa, utilizando union. Crie uma union com
os atributos Celsius e Fahrenheit (float).
Pergunte ao usu�rio qual das convers�es ele deseja
fazer (se � de Celsius-Fahrenheit ou Fahrenheit-Celsius),
dependendo de sua resposta, insira o valor para a convers�o
e imprima o resultado convertido com aproxima��o de duas
casas decimais.
*/

#include <iostream> // biblioteca para os comandos de entrada e saida
#include <locale> // biblioteca para traduzir a linguagem dos cout's
#include <iomanip> //biblioteca para definir a precis�o das casas decimais

using namespace std; // definindo todas as fun��es da biblioteca padr�o

int main()
{
    // criando a union para armazenar as temperaturas inseridas pelo usuario
    union Temperatura
    {
        float grausCelsius;
        float grausFarenheit;
    };

    //comando para traduzir os cout's para portugues
    setlocale(LC_ALL, "Portuguese");
    // inicializando as variaveis que usarei no programa
    int opcao=0;
    float F=0;
    float C=0;
    cout << "Este programa transforma a temperatura de acordo com o que o"
    "usu�rio pedir:" << endl;
    cout << "Insira o numero de acordo com a temperatura que quer transformar: "
    << endl << "1:Celsius-Farenheit" << endl << "2: Farenheit-Celsius" << endl;
    cin >> opcao; // pedindo ao usuario para informar o q ele quer calcular
    // definindo a precis�o de 2 casas decimais
    cout << fixed << setprecision(2);
    Temperatura celsius; //atribuindo celsius a union q criei
    Temperatura farenheit; //atribuindo farenheit a union q criei
    // caso o usuario queira tranformar Celsius em Farenheit o programa entra aqui
    if(opcao==1)
    {
        cout << "Insira a temperatura em �C: ";
        /* atribuindo a temperatura de celsius que o usuario digitar a variavel
        grausCelsius criada na union */
        cin >> celsius.grausCelsius;
        // calculando a temperatura em Farenheit
        F = (9*celsius.grausCelsius/5) + 32;
        // exibindo na tela essa temperatura
        cout << "Temperatura em Fahrenheit: " << F;
    }
    else if(opcao==2)
    {
        cout << "Insira a temperatura em �F: ";
        /* atribuindo a temperatura de farenheit que o usuario digitar a
        variavel grausFarenheit criada na union */
        cin >> farenheit.grausFarenheit;
        // calculando a temperatura em Celsius
        C = 5*(farenheit.grausFarenheit-32)/9;
        //exibindo na tela essa temperatura
        cout << "Temperatura em Celsius: " << C;
    }
    else // caso o usu�rio digite algo diferente de 1 e 2 na op��o
    {
        cout << "Op��o inv�lida!" << endl;
    }
    return 0;
}
