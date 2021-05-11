#ifndef CERVEJARIA_H
#define CERVEJARIA_H

#include <iostream>
#include <string>

using namespace std;

class Cervejaria{
        string nome, codigo;
        float preco;
        
    public:
        Cervejaria( );
        Cervejaria(string, string, float);
        void setNome(string);
        string getNome( )const;
        void setCodigo(string);
        string getCodigo( )const;
        void setPreco(float);
        float getPreco( )const;
        void Imprime( );
};
#endif