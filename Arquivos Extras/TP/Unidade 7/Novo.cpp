/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 7 - LVP 14 */

#include "Novo.h"

/* construtor para inicializar o atributos da classe derivada
e passar para classe base as informações inseridos pelo usuário */
Novo::Novo(string nome, string rua, float preco, float porcentagemAdicional)
{
    this->nome=nome;
    this->rua=rua;
    this->preco=preco;
    setPorcentagemAdicional(porcentagemAdicional);
}

// inicializando o atributo static
float Novo::porcentagemAdicional=0;

// método para modificar o atributo static porcentagemAdicional
float Novo::setPorcentagemAdicional(float porcentagemAdicional)
{
    Novo::porcentagemAdicional=porcentagemAdicional;
}

// método para retornar atributo static porcentagemAdicional
float Novo::getPorcentagemAdicional()const
{
    return (porcentagemAdicional/100)*preco;
}

// método para calcular  a porcentagem adicional em cima do preço
float Novo::calculaPorcentagemAdicional()const
{
    return preco+getPorcentagemAdicional();
}

// método para imprimir os dados desse imovel
void Novo::imprimeDadosNovo()const
{
    cout << fixed << setprecision(2);
    cout << endl << "O preço a ser cobrado por esse imóvel, com um adicional de R$"
         << getPorcentagemAdicional() << ", é R$" << calculaPorcentagemAdicional()
         << endl << endl;
}
