/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
Unidade 4 - LVP 08:
Escreva o programa abaixo em tr�s arquivos separados.
Um com o prot�tipo da classe (.h), outro com a
especifica��o das classes (.cpp) e o terceiro com a
execu��o do programa (main()).
Crie uma classe em C++ chamada Rel�gio para armazenar um
hor�rio, composto por hora, minuto e segundo. A classe
deve representar esses componentes de hor�rio e deve
apresentar os m�todos descritos a seguir:
a) Um m�todo chamado setHora, que deve receber o hor�rio
desejado por par�metro (hora, minuto e segundo).
b) Um m�todo chamado getHora para retornar o hor�rio atual,
atrav�s de 3 vari�veis passadas por refer�ncia. Quem n�o
viu passagem de par�metro por refer�ncia em Python, pode
criar 3 m�todos: getSegundos, getMiniutos e getHora, cada
um retornando respectivamente segundos, minutos e horas
do objeto.
c) Um m�todo para avan�ar o hor�rio para o pr�ximo segundo
(lembre-se de atualizar o minuto e a hora, quando for o caso).

Escreva um programa que simule a execu��o de um rel�gio.
Chame 03 vezes o m�todo para avan�ar o hor�rio e verifique
se o resultado est� correto. Siga as orienta��es de entrada
e sa�da abaixo para implementar a interface com o usu�rio.
ENTRADA
Inicialmente deve ser inserido o hor�rio desejado (hora, minuto e segundo) ;
SA�DA
A sa�da deve conter o hor�rio avan�ado (hora, minuto e segundo); */

#include <iostream>
#include <locale>

using namespace std;

// incluindo o arquivo que definimos os m�todos da classe
#include "Relogio.cpp"

int main()
{
    // para traduzir os cout's pro portugu�s
    setlocale(LC_ALL, "Portuguese");
    // definindo os objetos da classe Relogio
    Relogio relogio1;
    // vari�veis para guardar os valores que o usu�rio digitar
    int horA;
    int minutO;
    int segundO;

    cout << "Este programa simula um rel�gio que aumenta"
         << " 3s na hora que o usu�rio digitar." << endl << endl;
    cout << "Insira a hora no formato 00 00 00: ";
    cin >> horA >> minutO >> segundO;
    /* chamando o m�todo setHora para atribuir essas informa��es inseridas aos
    aos atributos da classe para o objeto relogio1 */
    relogio1.setHora(horA, minutO, segundO);
    // chamando o m�todo para avan�ar a hor a 3x como a quest�o pede
    relogio1.horarioAvancando();
    relogio1.horarioAvancando();
    relogio1.horarioAvancando();
    // exibindo a hora de acordo com o que a quest�o pede
    cout << endl << "Hor�rio avan�ado: ";
    cout << relogio1.getHora() << "h "
         << relogio1.getMinutos() << "min "
         << relogio1.getSegundos() << "s" << endl;
    return 0;
}
