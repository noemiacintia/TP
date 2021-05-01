#ifndef CIRCULO2_H
#define CIRCULO2_H

class Circulo2 : public Ponto2 {  //vejam a indicação de herança
	double raio;
  public:
	Circulo2( int = 0, int = 0, double = 0.0 ); 
	void alteraRaio( double );    
	double retornaRaio() const; 
	double retornaDiametro() const; 
	double retornaComp() const; 
	double retornaArea() const; 
	void imprime() const;
};

#endif