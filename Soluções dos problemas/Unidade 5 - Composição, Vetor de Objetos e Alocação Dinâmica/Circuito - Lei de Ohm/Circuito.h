/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 5 - LVP 09 */

// para garantir que o arquivo n�o seja inicializado v�rias vezes
#ifndef CIRCUITO_H
// definindo o arquivo que t� usando
#define CIRCUITO_H

// criando a classe Circuitos
class Circuito
{
    // definindo atributos
    float resistencia;
    float corrente;
public:
    // definindo m�todos p�blicos
    Circuito(); // criando o construtor padr�o
    void setResistencia(float);
    float getResistencia();
    void setCorrente(float);
    float getCorrente();
    float calculaVoltagem();
    float calculaPotencia();
};
#endif // CIRCUITO_H
