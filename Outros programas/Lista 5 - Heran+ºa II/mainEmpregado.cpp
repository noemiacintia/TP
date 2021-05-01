#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <locale.h>

using namespace std;
//atenção a localização dos arquivos - estão em uma pasta chamada BibCpp

#include "BibCpp\Pessoa.cpp"  //o #include deve indicar o caminho da pasta onde se encontra o arquivo
#include "BibCpp\Empregado.cpp"

int main(){
	setlocale(LC_ALL,"");
	Endereco end;
	Data dma;
	end.rua = "Flores";
	end.numero = 33;
	end.bairro = "Bodocongo";
	end.CEP = 2222;
	dma.dia = 27;
	dma.mes = 10;
	dma.ano = 2010;
	
	Empregado e, e1, e2("João", 3333, {"Flores",55,"Bodocongo",2222}, {3,10,2010}, 100, 2000.00, 10);
	e1.setNome("Maria");
	e1.setCPF(999);
	e1.setEndereco(end);
	e1.setDataNasc(dma);
	e1.setNumeroSecao(2000);
	e1.setSalarioBase(5000.50);
	e1.setINSS(12);

	//imprime dados Empregao e
	cout <<endl<< "Empregado" <<  endl;
	cout<<"Nome= "<<e.getNome()<<endl;
	cout<<"CPF= "<<e.getCPF()<<endl;
	end = e.getEndereco();
	dma = e.getDataNasc();
	cout<<"Endereço= Rua: "<<end.rua<<" "<<end.numero<<" "<<end.bairro<<" "<<end.CEP<<endl;
	cout<<"Data Nasc.= "<<dma.dia<<"/"<<dma.mes<<"/"<<dma.ano<<endl;
	cout<<"Numero de Seção= "<<e.getNumeroSecao()<<endl;
	cout<<"Salario Base= "<<e.getSalarioBase()<<endl;
	cout<<"INSS= "<<e.getINSS()<<"%"<<endl;
	cout<<"Salário Líquido= "<<e.calculaSalario()<<endl;
		
	//imprime dados Empregado e1
	cout << endl <<"Empregado:" <<  endl;
	e1.imprime();
	
	//imprime dados Empregado e2
	cout << endl <<"Empregado:" <<  endl;
	e2.imprime();
	return 0;
}

