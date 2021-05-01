// Utilizando o ponteiro this para referenciar membros de objeto.
#include <iostream>
using namespace std;

class Test 
{
public:
   Test( int = 0 ); // construtor padrão
   void print() const;
private:
   int x;
}; 


class A { 
      int x; 
  public:
     void setX(int); 
     void sou_eu_mesmo( const A & ); 
}; 
void A::sou_eu_mesmo( const A &a ){ 
   if( this == &a ) 
	cout << "Sim, sou eu mesmo" << endl; 
   else
	cout << "Nao, nao sou eu" << endl; 
} 
int main() { 
     A a, b; 
     a.sou_eu_mesmo(b); 
     a.sou_eu_mesmo(a); 
     return 0;
}


