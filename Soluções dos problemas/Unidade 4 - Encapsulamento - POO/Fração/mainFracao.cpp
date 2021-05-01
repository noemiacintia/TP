/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
Unidade 4 - LVP 07:
Escreva o programa abaixo em três arquivos separados.
Um com o protótipo da classe (.h), outro com a
especificação das classes (.cpp) e o terceiro com a
execução do programa (main()).

Crie uma classe chamada Fracao para realizar aritmética
com frações.  Descrição:

Utilize variáveis do tipo inteiro para representar os
dados private da classe – o numerador e o denominador.
Forneça um construtor que permita que um objeto dessa
classe seja inicializado com valores quando ele for
declarado. O construtor deve conter valores-padrão no
caso de nenhum inicializador ser fornecido. Forneça
funções-membro public que realizam cada uma das
tarefas a seguir:
a) Multiplicar dois números Fracao.
b) Dividir dois números Fracao.
Adicione à classe anterior chamada Fracao as seguintes
funcionalidades:
a) Imprimir os números Fracao na forma a/b, onde a é o
numerador e b é o denominador.
b) Imprimir os números Fracao em formato de ponto flutuante.
Obs.: Crie um programa para testar a classe.
Obs.: Para vocês entenderem como se calcula a multiplicação
de frações, lembrem-se que haverá uma fração que será gerada
como resultado da multiplicação de outras duas, ou seja,
dada a classe Fracao, na main teremos:
int main(){
     Fracao f1, f2, fr;
     ....
     fr.multiplica(f1, f2);
}
PS.: o método multiplica, da fração fr, recebe as duas frações(f1 e f2),
multiplica os denominadores e numeradores (obedecendo as regras
das frações) e o resultado é armazenado no denominador e numerador da fr.
Por exemplo, no método multiplica, o cálculo do numerador de fr é:
fr.numerador= f1.numerador*f2.numerador. O mesmo ocorre para o denominador de fr.
Neste exemplo, é importante que vocês saibam (ou pesquisem) como
são realizadas a multiplicação e divisão de frações.
Entradas:
As entradas serão a opção desejada (1 - para multiplicação) ou (2 - para divisão)
e o valor do numerador e denominador f1 e numerador e denominador f2.
Saídas:
As saídas serão o valor da multiplicação das frações de f1 com f2 em
formato de fração (a / b) e em formato racional (ponto flutuante).
Da mesma forma com a operação da divisão.
   */

#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// incluindo o arquivo que definimos os métodos da classe
#include "Fracao.cpp"

int main()
{
    // para traduzir os cout's pro português
    setlocale(LC_ALL,"Portuguese");
    // variáveis para guardar os valores que o usuário digitar
    int opcao;
    int numerador1;
    int denominador1;
    int numerador2;
    int denominador2;
    // definindo os objetos da classe Fracoes
    Fracao f1, f2, fr;
    cout << "Este programa realiza a multiplicação e divisão de acordo com a "
         "opção que o usário inserir e dado os numeradores e denominadores"
         "de duas frações" << endl << endl;
    // pedindo ao usuário os valores que precisamos
    cout << "Insira a opção desejada: " << endl
         << "1- Multiplicar" << endl << "2- Dividir" << endl;
    cin >> opcao;
    cin >> numerador1;
    cin >> denominador1;
    cin >> numerador2;
    cin >> denominador2;
    // caso o usuário digite 0 para os denominadores
    while(denominador1==0 || denominador2==0)
    {
        cout << "Denominadore(s)<=0 tente inseri-los novamente "
             "(denominador1(espaço)denominador2): ";
        cin >> denominador1;
        cin >> denominador2;
    }
    /* chamando o método setFracao para atribuir essas informações inseridas aos
    aos atributos da classe para cada objeto */
    f1.setFracao(numerador1, denominador1);
    f2.setFracao(numerador2, denominador2);
    cout << fixed << setprecision(4);
    // verificando o valor que o usuário digitou em opcao
    if(opcao==1)
    {
        /* chamando o método multiplica pro objeto fr que passei como parâmetro
        os objetos f1 e f2 */
        fr.multiplica(f1, f2);
        cout << "A multiplicacao no formato racional: " << fr.getRacionalNum()
             << "/" << fr.getRacionalDen() << endl
             << "Em ponto flutuante: " << fr.getFlutuante();
    }
    else if(opcao==2)
    {
        /* chamando o método divide pro objeto fr que passei como parâmetro
        os objetos f1 e f2 */
        fr.divide(f1, f2);
        cout << "A divisao no formato racional: " << fr.getRacionalNum()
             << "/" << fr.getRacionalDen() << endl
             << "Em ponto flutuante: " << fr.getFlutuante();
    }
    // chamando os métodos para exibir os valores como a questão pede
    return 0;
}
