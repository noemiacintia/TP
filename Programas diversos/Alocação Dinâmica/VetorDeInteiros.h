#ifndef VETORDEINTEIROS_H
#define VETORDEINTEIROS_H

class VetorDeInteiros{
	int *vetor;
	int tam;
  public:
  	VetorDeInteiros(int); //parâmetro: tamanho do vetor
  	bool armazenaValor(int,int); //parâmetros: posição e valor
  	int total(); //retorna a soma dos elementos do vetor
  	int retornaPosicao(int); //recebe um valor e retorna a posição. Se não encontrar retorna -1
  	void escreveVetor();
  	~VetorDeInteiros();
};

#endif