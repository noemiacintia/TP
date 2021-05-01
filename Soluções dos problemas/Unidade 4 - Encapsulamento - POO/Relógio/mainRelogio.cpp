/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
Unidade 4 - LVP 08:
Escreva o programa abaixo em três arquivos separados.
Um com o protótipo da classe (.h), outro com a
especificação das classes (.cpp) e o terceiro com a
execução do programa (main()).
Crie uma classe em C++ chamada Relógio para armazenar um
horário, composto por hora, minuto e segundo. A classe
deve representar esses componentes de horário e deve
apresentar os métodos descritos a seguir:
a) Um método chamado setHora, que deve receber o horário
desejado por parâmetro (hora, minuto e segundo).
b) Um método chamado getHora para retornar o horário atual,
através de 3 variáveis passadas por referência. Quem não
viu passagem de parâmetro por referência em Python, pode
criar 3 métodos: getSegundos, getMiniutos e getHora, cada
um retornando respectivamente segundos, minutos e horas
do objeto.
c) Um método para avançar o horário para o próximo segundo
(lembre-se de atualizar o minuto e a hora, quando for o caso).

Escreva um programa que simule a execução de um relógio.
Chame 03 vezes o método para avançar o horário e verifique
se o resultado está correto. Siga as orientações de entrada
e saída abaixo para implementar a interface com o usuário.
ENTRADA
Inicialmente deve ser inserido o horário desejado (hora, minuto e segundo) ;
SAÍDA
A saída deve conter o horário avançado (hora, minuto e segundo); */

#include <iostream>
#include <locale>

using namespace std;

// incluindo o arquivo que definimos os métodos da classe
#include "Relogio.cpp"

int main()
{
    // para traduzir os cout's pro português
    setlocale(LC_ALL, "Portuguese");
    // definindo os objetos da classe Relogio
    Relogio relogio1;
    // variáveis para guardar os valores que o usuário digitar
    int horA;
    int minutO;
    int segundO;

    cout << "Este programa simula um relógio que aumenta"
         << " 3s na hora que o usuário digitar." << endl << endl;
    cout << "Insira a hora no formato 00 00 00: ";
    cin >> horA >> minutO >> segundO;
    /* chamando o método setHora para atribuir essas informações inseridas aos
    aos atributos da classe para o objeto relogio1 */
    relogio1.setHora(horA, minutO, segundO);
    // chamando o método para avançar a hor a 3x como a questão pede
    relogio1.horarioAvancando();
    relogio1.horarioAvancando();
    relogio1.horarioAvancando();
    // exibindo a hora de acordo com o que a questão pede
    cout << endl << "Horário avançado: ";
    cout << relogio1.getHora() << "h "
         << relogio1.getMinutos() << "min "
         << relogio1.getSegundos() << "s" << endl;
    return 0;
}
