#include <iostream>
using namespace std;

#include "Retangulo.cpp"

int main ( ) {
	Retangulo r1, r2;
	r1.set_valores (3,4);
	r2.set_valores (5,6);
	cout<<" x de r1= "<<r1.get_x( )<<endl;
    cout<<" y de r1= "<<r1.get_y( )<<endl;
	cout<<"area de r1: "<< r1.area( )<< endl;
	cout<<" x de r2= "<<r2.get_x( )<<endl;
    cout<<" y de r2= "<<r2.get_y( )<<endl;
	cout<<"area de r2: "<< r2.area( )<< endl;
}
