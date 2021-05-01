//Classe PacoteOvernight: resultado do item a somado a 
//uma taxa adicional multiplicada pelo peso do pacote

#ifndef PACOTEOVERNIGT_H
#define PACOTEOVERNIGT_H

class PacoteOvernight: public Pacote{
	float taxaAdicional;
  public:
  	PacoteOvernight(float=0.0, float=0.0, float=0.0);
  	void setTaxaAdicional(float);
  	float getTaxaAdicional() const;
  	float calculaValor()const;
  	void imprimeValor() const;
};

#endif