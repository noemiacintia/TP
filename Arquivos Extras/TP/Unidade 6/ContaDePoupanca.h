/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 6 - LVP 12 */

// para garantir que o arquivo não seja inicializado várias vezes
#ifndef CONTADEPOUPANCA_H
// definindo o arquivo que tô usando
#define CONTADEPOUPANCA_H

// criando a classe ContaDePoupanca
class ContaDePoupanca
{
    // definindo atributos
    static float taxaDeJurosAnual; // taxa de juros anual
    float saldoDaPoupanca; // quantia que o poupador atualmente tem em depósito
public:
    // definindo métodos públicos
    ContaDePoupanca(float);
    float calculeRendimentoMensal();
    static float modifiqueTaxaDeJuros(float);
};
#endif // CONTADEPOUPANCA_H
