/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 7 - LVP 16 */

// para garantir que o arquivo não seja inicializado várias vezes
#ifndef IMPOSTO_H
// definindo o arquivo que tô usando
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
