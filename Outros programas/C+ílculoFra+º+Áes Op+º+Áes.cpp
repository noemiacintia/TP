#include <iostream>

using namespace std;


struct Fracao {
		int num, den;
};
	
Fracao multiplica (Fracao, Fracao);  //protótipo da função

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	Fracao f1, f2, fr;
	char op;

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
	
	do{
		   cout<<endl<<"Escolha opção: '+', '-', '*', '/' ou 's' para sair: ";
		   cin>>op;
		   switch(op){
			   case '*': fr=multiplica (f1,f2);
      		   	         cout << "O resultado da multiplicação das frações é: ";
					     cout << fr.num << "/" << fr.den<<endl;
					     break;
			   case '/':
			   case '+':
		       case '-':		 
	           case 's': break;
	           default: cout<< "Opção inválida"<< endl;
		   }	
	} while(op!='s');
	return 0;
}

//Multiplicação
Fracao multiplica (Fracao fm1, Fracao fm2){
	Fracao fmr;
	
	fmr.num = fm1.num * fm2.num;
	fmr.den = fm1.den * fm2.den;
	return fmr;
}