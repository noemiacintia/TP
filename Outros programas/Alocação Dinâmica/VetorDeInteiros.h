#ifndef VETORDEINTEIROS_H
#define VETORDEINTEIROS_H

class VetorDeInteiros{
	int *vetor;
	int tam;
  public:
  	VetorDeInteiros(int); //par�metro: tamanho do vetor
  	bool armazenaValor(int,int); //par�metros: posi��o e valor
  	int total(); //retorna a soma dos elementos do vetor
  	int retornaPosicao(int); //recebe um valor e retorna a posi��o. Se n�o encontrar retorna -1
  	void escreveVetor();
  	~VetorDeInteiros();
};

#endif