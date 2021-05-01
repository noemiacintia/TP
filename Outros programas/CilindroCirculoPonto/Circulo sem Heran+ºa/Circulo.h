#ifndef CIRCULO_H
#define CIRCULO_H
	
class Circulo {
	int x;  
	int y;  
	double raio;  
  public:
	Circulo( int = 0, int = 0, double = 0.0);  
	void setX( int ); 
	int getX () const;  
	void setY( int ); 
	int getY () const;
    void alteraRaio( double );    
    double retornaRaio() const; 
    double retornaDiametro() const; 
    double retornaComp() const; 
    double retornaArea() const;        
 }; 
#endif
