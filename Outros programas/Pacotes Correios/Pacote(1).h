//Classe Pacote: peso x preço por quilo
#ifndef PACOTE_H
#define PACOTE_H

class Pacote{
	float peso;
	float precoQuilo;
  public:
  	Pacote(float=0.0, float=0.0);
  	void setPeso(float);
  	float getPeso() const;
  	void setPrecoQuilo(float);
  	float getPrecoQuilo() const;
  	float calculaValor() const;
  	void imprimeValor() const;
};

#endif