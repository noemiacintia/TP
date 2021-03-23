#include "VetorDeInteiros.h"

VetorDeInteiros::VetorDeInteiros(int pos){  //par�metros linha e coluna da matriz
	int i;
	tam= (pos>=0)?pos:0; //evita valores negativos
	vetor=new int[tam];
	for (i=0;i<tam;i++)  //inicializa o vetor com zero
		vetor[i]=0;
} 
bool VetorDeInteiros::armazenaValor(int pos,int valor){  //par�metros posi��o e valor
	if (pos>=0 && pos<tam && valor>=0){ //s� armazena valores positivos
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
int VetorDeInteiros::retornaPosicao(int valor){  //recebe um valor e retorna a posi��o. Se n�o encontrar retorna -1
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

VetorDeInteiros::~VetorDeInteiros(){  //libera os espa�os alocados da matriz para a mem�ria
	delete [] vetor;
} 
