// Fig. 10.17: fig10_17.cpp  
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


//importância do operador seta (->)
Test::Test( int x ) {
   this->x = x; //inicializa x (atributo da classe) com o valor de x (parâmetro do construtor)
} 


// imprime x utilizando ponteiros this implícito e explícito;
// os parênteses em torno de *this são requeridos
void Test::print() const   
{
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

