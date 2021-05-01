#ifndef CIRCULO4_H
#define CIRCULO4_H

#include "Ponto4.cpp"  // definicao da classe Ponto4
      
class Circulo4 : public Ponto4 {
	public:
		Circulo4( int = 0, int = 0, double = 0.0 );
		~Circulo4();                 
		void imprime() const;// mostra um objeto Circulo4
	private:
		double raio;
 };
 
#endif