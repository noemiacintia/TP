/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 4 - LVP 07 */

// incluindo o arquivo que definimos o protótipo da classe
#include "Fracao.h"

/* método do construtor sem parâmetros para inicializar os atributos da classe.
Inicializo com 1 para não ter problema nos cálculos da multiplicação e divisão. */
Fracao::Fracao()
{
    numerador = denominador = 1;
}

/* método para atribuir os valores que o usuário digitou na main para
os objetos (f1 e f2), aos atibutos da classe Fracoes */
void Fracao::setFracao(int num, int den)
{
    numerador = num;
    denominador = den;
}

// método para multiplicar as frações f1 e f2
void Fracao::multiplica(Fracao f1, Fracao f2)
{
    /* em cada variável desse método, para cada objeto (f1 e f2),
    eu chamo os atributos da classe Fracoes */
    int num = f1.numerador * f2.numerador;
    int den = f1.denominador * f2.denominador;
    /* atribuindo aos atributos numerador e denominador do objeto fr os valores
    que acabamos de calcular */
    this-> numerador = num;
    this-> denominador = den;
}

void Fracao::divide(Fracao f1, Fracao f2)
{
    /* em cada variável desse método, para cada objeto (f1 e f2),
    eu chamo os atributos da classe Fracoes e como a divisão de frações é feita
    a primeira pelo inverso da segunda eu manipulo os cálculos invertendo o
    numerador e denominador da segunda fração */
    int num = f1.numerador * f2.denominador;
    int den = f1.denominador * f2.numerador;
    /* atribuindo aos atributos numerador e denominador do objeto fr os valores
    que acabamos de calcular */
    this-> numerador = num;
    this-> denominador = den;
}

// método para exibir o atributo "numerador" criado na classe Fracoes
int Fracao::getRacionalNum()
{
    return numerador;
}

// método para exibir o atributo "denominador" criado na classe Fracoes
int Fracao::getRacionalDen()
{
    return denominador;
}

// método para retornar o valor dos atributos com casas decimais
float Fracao::getFlutuante()
{
    /* transformando em double e dividindo os valores que as funções
    getRacionalNum e getRacionalDen retornam */
    return double(getRacionalNum())/double(getRacionalDen());
}
