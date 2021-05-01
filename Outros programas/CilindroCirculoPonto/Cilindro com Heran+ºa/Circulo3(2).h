#ifndef CIRCULO3_H
#define CIRCULO3_H

class Circulo3 : public Ponto3 {  //vejam a indicação de herança
	double raio;
  public:
	Circulo3( int = 0, int = 0, double = 0.0 ); 
	void alteraRaio( double );    
	double retornaRaio() const; 
	double retornaDiametro() const; 
	double retornaComp() const; 
	double retornaArea() const; 
	void imprime() const;
};

#endif