#include <iostream>
using namespace std;
class Retangulo{
	int x, y;
	public:
		void set_valores(int, int);
		int area();
		int get_x();
		int get_y();
};


void Retangulo::set_valores (int a, int b){
	x = a;
	y = b;
}

int Retangulo::get_x( ){
	return x;
}
int Retangulo::get_y( ){
	return y;
}

int Retangulo:: area ( ) { 
	return (x*y);
}


int main ( ) {
	Retangulo r1, r2;
	r1.set_valores (3,4);
	r2.set_valores (5,6);
	cout<<" x de r1= "<<r1.get_x( )<<endl;
    cout<<" y de r2= "<<r2.get_y( )<<endl;
	cout<<"area de r1: "<< r1.area( )<< endl;
	cout<<"area de r2: "<< r2.area( )<< endl;
}
