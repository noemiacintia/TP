/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
Unidade 7 - LVP 16:

Implemente um sistema de cobran�a de impostos de
uma empresa. A taxa do imposto � de 17% do
faturamento da empresa. O sistema precisa
identificar o nome e CNPJ (Cadastro Nacional de
Pessoa Jur�dica) da empresa.  Existe uma subclasse
de empresas, chamada de Empresa de Pequeno Porte,
que t�m um desconto determinado pela Receita
Federal sobre o valor dos impostos a serem pagos.
Existe tamb�m empresas de pequeno porte que, devido
algumas caracter�sticas, s�o cadastradas no SIMPLES
(Programa do Governo de apoio aos microempres�rios).
No caso da pequena empresa estar cadastrada no
SIMPLES o desconto sobre os impostos a serem pagos
ser� de 70%, caso contr�rio o desconto ser� de 50%.

O sistema deve imprimir o nome e CNPJ da empresa,
seu faturamento, bem como o valor a ser pago de
impostos. Caso seja uma pequena empresa, o sistema
imprime se ela est� cadastrada no SIMPLES ou n�o. */

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
    // para traduzir os cout's pro portugu�s
    setlocale(LC_ALL, "Portuguese");
    cout << "Este programa informa o valor do imposto "
         << "a ser pago por uma empresa." << endl << endl;
    // vari�veis para guardar informa��es que o usu�rio digitar
    string nomeDaEmpresa, cadastro, cadastroSIMPLES, cnpj;
    float faturamentoEmpresa;

    cout << "Nome da empresa: ";
    getline(cin, nomeDaEmpresa);
    cout << "CNPJ: ";
    cin >> cnpj;
    cout << "Faturamento: ";
    cin >> faturamentoEmpresa;
    cout << "Sua empresa � de pequeno porte? (S/N): ";
    cin >> cadastro;

    /* criando o objeto do tipo Empresas e passando os
        par�metros pro construtor inicializar */
    Empresas empresa1(nomeDaEmpresa, cnpj, faturamentoEmpresa);

    // se a empresa for de pequeno porte
    if(cadastro=="s" || cadastro=="S")
    {
        cout << "A empresa est� cadastrada no SIMPLES? (S/N): ";
        cin >> cadastroSIMPLES;
        // se a empresa for cadastrada no SIMPLES
        if(cadastroSIMPLES=="s"|| cadastroSIMPLES=="S")
        {
            system("cls"); // limpa a tela
            empresa1.imprimeDados();
            cout << endl << "Imposto � pagar: R$ "
                 << empresa1.calculaImpostoSIMPLES();
            cout << endl << "Empresa cadastrada no SIMPLES" << endl;
        }
        // se a empresa n�o for cadastrada no simples
        else if(cadastroSIMPLES=="n"|| cadastroSIMPLES=="N")
        {
            system("cls"); // limpa a tela
            empresa1.imprimeDados();
            cout << endl << "Imposto � pagar: R$ "
                 << empresa1.calculaImpostoPequenoPorte() << endl ;
        }
    }
    // se a empresa for de m�dio porte
    else if(cadastro=="n"|| cadastro=="N")
    {
        system("cls"); // limpa a tela
        empresa1.imprimeDados();
        cout << endl << "Valor do imposto a ser pago: R$"
             << empresa1.calculaImposto() << endl << endl;
    }
    return 0;
}
