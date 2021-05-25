/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
Unidade 7 - LVP 16:

Implemente um sistema de cobrança de impostos de
uma empresa. A taxa do imposto é de 17% do
faturamento da empresa. O sistema precisa
identificar o nome e CNPJ (Cadastro Nacional de
Pessoa Jurídica) da empresa.  Existe uma subclasse
de empresas, chamada de Empresa de Pequeno Porte,
que têm um desconto determinado pela Receita
Federal sobre o valor dos impostos a serem pagos.
Existe também empresas de pequeno porte que, devido
algumas características, são cadastradas no SIMPLES
(Programa do Governo de apoio aos microempresários).
No caso da pequena empresa estar cadastrada no
SIMPLES o desconto sobre os impostos a serem pagos
será de 70%, caso contrário o desconto será de 50%.

O sistema deve imprimir o nome e CNPJ da empresa,
seu faturamento, bem como o valor a ser pago de
impostos. Caso seja uma pequena empresa, o sistema
imprime se ela está cadastrada no SIMPLES ou não. */

#include <iostream>
#include <locale>
#include <stdio.h>

using namespace std;

#include "Imposto.cpp"
#include "Empresas.cpp"

int main()
{
    // para traduzir os cout's pro português
    setlocale(LC_ALL, "Portuguese");
    cout << "Este programa informa." << endl << endl;
    // variáveis para guardar informações que o usuário digitar
    string nomeDaEmpresa;
    float faturamentoEmpresa;
    int cnpj, cadastroSIMPLES, cadastro;

    cout << "Nome: ";
    cin >> nomeDaEmpresa;
    fflush(stdin);
    cout << "CNPJ: ";
    cin >> cnpj;
    cout << "Faturamento: ";
    cin >> faturamentoEmpresa;
    cout << "Sua empresa é de pequeno ou médio porte?" << endl
         << "[1] Pequeno" << endl << "[2] Médio";
    cin >> cadastro;

    /* criando o objeto do tipo Empresas e passando os
        parâmetros pro construtor inicializar */
    Empresas empresa1(nomeDaEmpresa, cnpj, faturamentoEmpresa);

    if(cadastro==1){
        cout << "A empresa está cadastrada no SIMPLES?" << endl
             << "[0] SIM" << endl << "[1] NÃO";
        cin >> cadastroSIMPLES;
        if(cadastroSIMPLES==0)
        {
            empresa1.imprimeDados();
            cout << "A empresa está cadastrada no SIMPLES";
            cout << endl << "Valor do imposto a ser pago: R$ "
                 << empresa1.calculaImpostoSIMPLES();
        }
        else if(cadastroSIMPLES==1)
        {
            empresa1.imprimeDados();
            cout << "A empresa não está cadastrada no SIMPLES";
            cout << endl << "Valor do imposto a ser pago: R$ "
                 << empresa1.calculaImpostoPequenoPorte();
        }}
    else if(cadastro==2){
        empresa1.imprimeDados();
        cout << "Valor do imposto a ser pago: R$ "
             << empresa1.calculaImposto();
    }
    return 0;
}
