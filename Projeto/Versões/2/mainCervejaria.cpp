#include "Cervejaria.cpp"
#include <locale>

int main ( ){
    setlocale (LC_ALL, "Portuguese");
    int op;

    cout<<"Qual cerveja você deseja comprar: "<<endl;
    cout<<"1 - Pilsen"<<endl;
    cout<<"2 - Ipa"<<endl;
    cin>>op;

    if (op == 1){
        Cervejaria cervejaria ("Pilsen", "p001");
        cervejaria.Imprime( );
        cout<<"Preço: R$"<<fixed<<setprecision (2)<<cervejaria.getPrecoPilsen( )<<endl;
    }
    else{
        Cervejaria cervejaria ("Ipa", "i001");
        cervejaria.Imprime( );
        cout<<"Preço: R$"<<fixed<<setprecision(2)<<cervejaria.getPrecoIpa( )<<endl;
    }
    
    return 0;
}