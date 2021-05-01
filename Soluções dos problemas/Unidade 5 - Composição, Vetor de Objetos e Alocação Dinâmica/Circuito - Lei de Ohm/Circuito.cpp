/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 5 - LVP 09 */

// incluindo o arquivo que definimos o protótipo da classe
#include "Circuito.h"

// construtor para inicializar os atributos da classe.
Circuito::Circuito()
{
    resistencia=0;
    corrente=0;
}

/* método para atribuir ao atributo da classe o valor
da resistencia inserido pelo usário */
void Circuito::setResistencia(float resistencia)
{
    this->resistencia=resistencia;
}

// método para exibir o valor da resistencia
float Circuito::getResistencia()
{
    return resistencia;
}

/* método para atribuir ao atributo da classe o valor
da corrente inserido pelo usário */
void Circuito::setCorrente(float corrente)
{
    this->corrente=corrente;
}

// método para exibir o valor da corrente
float Circuito::getCorrente()
{
    return corrente;
}

// método para calcular a voltagem
float Circuito::calculaVoltagem()
{
    return getCorrente()*getResistencia();
}

// método para calcular potencia
float Circuito::calculaPotencia()
{
    return getCorrente()*calculaVoltagem();
}
