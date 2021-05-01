#include <iostream>

using namespace std;


struct Fracao {
		int num, den;
};
	
Fracao multiplica (Fracao, Fracao);  //prot�tipo da fun��o

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	Fracao f1, f2, fr;
	char op;

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
	
	do{
		   cout<<endl<<"Escolha op��o: '+', '-', '*', '/' ou 's' para sair: ";
		   cin>>op;
		   switch(op){
			   case '*': fr=multiplica (f1,f2);
      		   	         cout << "O resultado da multiplica��o das fra��es �: ";
					     cout << fr.num << "/" << fr.den<<endl;
					     break;
			   case '/':
			   case '+':
		       case '-':		 
	           case 's': break;
	           default: cout<< "Op��o inv�lida"<< endl;
		   }	
	} while(op!='s');
	return 0;
}

//Multiplica��o
Fracao multiplica (Fracao fm1, Fracao fm2){
	Fracao fmr;
	
	fmr.num = fm1.num * fm2.num;
	fmr.den = fm1.den * fm2.den;
	return fmr;
}