#include "CervejaUnd.h"

//Construtor vazio para inicializar os valores
CervejaUnd :: CervejaUnd( ){
    unidade = 0;
    qntUnidade = 0;
    pValidade = " ";
}

//Construtor parametrizado que herda os atributos de Cervejaria
CervejaUnd :: CervejaUnd(string nome, string codigo, float preco, int qntUnidade, int unidade, string pValidade) : Cervejaria (nome, codigo, preco){
    setPValidade(pValidade);
    setUnidade(unidade);
    setQntUnidade(qntUnidade);
}

//Setando e retornando os valores
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

//Imprimindo todos os dados de CervejaUnd
void CervejaUnd :: ImprimeUnidade( ){
    //Método Imprime() de "Cervejaria" para imprimir o nome, código e preço da cerveja.
    Cervejaria :: Imprime( );
    cout << "Quantidade existente no estoque: " << getQntUnidade( )<<" cervejas."<<endl;
    cout << "Prazo de validade: " << getPValidade( ) << endl;
}
