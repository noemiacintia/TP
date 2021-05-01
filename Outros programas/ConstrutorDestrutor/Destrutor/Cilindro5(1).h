#ifndef CILINDRO5_H
#define CILINDRO5_H

class Cilindro5 : public Circulo5 {
	double altura; 
  public:
	Cilindro5( int = 0, int = 0, double = 0.0, double = 0.0 ); 
	~Cilindro5();	
	void imprime( ) const; 
}; 
#endif
