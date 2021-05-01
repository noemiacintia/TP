#include "Lista.h"

// Construtor 
Lista::Lista (int s) { 
  sz = s; 
  v = new int[sz];   //aloca um vetor  de inteiros de tamanho sz
} 

void Lista::setLista(){
	int *pv=v;
	for (int i=0;i<sz;i++){
       *pv=i;
       pv++;
	}
}

void Lista::printLista(){
	cout<<"Vetor gerado: ";
	for (int i=0;i<sz;i++)
       cout<<v[i]<<" ";
	cout<<endl<<endl;	
}

// Destrutor 
Lista::~Lista() { 
    delete []v;   // devolve o vetor  v  para a memória
	cout<<"Vetor deletado - liberado espaco de memoria"<<endl;
} 
