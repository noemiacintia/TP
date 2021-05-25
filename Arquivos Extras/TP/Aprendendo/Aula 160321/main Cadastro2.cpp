/* Crie uma classe Pessoa com nome, CPF, endere�o, data de nascimento. 
O endere�o � composto de nome da rua, n�mero, bairro e CEP. A data de nascimento
possui dia, m�s e ano. Na main, crie um cadastro com no m�ximo dez obejtos do 
tipo pessoa */

#include <iostream>
#include <string.h>

using namespace std;

#include "pessoa.cpp"

int main(){
    Pessoa p, cadastro[10];
    int tam=0, i, n;
    long int cpf;
    string nome;
    
    cout<<"Quantas pessoas deseja inserir no Cadastro? ";
    cin>>n;
    //l� os dados e os insere no cadastro
    for (i=0;i<n;i++){
    	cout<<"Digite o nome da pessoa: ";
    	cin>>nome;
    	p.setNome(nome);
    	cout<<"Digite o CPF: ";
    	cin>>cpf;
    	p.setCPF(cpf);
    	cadastro[i]=p; 
    	tam++;
	}
   
    
    // escreve os dados do cadastro
    cout<<endl<<"Cadastro de Pessoas"<<endl<<endl;
    for (i=0;i<tam;i++)
       cout<<cadastro[i].getNome()<<"  "<<cadastro[i].getCPF()<<endl;
	
    return 0;
}
/* 
for item in range(0, 10, 1):
    print(item)
*/