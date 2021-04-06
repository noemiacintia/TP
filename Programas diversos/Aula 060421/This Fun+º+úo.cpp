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


Test::Test( int value ) 
   : x( value ) // inicializa x como value
{ 
   
} 

// imprime x utilizando ponteiros this implícito e explícito;
// os parênteses em torno de *this são requeridos
void Test::print() const {
   // utiliza implicitamente o ponteiro this para acessar o membro x
   cout << "        x = " << x<<endl;                                    

   // utiliza explicitamente o ponteiro this e o operador seta
   // para acessar o membro x                                
   cout << "  this->x = " << this->x <<endl;                      

   // utiliza explicitamente o ponteiro this desreferenciado e
   // o operador ponto para acessar o membro x               
   cout << "(*this).x = " << ( *this ).x << endl;          
} 

int main()
{
   Test testObject( 12 ); // instancia e inicializa testObject

   testObject.print();
   return 0;
} 

