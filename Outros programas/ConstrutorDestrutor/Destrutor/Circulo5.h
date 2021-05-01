#ifndef CIRCULO5_H
#define CIRCULO5_H

class Circulo5 : public Ponto5 {
		double raio;
	public:
		Circulo5( int = 0, int = 0, double = 0.0 );
		~Circulo5();                 
		void imprime() const;// mostra um objeto Circulo4
};
 
#endif