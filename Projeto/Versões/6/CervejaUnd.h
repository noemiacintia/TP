#ifndef CERVEJAUND_H
#define CERVEJAUND_H

#include "Cervejaria.h"

class CervejaUnd : public Cervejaria{
        int unidade, qntUnidade, totalEstoque;
        string pValidade;

    public:
        CervejaUnd( );
        CervejaUnd(string, string, float, int, int, string);
        void setUnidade(int);
        int getUnidade( ) const;
        void setQntUnidade(int);
        int getQntUnidade( ) const;
        void setPValidade(string);
        string getPValidade( ) const;
        void setCalculaEstoque(int);
        int getCalculaEstoque( );
        void RegraManipulacao( );
        void RegraTransporte( );
        void ImprimeUnidade( );
};
#endif
