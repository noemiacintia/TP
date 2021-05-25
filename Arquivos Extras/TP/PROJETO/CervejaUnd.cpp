#include "CervejaUnd.h"

CervejaUnd :: CervejaUnd( )
{
    unidade = 0;
    qntUnidade = 0;
    pValidade = " ";
}

CervejaUnd :: CervejaUnd(string nome, string codigo, float preco, int unidade, int qntUnidade, string pValidade) : Cervejaria (nome, codigo, preco)
{
    setPValidade(pValidade);
    setUnidade(unidade);
    setQntUnidade(qntUnidade);
}

void CervejaUnd ::setUnidade(int unidade)
{
    this -> unidade = unidade;
}

int CervejaUnd ::getUnidade( ) const
{
    return unidade;
}

void CervejaUnd ::setQntUnidade(int qntUnidade)
{
    this -> qntUnidade = qntUnidade;
}

int CervejaUnd :: getQntUnidade( ) const
{
    return qntUnidade - unidade;
}
void CervejaUnd :: setPValidade(string pValidade)
{
    this -> pValidade = pValidade;
}

string CervejaUnd :: getPValidade( ) const
{
    return pValidade;
}

void CervejaUnd :: RegraManipulacao( )
{
    cout<<"Regras de Manipulação!"<<endl;
}

void CervejaUnd :: RegraTransporte( )
{
    cout<<"Regras de Transporte!"<<endl;
}

void CervejaUnd :: Imprime( )
{
    Cervejaria :: Imprime( );
    cout << setiosflags(ios::left)
         << setw(10) << CervejaUnd ::getQntUnidade()
         << setw(10) << CervejaUnd ::getPValidade()
         << setw(10) << resetiosflags(ios::left)
         << setiosflags(ios::fixed | ios::showpoint) << endl << endl;
    // CervejaUnd :: RegraManipulacao( );
    // CervejaUnd :: RegraTransporte( );
}
