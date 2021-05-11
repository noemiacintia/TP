#include "CervejaLitro.h"

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

void CervejaLitro :: RegraManipulacao( ){
    cout<<"Regras de Manipulação!"<<endl;
}

void CervejaLitro :: RegraTransporte( ){
    cout<<"Regras de Transporte!"<<endl;
}

void CervejaLitro :: Imprime( ){
    Cervejaria :: Imprime( );
    CervejaLitro :: RegraManipulacao( );
    CervejaLitro :: RegraTransporte( );
    cout<<"Litros existentes no estoque: "<<getQntLitro( )<<"L"<<endl;
    cout<<"Prazo de validade: "<<getPValidade( )<<endl;
}