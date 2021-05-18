#ifndef CERVEJALITRO_H
#define CERVEJALITRO_H

// incluindo o arquivo da classe base
#include "Cervejaria.h"

// criando a classe CervejaLitro que herda de Cervejaria
class CervejaLitro : public Cervejaria{
    // atributos privados
        float litro, qntLitro;
        string pValidade;

    public:
        // métodos públicos
        CervejaLitro( ); // construtor para inicilizar os atributos
        // construtor para atribuir os valores passados na main para os atributos
        CervejaLitro(string, string , float, float, float, string);
        void setLitro(float);
        float getLitro( ) const;
        void setQntLitro(float);
        float getQntLitro( ) const;
        void setPValidade(string);
        string getPValidade( ) const;
        void ImprimeLitro( );
};
#endif
