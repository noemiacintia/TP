/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
Unidade 4 - LVP 07:
Escreva o programa abaixo em tr�s arquivos separados.
Um com o prot�tipo da classe (.h), outro com a
especifica��o das classes (.cpp) e o terceiro com a
execu��o do programa (main()).

Crie uma classe chamada Fracao para realizar aritm�tica
com fra��es.  Descri��o:

Utilize vari�veis do tipo inteiro para representar os
dados private da classe � o numerador e o denominador.
Forne�a um construtor que permita que um objeto dessa
classe seja inicializado com valores quando ele for
declarado. O construtor deve conter valores-padr�o no
caso de nenhum inicializador ser fornecido. Forne�a
fun��es-membro public que realizam cada uma das
tarefas a seguir:
a) Multiplicar dois n�meros Fracao.
b) Dividir dois n�meros Fracao.
Adicione � classe anterior chamada Fracao as seguintes
funcionalidades:
a) Imprimir os n�meros Fracao na forma a/b, onde a � o
numerador e b � o denominador.
b) Imprimir os n�meros Fracao em formato de ponto flutuante.
Obs.: Crie um programa para testar a classe.
Obs.: Para voc�s entenderem como se calcula a multiplica��o
de fra��es, lembrem-se que haver� uma fra��o que ser� gerada
como resultado da multiplica��o de outras duas, ou seja,
dada a classe Fracao, na main teremos:
int main(){
     Fracao f1, f2, fr;
     ....
     fr.multiplica(f1, f2);
}
PS.: o m�todo multiplica, da fra��o fr, recebe as duas fra��es(f1 e f2),
multiplica os denominadores e numeradores (obedecendo as regras
das fra��es) e o resultado � armazenado no denominador e numerador da fr.
Por exemplo, no m�todo multiplica, o c�lculo do numerador de fr �:
fr.numerador= f1.numerador*f2.numerador. O mesmo ocorre para o denominador de fr.
Neste exemplo, � importante que voc�s saibam (ou pesquisem) como
s�o realizadas a multiplica��o e divis�o de fra��es.
Entradas:
As entradas ser�o a op��o desejada (1 - para multiplica��o) ou (2 - para divis�o)
e o valor do numerador e denominador f1 e numerador e denominador f2.
Sa�das:
As sa�das ser�o o valor da multiplica��o das fra��es de f1 com f2 em
formato de fra��o (a / b) e em formato racional (ponto flutuante).
Da mesma forma com a opera��o da divis�o.
   */

#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// incluindo o arquivo que definimos os m�todos da classe
#include "Fracao.cpp"

int main()
{
    // para traduzir os cout's pro portugu�s
    setlocale(LC_ALL,"Portuguese");
    // vari�veis para guardar os valores que o usu�rio digitar
    int opcao;
    int numerador1;
    int denominador1;
    int numerador2;
    int denominador2;
    // definindo os objetos da classe Fracoes
    Fracao f1, f2, fr;
    cout << "Este programa realiza a multiplica��o e divis�o de acordo com a "
         "op��o que o us�rio inserir e dado os numeradores e denominadores"
         "de duas fra��es" << endl << endl;
    // pedindo ao usu�rio os valores que precisamos
    cout << "Insira a op��o desejada: " << endl
         << "1- Multiplicar" << endl << "2- Dividir" << endl;
    cin >> opcao;
    cin >> numerador1;
    cin >> denominador1;
    cin >> numerador2;
    cin >> denominador2;
    // caso o usu�rio digite 0 para os denominadores
    while(denominador1==0 || denominador2==0)
    {
        cout << "Denominadore(s)<=0 tente inseri-los novamente "
             "(denominador1(espa�o)denominador2): ";
        cin >> denominador1;
        cin >> denominador2;
    }
    /* chamando o m�todo setFracao para atribuir essas informa��es inseridas aos
    aos atributos da classe para cada objeto */
    f1.setFracao(numerador1, denominador1);
    f2.setFracao(numerador2, denominador2);
    cout << fixed << setprecision(4);
    // verificando o valor que o usu�rio digitou em opcao
    if(opcao==1)
    {
        /* chamando o m�todo multiplica pro objeto fr que passei como par�metro
        os objetos f1 e f2 */
        fr.multiplica(f1, f2);
        cout << "A multiplicacao no formato racional: " << fr.getRacionalNum()
             << "/" << fr.getRacionalDen() << endl
             << "Em ponto flutuante: " << fr.getFlutuante();
    }
    else if(opcao==2)
    {
        /* chamando o m�todo divide pro objeto fr que passei como par�metro
        os objetos f1 e f2 */
        fr.divide(f1, f2);
        cout << "A divisao no formato racional: " << fr.getRacionalNum()
             << "/" << fr.getRacionalDen() << endl
             << "Em ponto flutuante: " << fr.getFlutuante();
    }
    // chamando os m�todos para exibir os valores como a quest�o pede
    return 0;
}
