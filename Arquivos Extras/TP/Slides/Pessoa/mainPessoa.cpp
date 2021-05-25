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
#include <fstream>

using namespace std;

#include "Pessoa.cpp"

int main()
{
    // para traduzir os cout's pro portugu�s
    setlocale(LC_ALL, "Portuguese");
    ofstream pessoaWrite("grupo1.txt", fstream::app);
    // vari�veis para guardar informa��es que o usu�rio digitar
    string nomeFun, cpf, linha;
    // definindo o objeto da classe
    Pessoa pessoa1;

    cout << "Insira os seguintes dados do empregado: " << endl << endl;
    cout << "Nome: ";
    cin >> nomeFun;
    cout << endl << "CPF: ";
    cin >> cpf;

    pessoa1.setNome(nomeFun);
    pessoa1.setCPF(cpf);

    // inserindo o objeto no arquivo
    pessoaWrite << pessoa1;
    pessoaWrite.close();

    ifstream arquivoRead("grupo1.txt");
    cout << "Lista de pessoas: " << endl << endl;

    // verificando se o arquivo foi aberto

    if(arquivoRead.is_open())
    {
        while(!arquivoRead.eof())
        {
            arquivoRead>>pessoa1; // ler os dados
            cout << "Nome: " << pessoa1.getNome() << endl;
            cout << "CPF: " << pessoa1.getCPF() << endl << endl;
        }
        arquivoRead.close();
    }
    else
    {
        cout << "N�o foi poss�vel abrir o arquivo!" << endl;
    }
    return 0;
}
