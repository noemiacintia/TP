/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 4 - LVP 07 */

// incluindo o arquivo que definimos o prot�tipo da classe
#include "Fracao.h"

/* m�todo do construtor sem par�metros para inicializar os atributos da classe.
Inicializo com 1 para n�o ter problema nos c�lculos da multiplica��o e divis�o. */
Fracao::Fracao()
{
    numerador = denominador = 1;
}

/* m�todo para atribuir os valores que o usu�rio digitou na main para
os objetos (f1 e f2), aos atibutos da classe Fracoes */
void Fracao::setFracao(int num, int den)
{
    numerador = num;
    denominador = den;
}

// m�todo para multiplicar as fra��es f1 e f2
void Fracao::multiplica(Fracao f1, Fracao f2)
{
    /* em cada vari�vel desse m�todo, para cada objeto (f1 e f2),
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
    /* em cada vari�vel desse m�todo, para cada objeto (f1 e f2),
    eu chamo os atributos da classe Fracoes e como a divis�o de fra��es � feita
    a primeira pelo inverso da segunda eu manipulo os c�lculos invertendo o
    numerador e denominador da segunda fra��o */
    int num = f1.numerador * f2.denominador;
    int den = f1.denominador * f2.numerador;
    /* atribuindo aos atributos numerador e denominador do objeto fr os valores
    que acabamos de calcular */
    this-> numerador = num;
    this-> denominador = den;
}

// m�todo para exibir o atributo "numerador" criado na classe Fracoes
int Fracao::getRacionalNum()
{
    return numerador;
}

// m�todo para exibir o atributo "denominador" criado na classe Fracoes
int Fracao::getRacionalDen()
{
    return denominador;
}

// m�todo para retornar o valor dos atributos com casas decimais
float Fracao::getFlutuante()
{
    /* transformando em double e dividindo os valores que as fun��es
    getRacionalNum e getRacionalDen retornam */
    return double(getRacionalNum())/double(getRacionalDen());
}
