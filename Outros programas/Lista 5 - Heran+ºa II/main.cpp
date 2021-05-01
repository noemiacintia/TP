#include <iostream>
#include <string>
#include <cstdlib>
#include <locale>

using namespace std;

#include "BibCpp\Pessoa.cpp"
#include "BibCpp\Empregado.cpp"
#include "BibCpp\Operario.cpp"
#include "BibCpp\Vendedor.cpp"
#include "BibCpp\Administrador.cpp"
#include "BibCpp\Cliente.cpp"
#include "BibCpp\Fornecedor.cpp"

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	Pessoa pe("Gabriel", 75665, {"Carmem Lúcia",643,"Centro",556756}, {9,04,2004});
	cout <<"Pessoa"<<endl;	
	pe.imprime();
	
	Empregado empre("Francinildo", 5353, {"Fagundes",23,"Centro",544457}, {03,9,2000}, 466, 2000, 8);
	cout<<endl<<"Empregado"<<endl;
	empre.imprime();

	Operario op("William", 68886 , {"Maria da Penha",5,"Centro",355355},{13,07,2001},4554, 1000, 8, 200 ,10);
	cout << endl << "Operario" << endl;
	op.imprime();

	Vendedor vend("David", 44646 , {"Marechal Cunha",45,"Centro",535353},{23,03,2001},642, 1500 , 8 , 500, 50);
	cout<< endl  << "Vendedor" << endl;
	vend.imprime();

	Administrador adm("Fabio", 454564, {"José Maria",454,"Centro",758785}, {16,03,2002}, 344, 5000, 8, 500);
	cout << endl<< "Administrador"  << endl;
	adm.imprime();

	Cliente cli("João", 488464, {"Dom Pedro",34,"Centro",454543}, {04,06,2004},300, 200);
	cout<< endl<<"Cliente"<<endl;
	cli.imprime();

	Fornecedor forne("Maria", 454566, {"Pedro Barros",55,"Centro",557755}, {02,04,1997},4000, 2000);
	cout<< endl << "Fornecedor"  << endl;
	forne.imprime();

	return 0;
}