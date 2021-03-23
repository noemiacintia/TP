#include <iostream>

using namespace std;


struct Fracao {
		int num, den;
};
	
Fracao multiplica (Fracao, Fracao); //protótipo da função

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	Fracao f1, f2, fr;

	cout << "Digite a primeira fração" <<endl;
	cout<<"numerador: ";
	cin>>f1.num;
	cout<<"denominador: ";
	cin>>f1.den;
	cout<<"Digite a segunda fração"<<endl;
	cout<<"numerador: ";
	cin>>f2.num;
	cout<<"denominador: ";
	cin>>f2.den;
	
	fr=multiplica (f1,f2);
    cout <<endl<< "O resultado da multiplicação das frações é: ";
	cout << fr.num << "/" << fr.den<<endl<<endl;
	return 0;
}

//Função Multiplicação
Fracao multiplica (Fracao fm1, Fracao fm2){
	Fracao fmr;
	
	fmr.num = fm1.num * fm2.num;
	fmr.den = fm1.den * fm2.den;
	return fmr;
}