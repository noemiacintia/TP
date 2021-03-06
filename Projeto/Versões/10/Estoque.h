#ifndef ESTOQUE_H
#define ESTOQUE_H

// incluindo arquivos
#include "Cervejaria.h"
#include "CervejaLitro.h"
#include "CervejaUnd.h"
#include <fstream>
#include <vector>
#include <algorithm>

// criando a classe Estoque que herda de Cervejaria
class Estoque : public Cervejaria{
    // vetores para salvar o estoque dos produtos que iremos vender
        vector<CervejaUnd> CervejaUnidade;
        vector<CervejaLitro> CervejaL;

    public:
        // m�todos p�blicos
        Estoque( );
        bool PesquisarNomeUnd(string);
        bool PesquisarNomeLitro(string);
        bool PesquisarCodigoUnd(string);
        bool PesquisarCodigoLitro(string);
        bool SalvarUnd( );
        bool SalvarLitro( );
        bool AdicionarQntUnd(int, string);
        bool AdicionarQntL(int, string);
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
        void RegraManipulacao( );
        void RegraTransporte( );
        ~Estoque( );
};
#endif
