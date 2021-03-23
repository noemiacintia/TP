#ifndef LISTA_H
#define LISTA_H

// Criação da Classe 
class Lista { 
   int sz;   // número de elementos 
   int *v;   // ponteiro para inteiros 
public: 
    Lista(int);   // construtor 
    void setLista();
    void printLista();
    ~Lista();   // destrutor 
}; 

#endif