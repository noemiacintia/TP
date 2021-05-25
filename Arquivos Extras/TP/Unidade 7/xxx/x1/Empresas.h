/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 7 - LVP 16 */

#include "Imposto.h"

// para garantir que o arquivo n�o seja inicializado v�rias vezes
#ifndef EMPRESAS_H
// definindo o arquivo que t� usando
#define EMPRESAS_H

// criando a classe derivada Empresas
class Empresas: public Imposto
{
    // definindo atributos
    string nome;
    string CNPJ;
public:
    Empresas(string="", string="", float=0);
    void imprimeDados()const;
};
#endif // EMPRESAS_H
