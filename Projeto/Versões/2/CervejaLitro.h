#ifndef CERVEJALITRO_H
#define CERVEJALITRO_H

#include "Cervejaria.h"

class CervejaLitro : public Cervejaria{
        float litro, qntLitro;
        string pValidade;

    public:
        CervejaLitro(string = " ", string = " ", float = 0.0, float = 0.0, float = 0.0, string = " ");
        void setLitro(float);
        float getLitro( ) const;
        void setQntLitro(float);
        float getQntLitro( ) const;
        void setPValidade(string);
        string getPValidade( ) const;
        void RegraManipulacao();
        void RegraTransporte();
        void Imprime( );
};
#endif