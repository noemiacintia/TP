#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "Cervejaria.h"
#include "CervejaLitro.h"
#include "CervejaUnd.h"
#include <fstream>
#include <vector>
#include <algorithm>

ifstream& operator >> (ifstream& arquivo, Cervejaria& c)
{
	string nome, codigo;
	float preco;
	
	getline(arquivo, nome);
	c.setNome(nome);
	getline(arquivo, codigo);
	c.setCodigo(codigo);
	arquivo >> preco;
	c.setPreco(preco);
	
	return arquivo;
}
ofstream& operator << (ofstream& arquivo, Cervejaria& c)
{
	arquivo << endl << c.getNome( ) << endl;
	arquivo << c.getCodigo( ) << endl;
	arquivo << c.getPreco( );
	
	return arquivo;
}

class Estoque : public Cervejaria{
        vector<CervejaUnd> CervejaUnidade;
        vector<CervejaLitro> CervejaLitro;   

    public:
        Estoque( );
        ~Estoque( );
        bool PesquisarNomeUnd(string);
        //bool PesquisarNomeLitro(string);
        bool PesquisarCodigoUnd(string);
        //bool PesquisarCodigoLitro(string);
        bool SalvarUnd( );
        //bool SalvarLitro( );
        bool InserirUnd(CervejaUnd);
        //bool InserirLitro( );
        bool RetirarCodigoUnd(string);
        //bool RetirarCodigoLitro( );
        bool EfetuarVendaUnd(string, int);
        //bool EfetuarVendaLitro(string, float);
        void ImprimeUnd( );
        //void ImprimeLitro( );
        void ImprimeNomeOrdenadoUnd( );
        //void ImprimeNomeOrdenadoLitro( );
        void ImprimeQntOrdenadoUnd( );
        //void ImprimeQntOrdenadoLitro( );
};
#endif