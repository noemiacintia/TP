/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 7 - LVP 16 */
#include <iostream>
#include <locale>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#include "Imposto.h"

/* construtor para incicializar o atributo da classe
com o valor que o usuário inserir */
Imposto::Imposto(float faturamento){
    this->faturamento=faturamento;
}

float Imposto::getFaturamento()const{
    return faturamento;
}
// método para calcular o imposto padrão (17% do faturamento)
float Imposto::calculaImposto()
{
    return getFaturamento()*0.17;
}

/* método para calcular o desconto de 50% no
imposto da empresa de pequeno porte */
float Imposto::calculaImpostoPequenoPorte()
{
    return calculaImposto()-(calculaImposto()*0.5);
}

/* método para calcular o desconto de 70% no
imposto da empresa de pequeno porte */
float Imposto::calculaImpostoSIMPLES()
{
    return calculaImposto()-(calculaImposto()*0.7);
}
