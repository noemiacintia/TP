//Crie uma classe ContaBancaria que tenha como atributos o nome do titular, n�mero da conta e saldo. 
//Esta classe deve simular um acesso � conta com as seguintes op��es: Realizar Saque 
//(o saldo n�o pode ficar negativo); Fazer Dep�sito (apenas aumenta o saldo da conta);
//Consultar Saldo (retorna o valor do saldo).

#include <iostream>
#include <locale>
#include <cstdlib> //ou <stdlib.h>
#include <cstring> //ou <string.h>

using namespace std;

class Conta{
  private:
    float saldo;
    string nomeCliente;
    int contaNum;
  public:
  	Conta(int, string);
    void depositar(float);
    void sacar(float);
    float getSaldo() ;
};

Conta::Conta(int nroConta, string name){
	saldo = 0;
	nomeCliente = name;
	contaNum = nroConta;
}

void Conta::depositar(float valor){
	if (valor>0)
		saldo += valor;
}

void Conta::sacar(float valor){
   if(saldo>=valor)
   	  saldo -= valor;  //==> saldo = saldo - valor
}

float Conta::getSaldo(){
    return saldo;
}

int main(){
    setlocale(LC_ALL,"");
    system("color F0");
    int opcao, nroConta;
    float valor;
    string nomeCliente;
    cout<<"Digite o n�mero da conta: ";
    cin>>nroConta;
    cout<<"Digite o nome do cliente: ";
	cin>>nomeCliente;
	
	Conta cc(nroConta, nomeCliente); //cria��o do objeto cc do tipo Conta
	cout << "Bem Vindo ao Banco" << endl;
  do{
    cout<<"O Que Deseja Fazer?"<<endl;
    cout<<"1. Fazer um dep�sito"<<endl;
    cout<<"2. Fazer uma retirada"<<endl;
    cout<<"3. Consutar saldo"<<endl;
    cout<<"4. Sair"<<endl;
    cin>>opcao;
	switch(opcao){
      case 1:
        system("cls");
		cout<<"O Senhor(a) escolheu fazer um dep�sito"<<endl;
        cout<<"Qual vai ser o valor do dep�sito?"<<endl;
        cin>>valor;
        cc.depositar(valor);
        cout<<"Seu saldo atual �:"<<cc.getSaldo()<<endl;
        break;
      case 2:
        system("cls");
        cout<<"O Senhor Digitou Para Realizar Saque"<<endl;
        cout<<"Digite o valor do saque"<<endl;
        cin>>valor;
        cc.sacar(valor);
        cout<<"Seu saldo atual �: "<<cc.getSaldo()<<endl;
        break;
      case 3:
        system("cls");
        cout<<"O senhor digitou para visualizar saldo"<<endl;
    	cout<<"O saldo da sua conta � "<<cc.getSaldo()<<endl;
    	break;
      case 4:
        system("cls");
        cout<<"O Programa foi Finalizado com Sucesso"<<endl;

	}
  } while (opcao!=4);
  return 0;
}
