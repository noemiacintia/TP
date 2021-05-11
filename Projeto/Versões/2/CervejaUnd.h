#ifndef CERVEJAUND_H
#define CERVEJUND_H

#include "Cervejaria.h"

class CervejaUnd : public Cervejaria{
        int unidade, qntUnidade;
        string pValidade;

    public:
        CervejaUnd(string = " ", string = " ", float = 0.0, int = 0, int = 0, string = " ");
        void setUnidade(int);
        int getUnidade( ) const;
        void setQntUnidade(int);
        int getQntUnidade( ) const;
        void setPValidade(string);
        string getPValidade( ) const;
        void RegraManipulacao();
        void RegraTransporte();
        void Imprime( );
};
#endif