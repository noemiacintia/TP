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
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#include "Imposto.cpp"
#include "Empresas.cpp"

int main()
{
    // para traduzir os cout's pro português
    setlocale(LC_ALL, "Portuguese");
    cout << "Este programa informa o valor do imposto "
         << "a ser pago por uma empresa." << endl << endl;
    // variáveis para guardar informações que o usuário digitar
    string nomeDaEmpresa, cadastro, cadastroSIMPLES, cnpj;
    float faturamentoEmpresa;

    cout << "Nome da empresa: ";
    getline(cin, nomeDaEmpresa);
    cout << "CNPJ: ";
    cin >> cnpj;
    cout << "Faturamento: ";
    cin >> faturamentoEmpresa;
    cout << "Sua empresa é de pequeno porte? (S/N): ";
    cin >> cadastro;

    /* criando o objeto do tipo Empresas e passando os
        parâmetros pro construtor inicializar */
    Empresas empresa1(nomeDaEmpresa, cnpj, faturamentoEmpresa);

    // se a empresa for de pequeno porte
    if(cadastro=="s" || cadastro=="S")
    {
        cout << "A empresa está cadastrada no SIMPLES? (S/N): ";
        cin >> cadastroSIMPLES;
        // se a empresa for cadastrada no SIMPLES
        if(cadastroSIMPLES=="s"|| cadastroSIMPLES=="S")
        {
            system("cls"); // limpa a tela
            empresa1.imprimeDados();
            cout << endl << "Imposto à pagar: R$ "
                 << empresa1.calculaImpostoSIMPLES();
            cout << endl << "Empresa cadastrada no SIMPLES" << endl;
        }
        // se a empresa não for cadastrada no simples
        else if(cadastroSIMPLES=="n"|| cadastroSIMPLES=="N")
        {
            system("cls"); // limpa a tela
            empresa1.imprimeDados();
            cout << endl << "Imposto à pagar: R$ "
                 << empresa1.calculaImpostoPequenoPorte() << endl ;
        }
    }
    // se a empresa for de médio porte
    else if(cadastro=="n"|| cadastro=="N")
    {
        system("cls"); // limpa a tela
        empresa1.imprimeDados();
        cout << endl << "Valor do imposto a ser pago: R$"
             << empresa1.calculaImposto() << endl << endl;
    }
    return 0;
}
