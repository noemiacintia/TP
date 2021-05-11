#include "Cervejaria.cpp"
#include "CervejaLitro.cpp"
#include <locale>

int main( ){
    setlocale (LC_ALL, "Portuguese");
    string pValidade, nome, codigo;
    float litro, qntLitro, preco;


    cout<<"Entre com o nome: "<<endl;
    getline(cin,nome);
    cout<<"Entre com o código: "<<endl;
    cin>>codigo;
    cout<<"Entre com o preço: "<<endl;
    cin>>preco;
    cout<<"Entre com a quantidade de litros existente no estoque: "<<endl;
    cin>>qntLitro;
    cout<<"Entre com a quantidade de litros que vai vender: "<<endl;
    cin>>litro;
    cout<<"Qual o prazo de validade (DD/MM/AA): "<<endl;
    cin>>pValidade;
    
    CervejaLitro cervejaLitro (nome, codigo, preco, litro, qntLitro, pValidade);
    cervejaLitro.Imprime( );

    return 0;
}