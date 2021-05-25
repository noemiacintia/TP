/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 7 - LVP 14 */

#include "Velho.h"

/* construtor para inicializar o atributos da classe derivada
e passar para classe base as informações inseridos pelo usuário */
Velho::Velho(string nome, string rua, float preco, float porcentagemDesconto)
{
    this->nome=nome;
    this->rua=rua;
    this->preco=preco;
    setPorcentagemDesconto(porcentagemDesconto);
}

// inicializando o atributo static
float Velho::porcentagemDesconto=0;

// método para modificar o atributo static porcentagemDesconto
float Velho::setPorcentagemDesconto(float porcentagemDesconto)
{
    Velho::porcentagemDesconto=porcentagemDesconto;
}

// método para retornar atributo static porcentagemDesconto
float Velho::getPorcentagemDesconto()const
{
    return (porcentagemDesconto/100)*preco;
}

// método para calcular  a porcentagem de desconto em cima do preço
float Velho::calculaPorcentagemDesconto()const
{
    return preco-getPorcentagemDesconto();
}

// método para imprimir os dados desse imovel
void Velho::imprimeDadosVelho()const
{
    cout << fixed << setprecision(2);
    cout << endl << "O preço a ser cobrado por esse imóvel, com um desconto de R$ "
         << getPorcentagemDesconto() << ", é R$ " << calculaPorcentagemDesconto()
         << endl << endl;
}
