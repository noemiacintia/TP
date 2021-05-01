#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <locale.h>

using namespace std;


#include "BibCpp\Pessoa.cpp"

int main(){
	setlocale(LC_ALL,"Portuguese");
	Endereco end;
	Data dma;
	end.rua = "Flores";
	end.numero = 33;
	end.bairro = "Bodocongo";
	end.CEP = 2222;
	dma.dia = 27;
	dma.mes = 10;
	dma.ano = 2010;
	
	Pessoa p, p2("João", 3333, {"Flores",55,"Bodocongo",2222}, {3,10,2010});
	p.setNome("Maria");
	p.setCPF(999);
	p.setEndereco(end);
	p.setDataNasc(dma);

	//imprime dados Pessoa p
	cout <<endl<< "Pessoa" <<  endl;
	cout<<"Nome= "<<p.getNome()<<endl;
	cout<<"CPF= "<<p.getCPF()<<endl;
	end = p.getEndereco();
	dma = p.getDataNasc();
	cout<<"Endereço= Rua: "<<end.rua<<" "<<end.numero<<" "<<end.bairro<<" "<<end.CEP<<endl;
	cout<<"Data Nasc.= "<<dma.dia<<"/"<<dma.mes<<"/"<<dma.ano<<endl;
	//imprime dados Pessoa p2
    cout <<endl<< "Pessoa" <<  endl;
	p2.imprime();
	return 0;
}

