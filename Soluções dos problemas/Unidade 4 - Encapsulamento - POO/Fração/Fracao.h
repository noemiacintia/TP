/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 4 - LVP 07 */

// para garantir que o arquivo n�o seja inicializado v�rias vezes
#ifndef FRACAO_H
// definindo o arquivo que t� usando
#define FRACAO_H

// criando a classe Fracoes
class Fracao
{
    // definindo atributos
    int numerador;
    int denominador;
public:
    // definindo m�todos p�blicos
    Fracao(); // criando o construtor padr�o
    void setFracao(int, int);
    int getRacionalNum();
    int getRacionalDen();
    float getFlutuante();
    void multiplica(Fracao, Fracao);
    void divide(Fracao, Fracao);
};
#endif // FRACAO_H
