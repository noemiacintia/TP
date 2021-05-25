/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 6 - LVP 12 */

// incluindo o arquivo que definimos o protótipo da classe
#include "ContaDePoupanca.h"

// inicializando a variável static
float ContaDePoupanca::taxaDeJurosAnual=0;

/* construtor para inicializar o atributo saldoDaPoupanca com o valor inserido
pelo usuário */
ContaDePoupanca::ContaDePoupanca(float saldoDaPoupanca){
    this->saldoDaPoupanca=saldoDaPoupanca;
}

// método para modificar o atributo static taxaDeJurosAnual
float ContaDePoupanca::modifiqueTaxaDeJuros(float taxaDeJurosAnual)
{
   ContaDePoupanca::taxaDeJurosAnual=taxaDeJurosAnual;
}

// método para calcular o rendimento mensal
float ContaDePoupanca::calculeRendimentoMensal()
{
    saldoDaPoupanca+=(saldoDaPoupanca*(taxaDeJurosAnual/100))/12;
    return saldoDaPoupanca;
}
