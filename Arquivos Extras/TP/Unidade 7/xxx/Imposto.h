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
protected:
    string nome;
    int CNPJ;
    float faturamento;
public:
    Imposto();
};
#endif // IMPOSTO_H
