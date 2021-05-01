#include <iostream>
#include <iomanip>
using namespace std;

#include "PoligonoRegular.cpp"
#include "Quadrado.cpp"

int main(){
	Quadrado q1(5);
	cout<<"Area= "<<q1.calculaArea()<<endl;
	cout<<"Perimetro= "<<q1.perimetro()<<endl;
	
	return 0;
}