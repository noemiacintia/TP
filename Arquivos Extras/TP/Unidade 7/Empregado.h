/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 7 - LVP 15 */

// para garantir que o arquivo n�o seja inicializado v�rias vezes
#ifndef EMPREGADO_H
// definindo o arquivo que t� usando
#define EMPREGADO_H

// criando a classe derivada Empregado
class Empregado:public Pessoa
{
    // definindo atributos
    int numeroSecao;
    float salarioBase; // sal�rio total sem os descontos
    float IR; // percentagem retida para o imposto de renda
public:
    Empregado();
    void setNumeroSecao(int);
    void setSalarioBase(float);
    void setIR(float);
    float calcularSalario()const; // sal�rio l�quido
    void imprimeDados()const;
};
#endif // EMPREGADO_H
