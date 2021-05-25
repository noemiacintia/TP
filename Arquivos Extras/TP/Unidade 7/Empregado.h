/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 7 - LVP 15 */

// para garantir que o arquivo não seja inicializado várias vezes
#ifndef EMPREGADO_H
// definindo o arquivo que tô usando
#define EMPREGADO_H

// criando a classe derivada Empregado
class Empregado:public Pessoa
{
    // definindo atributos
    int numeroSecao;
    float salarioBase; // salário total sem os descontos
    float IR; // percentagem retida para o imposto de renda
public:
    Empregado();
    void setNumeroSecao(int);
    void setSalarioBase(float);
    void setIR(float);
    float calcularSalario()const; // salário líquido
    void imprimeDados()const;
};
#endif // EMPREGADO_H
