#ifndef LISTA_H
#define LISTA_H

// Cria��o da Classe 
class Lista { 
   int sz;   // n�mero de elementos 
   int *v;   // ponteiro para inteiros 
public: 
    Lista(int);   // construtor 
    void setLista();
    void printLista();
    ~Lista();   // destrutor 
}; 

#endif