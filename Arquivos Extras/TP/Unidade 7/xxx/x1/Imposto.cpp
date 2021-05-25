/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 7 - LVP 16 */
#include <iostream>
#include <locale>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#include "Imposto.h"

/* construtor para incicializar o atributo da classe
com o valor que o usu�rio inserir */
Imposto::Imposto(float faturamento){
    this->faturamento=faturamento;
}

float Imposto::getFaturamento()const{
    return faturamento;
}
// m�todo para calcular o imposto padr�o (17% do faturamento)
float Imposto::calculaImposto()
{
    return getFaturamento()*0.17;
}

/* m�todo para calcular o desconto de 50% no
imposto da empresa de pequeno porte */
float Imposto::calculaImpostoPequenoPorte()
{
    return calculaImposto()-(calculaImposto()*0.5);
}

/* m�todo para calcular o desconto de 70% no
imposto da empresa de pequeno porte */
float Imposto::calculaImpostoSIMPLES()
{
    return calculaImposto()-(calculaImposto()*0.7);
}
