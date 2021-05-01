#ifndef PONTO4_H
#define PONTO4_H

class Ponto4 {
		int x;  
		int y;
   public:
		Ponto4( int = 0, int = 0 ); 
//		~Ponto4(); 
		int retornaX()const;
		int retornaY()const;
	    void imprime() const;  
}; 

#endif
