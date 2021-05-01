//Programa da aluna Julia Santos Arruda per�odo 2020.3

#include <iostream> //Biblioteca de entrada e sa�da de dados
#include <locale> //Biblioteca de manipula��o de caracteres especiais
#include <string> //Biblioteca de manipula��o de strings.
#include <cstdlib> //Biblioteca para utilizar o system.

using namespace std;

#include "Ingresso.cpp" //Incluindo os arquivos cpp's das classes.
#include "IngressoVip.cpp"
#include "IngressoNormal.cpp"
#include "CamaroteInferior.cpp"
#include "CamaroteSuperior.cpp"

int main(){
	
	IngressoNormal ingresso_normal(30.00); //Instancializando o objeto e inicializando o consrutor do objeto.
	CamaroteSuperior camarotesuperior(30.00,20.00,30.00);
	CamaroteInferior camaroteinferior(30.00, 20.00, "Parte inferior do palco");
	
	
	setlocale(LC_ALL, "portuguese");
    int opcao,op; //Declarando as variav�is.
    
   	cout<<" Bilheteria de ingressos. "<<endl;

	do{ //La�o de repeti��o enquanto.
		
		cout<<endl;
		cout<<"Menu - Qual tipo de ingresso: "<<endl; //Menu de op��es
		cout<<"Normal - 1"<<endl;
		cout<<"Vip - 2"<<endl;
		cout<<"Para sair, digite 0"<<endl;
		cin>>opcao;
		
		system("cls");
		
      switch(opcao){ //Comando de escolha.
		case 1: 
			ingresso_normal.imprime(); //Ingresso normal
			break;
		case 2:
			cout<<"O ingresso vip � do tipo camarote superior ou inferior: "<<endl; //ingresso vip
			cout<<"Ingresso do tipo camarote superior - 1 "<<endl; //tipo do ingresso vip.
			cout<<"Ingresso do tipo camarote inferior - 2 "<<endl;
			cin>>op; 
			if (op==1){
				camarotesuperior.imprime();
			} else{
				camaroteinferior.imprime();
			}
			break;
		case 0: //Caso seja zero, finaliza.
			cout<<"Finalizando..."<<endl;
			break;
        default:
        	cout<<"Op��o inv�lida!!"<<endl; //Informando que � uma op��o inv�lida.
	  }
	}while (opcao!=0);
	
	return 0;
}