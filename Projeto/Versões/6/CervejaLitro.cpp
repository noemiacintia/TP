#include "CervejaLitro.h"

CervejaLitro :: CervejaLitro( ){
    litro = 0;
    qntLitro = 0;
    pValidade = " ";
}

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
    cout<<"============== REGRA DE MANIPULAÇÃO! ==============="<<endl<<endl;
    cout<<"> Coloque cada garrafa de cerveja num saco de plástico hermético;"<<endl;
    cout<<"> Envolva cada uma com plástico-bolha ou espuma para garantir que estejam seguras;"<<endl;
    cout<<"> Se for um pack de cerveja, proteja o pacote inteiro com plástico-bolha;"<<endl;
    cout<<"> Coloque as cervejas numa caixa de cartão já acolchoada com materiais de amortecimento;"<<endl;
    cout<<"> Preencha os espaços vazios com mais granulado de esferovite ou outro material;"<<endl;
    cout<<"> Feche e sele a caixa. Pode também adicionar uma etiqueta de “Frágil”."<<endl; 
}

void CervejaLitro :: RegraTransporte( ){
    cout<<"============== REGRA DE TRANSPORTE! ==============="<<endl<<endl;
    cout<<"> Contar com instalações adequadas do local onde a bebida é fabricada;"<<endl;
    cout<<"> Realizar a higienização e manipulação correta dos ingredientes;"<<endl;
    cout<<"> manejo de resíduos;"<<endl;
    cout<<"> Seleção da matéria prima e embalagens;"<<endl;
    cout<<"> Rotulagem;"<<endl;
    cout<<"> Boas práticas protegem quem consome as cervejas."<<endl;
}

void CervejaLitro :: Imprime( ){
    Cervejaria :: Imprime( );
    CervejaLitro :: RegraManipulacao( );
    CervejaLitro :: RegraTransporte( );
    cout<<"Litros existentes no estoque: "<<getQntLitro( )<<"L"<<endl;
    cout<<"Prazo de validade: "<<getPValidade( )<<endl;
}