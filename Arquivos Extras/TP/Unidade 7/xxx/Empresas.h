/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 7 - LVP 16 */

// para garantir que o arquivo n�o seja inicializado v�rias vezes
#ifndef EMPRESAS_H
// definindo o arquivo que t� usando
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
