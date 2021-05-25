/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 7 - LVP 16 */

// para garantir que o arquivo n�o seja inicializado v�rias vezes
#ifndef IMPOSTO_H
// definindo o arquivo que t� usando
#define IMPOSTO_H

// criando a classe base Imposto
class Imposto
{
    // definindo atributos
    float faturamento;
public:
    Imposto(float=0);
    float getFaturamento()const;
    float calculaImposto();
    float calculaImpostoPequenoPorte();
    float calculaImpostoSIMPLES();
};
#endif // IMPOSTO_H
