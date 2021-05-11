#include "CervejaUnd.h"

CervejaUnd :: CervejaUnd(string nome, string codigo, float preco, int unidade, int qntUnidade, string pValidade) : Cervejaria (nome, codigo, preco){
    setPValidade(pValidade);
    setUnidade(unidade);
    setQntUnidade(qntUnidade);
}

void CervejaUnd ::setUnidade(int unidade){
    this -> unidade = unidade;
}

int CervejaUnd ::getUnidade( ) const{
    return unidade;
}

void CervejaUnd ::setQntUnidade(int qntUnidade){
    this -> qntUnidade = qntUnidade;
}

int CervejaUnd :: getQntUnidade( ) const{
    return qntUnidade - unidade;
}
void CervejaUnd :: setPValidade(string pValidade){
    this -> pValidade = pValidade;
}

string CervejaUnd :: getPValidade( ) const{
    return pValidade;
}

void CervejaUnd :: RegraManipulacao( ){
    cout<<"Regras de Manipulação!"<<endl;
}

void CervejaUnd :: RegraTransporte( ){
    cout<<"Regras de Transporte!"<<endl;
}

void CervejaUnd :: Imprime( ){
    Cervejaria :: Imprime( );
    CervejaUnd :: RegraManipulacao( );
    CervejaUnd :: RegraTransporte( );
    cout<<"Quantidade existente no estoque: "<<getQntUnidade( )<<" cervejas"<<endl;
    cout<<"Prazo de validade: "<<getPValidade( )<<endl;
}