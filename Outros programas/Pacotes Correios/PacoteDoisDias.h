//Classe PacoteDoisDias: resultado do cálculo anterior somado de uma taxa adicional;

#ifndef PACOTEDOISDIAS_H
#define PACOTEDOISDIAS_H

class PacoteDoisDias: public Pacote{
	float taxaAdicional;
  public:
  	PacoteDoisDias(float=0.0, float=0.0, float=0.0);
  	void setTaxaAdicional(float);
  	float getTaxaAdicional() const;
  	float calculaValor()const;
  	void imprimeValor() const;
};

#endif