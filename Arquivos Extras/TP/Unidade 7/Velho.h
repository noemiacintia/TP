/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 7 - LVP 14 */

// para garantir que o arquivo n�o seja inicializado v�rias vezes
#ifndef VELHO_H
// definindo o arquivo que t� usando
#define VELHO_H

class Velho:public Imovel
{
    static float porcentagemDesconto;
public:
    Velho(string="", string="", float=0, float=0);
    static float setPorcentagemDesconto(float); // Porcentagem de desconto
    float getPorcentagemDesconto()const;
    float calculaPorcentagemDesconto()const;
    void imprimeDadosVelho()const;
};
#endif // VELHO_H
