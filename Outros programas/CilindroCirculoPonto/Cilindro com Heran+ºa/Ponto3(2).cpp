#include "Ponto3.h" 

Ponto3::Ponto3(int x, int y){       // construtor da classe       
	this->x= x>0?x:0; 
	 this->y= y>0?y:0;
}
void Ponto3::setX(int x){ 
	 this->x= x>0?x:0;                                      
}
int Ponto3 :: getX() const{
	return x;
}
void Ponto3 :: setY(int y){       
	 this->y= y>0?y:0;                                      
}
int Ponto3:: getY() const {
	return y;
}
void Ponto3::imprime() const{
	cout<<"x = "<< getX()<<endl;
	cout<<"y = "<<getY()<<endl;
}
