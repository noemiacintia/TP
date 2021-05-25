/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
Unidade 7 - LVP 15:

Dada a classe Pessoa abaixo, crie a classe
Empregado derivada dessa classe, com os
atributos numeroSecao, salarioBase
(vencimento base) e IR
(percentagem retida para o imposto de renda).
Implemente a classe Empregado com um m�todo
para modifica��o de cada dado e outro para
calcularSalario (sal�rio l�quido). Lembrando
que o sal�rio l�quido � o sal�rio base menos
o desconto do Imposto de Renda. A classe
Empregado tem tamb�m um m�todo que imprime
os dados do Empregado (Nome, CPF, numeroSecao)
e o seu respectivo sal�rio l�quido.

A classe Pessoa n�o pode ser alterada, mas
seus m�todos devem ser implementados para
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
CPF, n�mero de se��o, sal�rio e imposto de renda,
respectivamente.

Sa�da
Deve conter os dados do empregado: nome, CPF,
n�mero de se��o e o resultado do c�lculo do
sal�rio l�quido. */


#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

#include "Pessoa.cpp"
#include "Empregado.cpp"

int main()
{
    // para traduzir os cout's pro portugu�s
    setlocale(LC_ALL, "Portuguese");
    cout << "Este programa informa o sal�rio l�quido de acordo "
         << "com as informa��es que o usu�rio inserir." << endl << endl;
    // vari�veis para guardar informa��es que o usu�rio digitar
    string nomeFun, cpf;
    int numSecao;
    float salariobase, ir;

    cout << "Insira os seguintes dados do empregado: " << endl << endl;
    cout << "Nome: ";
    cin >> nomeFun;
    cout << endl << "CPF: ";
    cin >> cpf;
    cout << endl << "N�mero da se��o: ";
    cin >> numSecao;
    cout << endl << "Sal�rio base: ";
    cin >> salariobase;
    cout << endl << "Imposto de renda: ";
    cin >> ir;

    // definindo o objeto da classe
    Empregado pessoa1;
    // chamando as fun��es com o objeto que defini
    pessoa1.setNome(nomeFun);
    pessoa1.setCPF(cpf);
    pessoa1.setIR(ir);
    pessoa1.setSalarioBase(salariobase);
    pessoa1.setNumeroSecao(numSecao);
    pessoa1.imprimeDados();
    return 0;
}
