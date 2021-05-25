/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 7 - LVP 14 */

// para garantir que o arquivo n�o seja inicializado v�rias vezes
#ifndef NOVO_H
// definindo o arquivo que t� usando
#define NOVO_H

// criando a classe derivada Novo
class Novo:public Imovel
{
    // definindo atributo fixo
    static float porcentagemAdicional;
public:
    // definindo m�todos p�blicos
    Novo(string="", string="", float=0, float=0);
    static float setPorcentagemAdicional(float); // Porcentagem adicional
    float getPorcentagemAdicional()const;
    float calculaPorcentagemAdicional()const;
    void imprimeDadosNovo()const;
};
#endif // NOVO_H
