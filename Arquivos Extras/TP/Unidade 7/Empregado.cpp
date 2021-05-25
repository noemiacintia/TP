/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 7 - LVP 15 */

#include "Empregado.h"

// construtor para inicilizar os atributos da classe
Empregado::Empregado()
{
    this->numeroSecao=0;
    this->salarioBase=0;
    this->IR=0;
}

// método que modifica numeroSecao para o numeroSecao inserido pelo usuário
void Empregado::setNumeroSecao(int numeroSecao)
{
    this->numeroSecao=numeroSecao;
}

// método que modifica salarioBase para o salarioBase inserido pelo usuário
void Empregado::setSalarioBase(float salarioBase)
{
    this->salarioBase=salarioBase;
}

// método que modifica IR para o IR inserido pelo usuário
void Empregado::setIR(float IR)
{
    this->IR=IR;
}

// método que calcula o salário líquido
float Empregado::calcularSalario()const
{
    return salarioBase*((100-IR)/100);
}

// imprime dados do empregado
void Empregado::imprimeDados()const
{
    Pessoa::imprimeNomeCPF();
    cout << fixed << setprecision(2);
    cout << endl << "Número da seção: " << numeroSecao << endl
         << endl << "Salário: R$ " << calcularSalario() << endl;
}
