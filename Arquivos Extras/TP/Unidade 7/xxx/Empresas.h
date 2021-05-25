/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 7 - LVP 16 */

// para garantir que o arquivo não seja inicializado várias vezes
#ifndef EMPRESAS_H
// definindo o arquivo que tô usando
#define EMPRESAS_H

// criando a classe Empresas
class Empresas: public Imposto
{

public:
    Empresas(string="", int=0, float=0);
    float calculaImposto();
    float calculaImpostoPequenoPorte();
    float calculaImpostoSIMPLES();
    void imprimeDados()const;
};
#endif // EMPRESAS_H
