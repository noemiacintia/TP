#include "Cervejaria.cpp"
#include <locale>

int main ( ){
    setlocale (LC_ALL, "Portuguese");
    string nome, codigo;
    float preco;

    cout<<"Entre com o nome: "<<endl;
    cin>>nome;

    cout<<"Entre com o código: "<<endl;
    cin>>codigo;

    cout<<"Entre com o preço: "<<endl;
    cin>>preco;

    Cervejaria cervejaria (nome, codigo, preco);
    cervejaria.Imprime( );
    
    return 0;
}