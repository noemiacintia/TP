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
#include <fstream>

using namespace std;

#include "Pessoa.cpp"

int main()
{
    // para traduzir os cout's pro português
    setlocale(LC_ALL, "Portuguese");
    ofstream pessoaWrite("grupo1.txt", fstream::app);
    // variáveis para guardar informações que o usuário digitar
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
        cout << "Não foi possível abrir o arquivo!" << endl;
    }
    return 0;
}
