#ifndef CERVEJALITRO_H
#define CERVEJALITRO_H

#include "Cervejaria.h"

class CervejaLitro : public Cervejaria{
        float litro, qntLitro;
        string pValidade;

    public:
        CervejaLitro( );
        CervejaLitro(string, string , float, float, float, string);
        void setLitro(float);
        float getLitro( ) const;
        void setQntLitro(float);
        float getQntLitro( ) const;
        void setPValidade(string);
        string getPValidade( ) const;
        void RegraManipulacao( );
        void RegraTransporte( );
        void CalculaEstoque( );
        void Imprime( );
};
#endif