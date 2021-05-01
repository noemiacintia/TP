#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#include "PoligonoRegular.cpp"
#include "Hexagono.cpp"

int main(){
	Hexagono h1(3), h2;
	cout<<fixed<<setprecision(2);
	cout<<"Area= "<<h1.calculaArea()<<endl;
	cout<<"Perimetro= "<<h1.perimetro()<<endl<<endl;
	
	cout<<"Area= "<<h2.calculaArea()<<endl;
	cout<<"Perimetro= "<<h2.perimetro()<<endl;

	return 0;
}