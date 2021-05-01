/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 5 - LVP 09 */

// incluindo o arquivo que definimos o prot�tipo da classe
#include "Circuito.h"

// construtor para inicializar os atributos da classe.
Circuito::Circuito()
{
    resistencia=0;
    corrente=0;
}

/* m�todo para atribuir ao atributo da classe o valor
da resistencia inserido pelo us�rio */
void Circuito::setResistencia(float resistencia)
{
    this->resistencia=resistencia;
}

// m�todo para exibir o valor da resistencia
float Circuito::getResistencia()
{
    return resistencia;
}

/* m�todo para atribuir ao atributo da classe o valor
da corrente inserido pelo us�rio */
void Circuito::setCorrente(float corrente)
{
    this->corrente=corrente;
}

// m�todo para exibir o valor da corrente
float Circuito::getCorrente()
{
    return corrente;
}

// m�todo para calcular a voltagem
float Circuito::calculaVoltagem()
{
    return getCorrente()*getResistencia();
}

// m�todo para calcular potencia
float Circuito::calculaPotencia()
{
    return getCorrente()*calculaVoltagem();
}
