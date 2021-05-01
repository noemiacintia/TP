/*
Esta main irá testar o funcionamento da classe Cidade.
	   	   	   	   Latitude		Longitude
Campina Grande -  7° 13' 51" e  35° 52' 54"
João Pessoa - 	  7°  6' 55" e  34° 51' 40"
Patos - Latitude: 7°  1' 32" e  37° 16' 40"
Cajazeiras - 	  7º 40' 18" e 	36º 52' 48" 
Bananeiras - 	  6° 45'  4" e	35° 38'  0"
*/

#include <iostream>
#include <clocale>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;

#include "Cidade.cpp"

int main()
{
	setlocale(LC_ALL, "Portuguese");
	Cidade cidade1, cidade2("Campina",7,13,51,35,52,54);
	cidade1.setNome("João Pessoa");
	cidade1.setlatG(7);
	cidade1.setlatM(6);
	cidade1.setlatS(55);
	cidade1.setlonG(34);
	cidade1.setlonM(51);
	cidade1.setlonS(40);
	cout<<"Cidade1: "<<cidade1.getNome()<<endl;
	cout<<"Coordenadas: "<<endl;
	cout<<cidade1.getlatG()<<" "<<cidade1.getlatM()<<" "<<cidade1.getlatS()<<endl;
	cout<<cidade1.getlonG()<<" "<<cidade1.getlonM()<<" "<<cidade1.getlonS()<<endl;
	cout<<"Cidade2: "<<cidade2.getNome()<<endl;
	cout<<"Coordenadas: "<<endl;
	cout<<cidade2.getlatG()<<" "<<cidade2.getlatM()<<" "<<cidade2.getlatS()<<endl;
	cout<<cidade2.getlonG()<<" "<<cidade2.getlonM()<<" "<<cidade2.getlonS()<<endl;
	return 0;
}