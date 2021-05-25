/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 6 - LVP 12 */

// para garantir que o arquivo n�o seja inicializado v�rias vezes
#ifndef CONTADEPOUPANCA_H
// definindo o arquivo que t� usando
#define CONTADEPOUPANCA_H

// criando a classe ContaDePoupanca
class ContaDePoupanca
{
    // definindo atributos
    static float taxaDeJurosAnual; // taxa de juros anual
    float saldoDaPoupanca; // quantia que o poupador atualmente tem em dep�sito
public:
    // definindo m�todos p�blicos
    ContaDePoupanca(float);
    float calculeRendimentoMensal();
    static float modifiqueTaxaDeJuros(float);
};
#endif // CONTADEPOUPANCA_H
