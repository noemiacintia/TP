#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "CervejaLitro.h"
#include "CervejaUnd.h"
#include <vector>

class Estoque{
        vector<CervejaUnd> CervejaUnidade;
        vector<CervejaLitro> CervejaLitro;   

    public:
        Estoque( );
        void InserirUnidade( );
        void InserirLitro( );
        void RetirarUnidade( );
        void RetirarLitro( );
        void OrdenarUnidade( );
        void OrdenarLitro( );
        void Imprime( );
};
#endif