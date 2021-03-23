/*Criação de lista com alocação dinâmica.
  Importância do uso do destrutor */

#include <iostream>
using namespace std;

#include "Lista.cpp"

// Função Principal 
int main() 
{ 
   Lista l(10); 
   l.setLista();
   l.printLista();  
   return 0;
} 

