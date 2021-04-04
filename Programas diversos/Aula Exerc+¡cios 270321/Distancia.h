#ifndef DISTANCIA_H
#define DISTANCIA_H

class Distancia{
	Cidade cidade1;
	Cidade cidade2;
	float distancia;
  public:
  	Distancia();
  	void setCidades(Cidade, Cidade);
	void calculaDist();
	void imprimeDistancia();	
};

#endif