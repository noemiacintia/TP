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
        vector<CervejaLitro> CervejaLitro;   

    public:
        Estoque( );
        ~Estoque( );
        bool PesquisarNomeUnd(string);
        bool PesquisarNomeLitro(string);
        bool PesquisarCodigoUnd(string);
        bool PesquisarCodigoLitro(string);
        bool SalvarUnd( );
        bool SalvarLitro( );
        bool InserirUnd(Cervejaria);
        bool InserirLitro( );
        bool RetirarCodigoUnd(string);
        bool RetirarCodigoLitro( );
        bool EfetuarVendaUnd(string, int);
        bool EfetuarVendaLitro(string, float);
        void ImprimeUnd( );
        void ImprimeLitro( );
        void ImprimeNomeOrdenadoUnd( );
        bool ImprimeNomeOrdenadoLitro( );
        void ImprimeQntOrdenadoUnd( );
        void ImprimeQntOrdenadoLitro( );
};
#endif