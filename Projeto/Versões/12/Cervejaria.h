#ifndef CERVEJARIA_H
#define CERVEJARIA_H

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;
//Criando a classe base "Cervejaria"
class Cervejaria{
        //Atributos privados do produto
        string nome, codigo;
        float preco;

        //M�todos p�blicos
    public:
        //Construtor vazio
        Cervejaria( );
        //Construtor com par�metros
        Cervejaria(string, string, float);
        //Setando e retornando os nomes das cervejas
        void setNome(string);
        string getNome( )const;
        //Setando e retornando os c�digos das cervejas
        void setCodigo(string);
        string getCodigo( )const;
        //Setando e retornando os nomes das cervejas
        void setPreco(float);
        float getPreco( )const;
        //M�todo para imprimir o menu principal
        void MenuPrincipal() const;
        //M�todo para imprimir o nome, c�digo e pre�o.
        void Imprime( );
};
#endif
