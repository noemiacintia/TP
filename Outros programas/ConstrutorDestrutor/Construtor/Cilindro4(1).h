#ifndef CILINDRO_H
#define CILINDRO_H

class Cilindro4 : public Circulo4 {
	double altura; 
  public:
	Cilindro4( int = 0, int = 0, double = 0.0, double = 0.0 ); 
//	~Cilindro4();	
	void imprime( ) const; 
}; 
#endif
