/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 7 - LVP 14 */

// para garantir que o arquivo não seja inicializado várias vezes
#ifndef VELHO_H
// definindo o arquivo que tô usando
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
