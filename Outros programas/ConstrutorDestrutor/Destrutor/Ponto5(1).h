#ifndef PONTO5_H
#define PONTO5_H

class Ponto5 {
		int x;  
		int y;
   public:
		Ponto5( int = 0, int = 0 ); 
		~Ponto5(); 
		int retornaX()const;
		int retornaY()const;
	    void imprime() const;  
}; 

#endif
