/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 7 - LVP 15 */

#include "Empregado.h"

// construtor para inicilizar os atributos da classe
Empregado::Empregado()
{
    this->numeroSecao=0;
    this->salarioBase=0;
    this->IR=0;
}

// m�todo que modifica numeroSecao para o numeroSecao inserido pelo usu�rio
void Empregado::setNumeroSecao(int numeroSecao)
{
    this->numeroSecao=numeroSecao;
}

// m�todo que modifica salarioBase para o salarioBase inserido pelo usu�rio
void Empregado::setSalarioBase(float salarioBase)
{
    this->salarioBase=salarioBase;
}

// m�todo que modifica IR para o IR inserido pelo usu�rio
void Empregado::setIR(float IR)
{
    this->IR=IR;
}

// m�todo que calcula o sal�rio l�quido
float Empregado::calcularSalario()const
{
    return salarioBase*((100-IR)/100);
}

// imprime dados do empregado
void Empregado::imprimeDados()const
{
    Pessoa::imprimeNomeCPF();
    cout << fixed << setprecision(2);
    cout << endl << "N�mero da se��o: " << numeroSecao << endl
         << endl << "Sal�rio: R$ " << calcularSalario() << endl;
}
