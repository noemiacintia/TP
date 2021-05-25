/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 7 - LVP 16 */

#include "Empresas.h"

Empresas::Empresas(string nome, int CNPJ, float faturamento){
    this->nome=nome;
    this->CNPJ=CNPJ;
    this->faturamento=faturamento;
}

float Empresas::calculaImposto()
{
    return faturamento*0.17;
}

float Empresas::calculaImpostoPequenoPorte()
{
    return calculaImposto()-(calculaImposto()*0.5);
}

float Empresas::calculaImpostoSIMPLES()
{
    return calculaImposto()-(calculaImposto()*0.7);
}

//float Empresas::taxaImpostoFixa=0.17;

void Empresas::imprimeDados()const
{
    cout << endl << endl << "Nome: " << nome
         << endl << "CNPJ: " << CNPJ
         << endl << "Faturamento: " << faturamento << endl;
}
