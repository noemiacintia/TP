/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 7 - LVP 16 */

#include "Imposto.h"

// para garantir que o arquivo não seja inicializado várias vezes
#ifndef EMPRESAS_H
// definindo o arquivo que tô usando
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
