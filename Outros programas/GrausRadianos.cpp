#include <iostream>
#define GRAUS 'G'  
#define RAD 'R' 
using namespace std;

// escolher entre Grauss ou Radianos

union angulo {  
	int graus;  
	float radianos;  
};  

int main() {
	setlocale(LC_ALL,"Portuguese");  
	angulo ang;  
	char op;  
	float x, resul;
	cout<<"Digite um valor: ";
	cin >> x;
	
	cout<<"Cálculo em graus ou radianos (G/R)?"<<endl;  
	cin>>op;  
	if (op == GRAUS) {  
		ang.graus = 180;  
		cout<<"Angulo: " <<ang.graus<<endl; 
		resul = x * ang.graus; 
		cout<< "O valor do número em graus é "<< resul << endl;
	}  
	else if (op == RAD)  {  
		ang.radianos = 3.1415;  
		cout<<"Angulo: " <<ang.radianos<<endl; 
		resul = x * ang.radianos;
		cout<<"O valor do número em radianos é "<< resul << endl;
	} 
	else cout<<"Entrada invalida!!"<<endl; 
	

	
	//resul = nro * ang 
} 