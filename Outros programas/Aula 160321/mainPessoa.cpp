/* Crie uma classe Pessoa com nome, CPF, endereço, data de nascimento. 
O endereço é composto de nome da rua, número, bairro e CEP. A data de nascimento
possui dia, mês e ano. Crie um programa que utilize esses dados */

#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

#include "pessoa.cpp"

int main(){
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
    Pessoa p;
    Endereco end;
    
    //atribui valores à um objeto pessoa 
	//aqui poderia ser feita uma leitura dos dados
    p.setNome("Jose");
    p.setCPF(123456);
    p.setEndereco("Rua das Flores", 10, "Bodocongó", 58000);
    
    //imprime os dados da pessoa
	cout<<p.getNome()<<endl<<p.getCPF()<<endl;
	
	//getEndereco() retorna uma struct
    end=p.getEndereco();
    cout<<end.rua<<", "<<end.numero<<" - "<<end.bairro<<" "<<end.cep<<endl;
    return 0;
}
