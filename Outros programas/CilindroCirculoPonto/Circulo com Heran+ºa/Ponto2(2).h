#ifndef PONTO2_H
#define PONTO2_H

class Ponto2{
	protected:
		int x;   
		int y; 
	public:
		Ponto2 (int = 0, int = 0);
		void setX (int);
		int getX( ) const; 
		void setY(int); 
		int getY( ) const;
		void imprime() const;
};     
#endif
