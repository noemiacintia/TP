/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 4 - LVP 07 */

// para garantir que o arquivo não seja inicializado várias vezes
#ifndef FRACAO_H
// definindo o arquivo que tô usando
#define FRACAO_H

// criando a classe Fracoes
class Fracao
{
    // definindo atributos
    int numerador;
    int denominador;
public:
    // definindo métodos públicos
    Fracao(); // criando o construtor padrão
    void setFracao(int, int);
    int getRacionalNum();
    int getRacionalDen();
    float getFlutuante();
    void multiplica(Fracao, Fracao);
    void divide(Fracao, Fracao);
};
#endif // FRACAO_H
