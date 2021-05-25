#include "Cervejaria.h"

Cervejaria :: Cervejaria( )
{
    nome = " ";
    codigo = " ";
    preco = 0.0;
}
Cervejaria :: Cervejaria(string nome, string codigo, float preco)
{
    this -> nome = nome;
    this -> codigo = codigo;
    this -> preco = preco;
}

void Cervejaria :: setNome(string nome)
{
    this -> nome = nome;
}

string Cervejaria :: getNome( )const
{
    return nome;
}

void Cervejaria :: setCodigo(string codigo)
{
    this -> codigo = codigo;
}

string Cervejaria :: getCodigo( )const
{
    return codigo;
}

void Cervejaria :: setPreco(float preco)
{
    this -> preco = preco;
}

float Cervejaria :: getPreco( )const
{
    return preco;
}

void Cervejaria :: Imprime( )
{
    cout << setiosflags(ios::left)
         << setw(10) << getNome()
         << setw(10) << getCodigo()
         << fixed << setprecision(2)
         << setw(30) << "R$ "
         //<< fixed << setprecision(2)
         << setw(0) << getPreco()
         << setw(10) << resetiosflags(ios::left)
         << setiosflags(ios::fixed | ios::showpoint) << endl;
}
