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
#include <cstdlib>

using namespace std;

#include "Pessoa.cpp"

int main()
{
    // para traduzir os cout's pro portugu�s
    setlocale(LC_ALL, "Portuguese");
    cout << "Este programa faz o cadastro de x pessoas informadas "
    << "pelo usu�rio." << endl << endl;
    ofstream pessoaWrite("grupo1.txt", fstream::app);
    // vari�veis para guardar informa��es que o usu�rio digitar
    string nomeFun, cpf, linha;
    int quantidadeCadastros;
    // definindo o objeto da classe
    Pessoa pessoa1;

    cout << "Quantos cadastros voc� deseja realizar? ";
    cin >> quantidadeCadastros;

    while(quantidadeCadastros!=0)
    {
        system("cls");
        cout << "Insira os seguintes dados do usu�rio: " << endl << endl;
        cout << "Nome: ";
        cin >> nomeFun;
        cout << endl << "CPF: ";
        cin >> cpf;

        pessoa1.setNome(nomeFun);
        pessoa1.setCPF(cpf);

        // inserindo o objeto no arquivo
        pessoaWrite << pessoa1;
        quantidadeCadastros--;
    }
    pessoaWrite.close();

    // lendo
    ifstream arquivoRead("grupo1.txt");
    system("cls");
    cout << endl << "\tCADASTROS EFETUADOS" << endl << endl;

    // formata��o
    cout << setiosflags(ios::left)
         << setw(10) << "NOME"
         << setw(30) << "CPF"
         << resetiosflags(ios::left) << endl;

    // verificando se o arquivo foi aberto
    if(arquivoRead.is_open())
    {
        // ler at� o final do arquivo
        while(!arquivoRead.eof())
        {
            cout << setiosflags(ios::left)
                 << setw(10) << pessoa1.getNome()
                 << setw(30) << pessoa1.getCPF()
                 << setw(10) << setprecision(2) << resetiosflags(ios::left)
                 << setiosflags(ios::fixed | ios::showpoint) << endl;
            // comando para ler o que tem no arquivo
            arquivoRead >> pessoa1;
        }
        arquivoRead.close();
    }
    else
    {
        cout << "N�o foi poss�vel abrir o arquivo!" << endl;
    }
    return 0;
}
