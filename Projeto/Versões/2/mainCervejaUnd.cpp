#include "Cervejaria.cpp"
#include "CervejaUnd.cpp"
#include <locale>

int main( ){
    setlocale (LC_ALL, "Portuguese");
    string pValidade, nome, codigo;
    float unidade, qntUnidade, preco;


    cout<<"Entre com o nome: "<<endl;
    getline(cin,nome);
    cout<<"Entre com o código: "<<endl;
    cin>>codigo;
    cout<<"Entre com o preço: "<<endl;
    cin>>preco;
    cout<<"Entre com a quantidade de cervejas existente no estoque: "<<endl;
    cin>>qntUnidade;
    cout<<"Entre com a quantidade de cervejas que vai vender: "<<endl;
    cin>>unidade;
    cout<<"Qual o prazo de validade (DD/MM/AA): "<<endl;
    cin>>pValidade;

    CervejaUnd cervejaUnd (nome, codigo, preco, unidade, qntUnidade, pValidade);
    cervejaUnd.Imprime( );

    return 0;
}