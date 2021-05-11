#ifndef CERVEJARIA_H
#define CERVEJARIA_H

#include <iostream>
#include <string>

using namespace std;

class Cervejaria{
    protected:
        string nome, codigo;
        static float precoPilsen, precoIpa;
        
    public:
        Cervejaria(string = " ", string = " ");
        static float getPrecoPilsen( );
        static float getPrecoIpa( );
        void Imprime( );
};
#endif