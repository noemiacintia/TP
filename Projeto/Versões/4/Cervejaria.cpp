#include "Cervejaria.h"

Cervejaria :: Cervejaria( ){
    nome = " ";
    codigo = " ";
    preco = 0.0;
}
Cervejaria :: Cervejaria(string nome, string codigo, float preco){
    this -> nome = nome;
    this -> codigo = codigo;
    this -> preco = preco;
}

void Cervejaria :: setNome(string nome){
    this -> nome = nome;
}

string Cervejaria :: getNome( )const{
    return nome;
}

void Cervejaria :: setCodigo(string codigo){
    this -> codigo = codigo;
}

string Cervejaria :: getCodigo( )const{
    return codigo;
}

void Cervejaria :: setPreco(float preco){
    this -> preco = preco;
}

float Cervejaria :: getPreco( )const{
    return preco;
}

void Cervejaria :: Imprime( ){
    cout<<"Nome: "<< getNome( ) << endl;
    cout<<"Código: "<< getCodigo( ) << endl;
    cout<<"Preço: R$"<< fixed << setprecision(2) << getPreco( ) << endl;
}