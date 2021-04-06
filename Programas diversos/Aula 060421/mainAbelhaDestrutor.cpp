/* Cria uma classe de abelhas, onde cada abelha pode possuir um nome. Usando a
   variável static, é possível contar quantas abelhas tem durante a execução
   do programa */

#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

#include "abelhaDestrutor.cpp"

int main() {
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

	cout << "Total de abelhas = " << Abelha::total_de_abelhas() << endl; 
	Abelha ab1("Mara"), ab2;   // cria abelhas 
	cout << "Abelha ab1= " << ab1.nome() << endl; 
	cout << "Abelha ab2= " << ab2.nome() << endl; 
    cout << "Total de abelhas = " << Abelha::total_de_abelhas() << endl;
   
	    {     //Os objetos criados aqui só existem neste escopo
        Abelha ab3("jose");
        Abelha ab4("paulo");
	     cout << "Abelha ab3= " << ab3.nome() << endl; 
	     cout << "Abelha ab4= " << ab4.nome() << endl; 
        cout <<"Total de abelhas= "<<Abelha::total_de_abelhas()<<endl;
	    cout<<"Os objetos ab3 e ab4 serão destruídos!"<<endl;
        }
        cout <<"Total de abelhas= "<<Abelha::total_de_abelhas()<<endl;
        {
			   Abelha ab5;
			   cout << "Abelha ab5= " << ab5.nome() << endl;
			   cout <<"Total de abelhas= "<<Abelha::total_de_abelhas()<<endl;
	    		cout<<"O objeto ab5 será destruído!"<<endl;	
		}
        
	cout << "Total de abelhas = " << Abelha::total_de_abelhas() << endl; 
	return 0;
} 
