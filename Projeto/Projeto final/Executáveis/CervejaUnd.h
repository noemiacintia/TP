#ifndef CERVEJAUND_H
#define CERVEJAUND_H

#include "Cervejaria.h"

//Classe CervejaUnd que herda a classe Cervejaria
class CervejaUnd : public Cervejaria{
        //Atributos privados
        int unidade, qntUnidade;
        string pValidade;

        //Métodos públicos
    public:
        //Construtor vazio
        CervejaUnd( );
        //Construtor parametrizado
        CervejaUnd(string, string, float, int, int, string);
        //Setando e retornando os valores
        void setUnidade(int);
        int getUnidade( ) const;
        void setQntUnidade(int);
        int getQntUnidade( ) const;
        void setPValidade(string);
        string getPValidade( ) const;
        //Imprimindo os dados de CervejaUnd
        void ImprimeUnidade( );
};
#endif
