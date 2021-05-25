/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 7 - LVP 14 */

#include "Novo.h"

/* construtor para inicializar o atributos da classe derivada
e passar para classe base as informa��es inseridos pelo usu�rio */
Novo::Novo(string nome, string rua, float preco, float porcentagemAdicional)
{
    this->nome=nome;
    this->rua=rua;
    this->preco=preco;
    setPorcentagemAdicional(porcentagemAdicional);
}

// inicializando o atributo static
float Novo::porcentagemAdicional=0;

// m�todo para modificar o atributo static porcentagemAdicional
float Novo::setPorcentagemAdicional(float porcentagemAdicional)
{
    Novo::porcentagemAdicional=porcentagemAdicional;
}

// m�todo para retornar atributo static porcentagemAdicional
float Novo::getPorcentagemAdicional()const
{
    return (porcentagemAdicional/100)*preco;
}

// m�todo para calcular  a porcentagem adicional em cima do pre�o
float Novo::calculaPorcentagemAdicional()const
{
    return preco+getPorcentagemAdicional();
}

// m�todo para imprimir os dados desse imovel
void Novo::imprimeDadosNovo()const
{
    cout << fixed << setprecision(2);
    cout << endl << "O pre�o a ser cobrado por esse im�vel, com um adicional de R$"
         << getPorcentagemAdicional() << ", � R$" << calculaPorcentagemAdicional()
         << endl << endl;
}
