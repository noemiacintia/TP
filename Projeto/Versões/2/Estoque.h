#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "Cervejaria.h"
#include "CervejaLitro.h"
#include "CervejaUnd.h"
#include <vector>

class Estoque : public Cervejaria{
        vector<CervejaUnd> CervejaUnidade;
        vector<CervejaLitro> CervejaLitro;   

    public:
        Estoque( );
        void PesquisarUnidade( );
        void PesquisarLitro( );
        void SalvarUnidade( );
        void SalvarLitro( );
        void RecuperarUnidade( );
        void RecuperarLitro( );
        void InserirUnidade( );
        void InserirLitro( );
        void RetirarUnidade( );
        void RetirarLitro( );
        void OrdenarUnidade( );
        void OrdenarLitro( );
        void Imprime( );
        void EfetuarVenda( );
};
#endif