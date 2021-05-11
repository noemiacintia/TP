#ifndef CERVEJAUND_H
#define CERVEJUND_H

#include "Cervejaria.h"

class CervejaUnd : public Cervejaria{
        int unidade;
        string pValidade, regraManipulacao, regraTransp;

    public:
        CervejaUnd( );
        void setUnidade(int);
        int getUnidade( ) const;
        void setPValidade(string);
        string getPValidade( ) const;
        void setRManipulacao(string);
        string geRManipulacao( ) const;
        void setRTransporte(string);
        string getRTransporte( ) const;
        void Imprime( ) const;
};
#endif