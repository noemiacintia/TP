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
    int tam=0, i;
    // cria dados para uma pessoa - aqui poderia ser feita uma leitura dos dados
    p.setNome("Jose");
    p.setCPF(123456);
    
    //adiciona uma pessoa ao cadastro
    cadastro[tam]= p;
    tam++;
 
    // cria dados para outra pessoa 
	// ideal � usar um menu para inserir v�rias pessoas
    p.setNome("Maria");
    p.setCPF(78910);

	// adiciona uma outra pessoa ao cadastro
    cadastro[tam]= p;
    tam++;
    
    // escreve os dados do cadastro
    cout<<"Cadastro de Pessoas"<<endl<<endl;
    for (i=0;i<tam;i++)
       cout<<cadastro[i].getNome()<<"  "<<cadastro[i].getCPF()<<endl;
	
    return 0;
}
/* 
for item in range(0, 10, 1):
    print(item)
*/