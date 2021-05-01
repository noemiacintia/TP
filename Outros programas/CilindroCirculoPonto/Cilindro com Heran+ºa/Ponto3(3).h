#ifndef PONTO3_H
#define PONTO3_H

class Ponto3{
	private:
		int x;   
		int y; 
	public:
		Ponto3 (int = 0, int = 0);
		void setX (int);
		int getX( ) const; 
		void setY(int); 
		int getY( ) const;
		void imprime() const;
};     
#endif
