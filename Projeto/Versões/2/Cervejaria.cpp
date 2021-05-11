#include "Cervejaria.h"
#include <iomanip>

Cervejaria :: Cervejaria(string nome, string codigo){
    this -> nome = nome;
    this -> codigo = codigo;
}

void Cervejaria :: Imprime( ){
    cout<<"Nome: "<< nome <<endl;
    cout<<"Código: "<< codigo <<endl;
}

float Cervejaria :: precoPilsen = 8.0;

float Cervejaria :: precoIpa = 10.0;

float Cervejaria :: getPrecoPilsen( ){
    return precoPilsen;
}

float Cervejaria :: getPrecoIpa( ){
    return precoIpa;
}