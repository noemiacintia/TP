/*Cria��o de lista com aloca��o din�mica.
  Import�ncia do uso do destrutor */

#include <iostream>
using namespace std;

#include "Lista.cpp"

// Fun��o Principal 
int main() 
{ 
   Lista l(10); 
   l.setLista();
   l.printLista();  
   return 0;
} 

