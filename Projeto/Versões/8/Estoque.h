#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "Cervejaria.h"
#include "CervejaLitro.h"
#include "CervejaUnd.h"
#include <fstream>
#include <vector>
#include <algorithm>


class Estoque : public Cervejaria{
        vector<CervejaUnd> CervejaUnidade;
        vector<CervejaLitro> CervejaL;

    public:
        Estoque( );
        bool PesquisarNomeUnd(string);
        bool PesquisarNomeLitro(string);
        bool PesquisarCodigoUnd(string);
        bool PesquisarCodigoLitro(string);
        bool SalvarUnd( );
        bool SalvarLitro( );
        bool InserirUnd(CervejaUnd);
        bool InserirLitro(CervejaLitro);
        bool RetirarCodigoUnd(string);
        bool RetirarCodigoLitro(string);
        bool EfetuarVendaUnd(string, int);
        bool EfetuarVendaLitro(string, float);
        void ImprimeUnd( );
        void ImprimeLitro( );
        void ImprimeNomeOrdenadoUnd( );
        void ImprimeNomeOrdenadoLitro( );
        void ImprimeQntOrdenadoUnd( );
        void ImprimeQntOrdenadoLitro( );
        ~Estoque( );
};
#endif
