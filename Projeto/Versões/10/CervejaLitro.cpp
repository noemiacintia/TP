#include "CervejaLitro.h"

// contrutor da classe CervejaLitro para inicializar os atributos
CervejaLitro :: CervejaLitro( ){
    litro = 0;
    qntLitro = 0;
    pValidade = " ";
}

// construtor para atribuir aos atributos das classes os valores passados na main
CervejaLitro :: CervejaLitro(string nome, string codigo, float preco, float litro, float qntLitro, string pValidade) : Cervejaria (nome, codigo, preco){
    setLitro(litro);
    setQntLitro(qntLitro);
    setPValidade(pValidade);
}

void CervejaLitro :: setLitro(float litro){
    this -> litro = litro;
}

float CervejaLitro :: getLitro( ) const{
    return litro;
}

void CervejaLitro :: setQntLitro(float qntLitro){
    this -> qntLitro = qntLitro;
}

float CervejaLitro :: getQntLitro( ) const{
    return qntLitro - litro;
}

void CervejaLitro :: setPValidade(string pValidade){
    this -> pValidade = pValidade;
}

string CervejaLitro :: getPValidade( ) const{
    return pValidade;
}

void CervejaLitro :: ImprimeLitro( ){
    // chamando a função imprime de Cervejaria para imprimir os atributos de nome, código e preço
    Cervejaria :: Imprime( );
    cout<<"Litros existentes no estoque: "<<getQntLitro( )<<"L"<<endl;
    cout<<"Prazo de validade: "<<getPValidade( )<<endl;
}
