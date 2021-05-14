#ifndef CERVEJARIA_H
#define CERVEJARIA_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Cervejaria{
    protected:
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
        void MenuPrincipal() const;
        void Imprime( );
};
#endif
