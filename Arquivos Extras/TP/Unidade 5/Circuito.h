/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 5 - LVP 09 */

// para garantir que o arquivo não seja inicializado várias vezes
#ifndef CIRCUITO_H
// definindo o arquivo que tô usando
#define CIRCUITO_H

// criando a classe Circuitos
class Circuito
{
    // definindo atributos
    float resistencia;
    float corrente;
public:
    // definindo métodos públicos
    Circuito(); // criando o construtor padrão
    void setResistencia(float);
    float getResistencia();
    void setCorrente(float);
    float getCorrente();
    float calculaVoltagem();
    float calculaPotencia();
};
#endif // CIRCUITO_H
