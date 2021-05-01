#ifndef CILINDRO3_H
#define CILINDRO3_H

class Cilindro3 : public Circulo3 {
	public:
		Cilindro3( int = 0, int = 0, double = 0.0, double = 0.0 ); 
		void ajusta_altura( double );  
		double retorna_altura( ) const;  
		double retornaArea( ) const;   
		double retorna_volume( ) const;
		void imprime( ) const; 
	private:                               
		double altura; 
}; 
#endif
