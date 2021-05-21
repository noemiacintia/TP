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

        //Métodos públicos
    public:
        //Construtor vazio
        Cervejaria( );
        //Construtor com parâmetros
        Cervejaria(string, string, float);
        //Setando e retornando os nomes das cervejas
        void setNome(string);
        string getNome( )const;
        //Setando e retornando os códigos das cervejas
        void setCodigo(string);
        string getCodigo( )const;
        //Setando e retornando os nomes das cervejas
        void setPreco(float);
        float getPreco( )const;
        //Método para imprimir o menu principal
        void MenuPrincipal() const;
        //Método para imprimir o nome, código e preço.
        void Imprime( );
};
#endif
