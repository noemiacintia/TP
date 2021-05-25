/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 6 - LVP 12 */

// incluindo o arquivo que definimos o prot�tipo da classe
#include "ContaDePoupanca.h"

// inicializando a vari�vel static
float ContaDePoupanca::taxaDeJurosAnual=0;

/* construtor para inicializar o atributo saldoDaPoupanca com o valor inserido
pelo usu�rio */
ContaDePoupanca::ContaDePoupanca(float saldoDaPoupanca){
    this->saldoDaPoupanca=saldoDaPoupanca;
}

// m�todo para modificar o atributo static taxaDeJurosAnual
float ContaDePoupanca::modifiqueTaxaDeJuros(float taxaDeJurosAnual)
{
   ContaDePoupanca::taxaDeJurosAnual=taxaDeJurosAnual;
}

// m�todo para calcular o rendimento mensal
float ContaDePoupanca::calculeRendimentoMensal()
{
    saldoDaPoupanca+=(saldoDaPoupanca*(taxaDeJurosAnual/100))/12;
    return saldoDaPoupanca;
}
