#include <iostream>

using namespace std;


struct Fracao {
		int num, den;
};
	
int main() {
	setlocale(LC_ALL,"Portuguese");
	
	Fracao f1, f2, fr;
	
	cout << "Digite a primeira fra��o" <<endl;
	cout<<"numerador: ";
	cin>>f1.num;
	cout<<"denominador: ";
	cin>>f1.den;
	cout<<"Digite a segunda fra��o"<<endl;
	cout<<"numerador: ";
	cin>>f2.num;
	cout<<"denominador: ";
	cin>>f2.den;
	
	fr.num = f1.num*f2.num;
	fr.den = f1.den*f2.den;
	
    cout <<endl<< "O resultado da multiplica��o das fra��es �: ";
	cout << fr.num << "/" << fr.den<<endl<<endl;
	return 0;
}

