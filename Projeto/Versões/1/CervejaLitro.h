#ifndef CERVEJALITRO_H
#define CERVEJALITRO_H

#include "Cervejaria.h"

class CervejaLitro : public Cervejaria{
        float litro, qntLitro;
        string pValidade, regraManipulacao, regraTransp;

    public:
        CervejaLitro( );
        void setLitro(float);
        float getLitro( ) const;
        void setQntLitro(float);
        float getQntLitro( ) const;
        void setPValidade(string);
        string getPValidade( ) const;
        void setRManipulacao(string);
        string geRManipulacao( ) const;
        void setRTransporte(string);
        string getRTransporte( ) const;
        void Imprime( ) const;
};
#endif