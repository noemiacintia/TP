/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 7 - LVP 14 */

#include "Velho.h"

/* construtor para inicializar o atributos da classe derivada
e passar para classe base as informa��es inseridos pelo usu�rio */
Velho::Velho(string nome, string rua, float preco, float porcentagemDesconto)
{
    this->nome=nome;
    this->rua=rua;
    this->preco=preco;
    setPorcentagemDesconto(porcentagemDesconto);
}

// inicializando o atributo static
float Velho::porcentagemDesconto=0;

// m�todo para modificar o atributo static porcentagemDesconto
float Velho::setPorcentagemDesconto(float porcentagemDesconto)
{
    Velho::porcentagemDesconto=porcentagemDesconto;
}

// m�todo para retornar atributo static porcentagemDesconto
float Velho::getPorcentagemDesconto()const
{
    return (porcentagemDesconto/100)*preco;
}

// m�todo para calcular  a porcentagem de desconto em cima do pre�o
float Velho::calculaPorcentagemDesconto()const
{
    return preco-getPorcentagemDesconto();
}

// m�todo para imprimir os dados desse imovel
void Velho::imprimeDadosVelho()const
{
    cout << fixed << setprecision(2);
    cout << endl << "O pre�o a ser cobrado por esse im�vel, com um desconto de R$ "
         << getPorcentagemDesconto() << ", � R$ " << calculaPorcentagemDesconto()
         << endl << endl;
}
