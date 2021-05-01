/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 7 - LVP 16 */
#include <iostream>
#include <locale>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#include "Empresas.h"

/* construtor para inicializar os atributos dessa classe e
passar para classe Imposto o faturamento */
Empresas::Empresas(string nome, string CNPJ,
                   float faturamento):Imposto(faturamento){
    this->nome=nome;
    this->CNPJ=CNPJ;
}

// m�todo para impress�o dos dados da empresa
void Empresas::imprimeDados()const
{
    cout << endl << endl << nome
         << endl << "CNPJ " << CNPJ
         << fixed << setprecision(2)
         << endl << "Faturamento: R$ " << Imposto::getFaturamento();
}
