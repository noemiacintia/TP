/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
Unidade 7 - LVP 15:

Dada a classe Pessoa abaixo, crie a classe
Empregado derivada dessa classe, com os
atributos numeroSecao, salarioBase
(vencimento base) e IR
(percentagem retida para o imposto de renda).
Implemente a classe Empregado com um método
para modificação de cada dado e outro para
calcularSalario (salário líquido). Lembrando
que o salário líquido é o salário base menos
o desconto do Imposto de Renda. A classe
Empregado tem também um método que imprime
os dados do Empregado (Nome, CPF, numeroSecao)
e o seu respectivo salário líquido.

A classe Pessoa não pode ser alterada, mas
seus métodos devem ser implementados para
serem usados no programa.
class Pessoa {
      string nome;
      string CPF;
   public:
       Pessoa();
       void setNome(string);
       void setCPF(string);
       void imprimeNomeCPF() const;
   };

Entrada
Devem ser lidos os dados de um empregado: nome,
CPF, número de seção, salário e imposto de renda,
respectivamente.

Saída
Deve conter os dados do empregado: nome, CPF,
número de seção e o resultado do cálculo do
salário líquido. */


#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

#include "Pessoa.cpp"
#include "Empregado.cpp"

int main()
{
    // para traduzir os cout's pro português
    setlocale(LC_ALL, "Portuguese");
    cout << "Este programa informa o salário líquido de acordo "
         << "com as informações que o usuário inserir." << endl << endl;
    // variáveis para guardar informações que o usuário digitar
    string nomeFun, cpf;
    int numSecao;
    float salariobase, ir;

    cout << "Insira os seguintes dados do empregado: " << endl << endl;
    cout << "Nome: ";
    cin >> nomeFun;
    cout << endl << "CPF: ";
    cin >> cpf;
    cout << endl << "Número da seção: ";
    cin >> numSecao;
    cout << endl << "Salário base: ";
    cin >> salariobase;
    cout << endl << "Imposto de renda: ";
    cin >> ir;

    // definindo o objeto da classe
    Empregado pessoa1;
    // chamando as funções com o objeto que defini
    pessoa1.setNome(nomeFun);
    pessoa1.setCPF(cpf);
    pessoa1.setIR(ir);
    pessoa1.setSalarioBase(salariobase);
    pessoa1.setNumeroSecao(numSecao);
    pessoa1.imprimeDados();
    return 0;
}
