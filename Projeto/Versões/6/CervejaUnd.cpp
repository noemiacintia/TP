#include "CervejaUnd.h"

CervejaUnd :: CervejaUnd( ){
    unidade = 0;
    qntUnidade = 0;
    pValidade = " ";
    totalEstoque=0;
}

CervejaUnd :: CervejaUnd(string nome, string codigo, float preco, int quantidade, int unidade, string pValidade) : Cervejaria (nome, codigo, preco){
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
    return qntUnidade;
}
void CervejaUnd :: setPValidade(string pValidade){
    this -> pValidade = pValidade;
}

string CervejaUnd :: getPValidade( ) const{
    return pValidade;
}

void CervejaUnd :: setCalculaEstoque(int total){
    this->totalEstoque=total;
}

int CervejaUnd :: getCalculaEstoque(){
    return totalEstoque;
}

void CervejaUnd :: RegraManipulacao( ){
    cout<<"Regras de Manipulação!"<<endl;
}

void CervejaUnd :: RegraTransporte( ){
    cout<<"Regras de Transporte!"<<endl;
}

void CervejaUnd :: ImprimeUnidade( ){
    Cervejaria :: Imprime( );
    cout<<"Quantidade existente no estoque: "<<getCalculaEstoque()<<" cervejas"<<endl;
    cout<<"Prazo de validade: "<<getPValidade( )<<endl;
}
