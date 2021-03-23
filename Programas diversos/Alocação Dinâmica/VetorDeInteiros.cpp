#include "VetorDeInteiros.h"

VetorDeInteiros::VetorDeInteiros(int pos){  //parâmetros linha e coluna da matriz
	int i;
	tam= (pos>=0)?pos:0; //evita valores negativos
	vetor=new int[tam];
	for (i=0;i<tam;i++)  //inicializa o vetor com zero
		vetor[i]=0;
} 
bool VetorDeInteiros::armazenaValor(int pos,int valor){  //parâmetros posição e valor
	if (pos>=0 && pos<tam && valor>=0){ //só armazena valores positivos
		vetor[pos]=valor;
		return true;
	}
	return false;
} 
int VetorDeInteiros::total(){  //retorna a soma dos elementos da matriz
	int i, soma=0;
	for (i=0;i<tam;i++)
		soma+= vetor[i];
	return soma;
} 
int VetorDeInteiros::retornaPosicao(int valor){  //recebe um valor e retorna a posição. Se não encontrar retorna -1
	for (int i=0;i<tam;i++)
		if (vetor[i]==valor)
			return i;
	return -1;
} 

void VetorDeInteiros::escreveVetor(){
	cout<<"VETOR"<<endl;
	for (int i=0;i<tam;i++)
		cout<<vetor[i]<<" ";
	cout<<endl;
}

VetorDeInteiros::~VetorDeInteiros(){  //libera os espaços alocados da matriz para a memória
	delete [] vetor;
} 
