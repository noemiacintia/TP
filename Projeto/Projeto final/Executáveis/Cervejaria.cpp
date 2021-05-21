#include "Cervejaria.h"

//Inicializando tudo com 0 ou vazio
Cervejaria :: Cervejaria( ){
    nome = " ";
    codigo = " ";
    preco = 0.0;
}
//Construtor parametrizado
Cervejaria :: Cervejaria(string nome, string codigo, float preco){
    this -> nome = nome;
    this -> codigo = codigo;
    this -> preco = preco;
}

void Cervejaria :: setNome(string nome){
    this -> nome = nome;
}

string Cervejaria :: getNome( )const{
    return nome;
}

void Cervejaria :: setCodigo(string codigo){
    this -> codigo = codigo;
}

string Cervejaria :: getCodigo( )const{
    return codigo;
}

void Cervejaria :: setPreco(float preco){
    this -> preco = preco;
}

float Cervejaria :: getPreco( )const{
    return preco;
}
//Menu principal padrão
void Cervejaria :: MenuPrincipal() const{
    cout<<"============== MENU PRINCIPAL! ==============="<<endl<<endl;
	cout<<"Escolha o estoque que deseja verificar: "<<endl;
    cout<<"1 - Unidade\n2 - Litro" << endl;
}
//Para imprimir os dados presente na classe cervejaria
void Cervejaria :: Imprime( ){
    cout<<"Nome: "<< getNome( ) << endl;
    cout<<"Codigo: "<< getCodigo( ) << endl;
    cout<<"Preco: R$"<< fixed << setprecision(2) << getPreco( ) << endl;
}

void Cervejaria :: ImprimeData( ){
    time_t t;
	struct tm * infoTempo;

	time(&t);
	infoTempo = localtime(&t);

	cout << "A data de hoje: "
	<< infoTempo -> tm_mday << "/"
    << "0" << ++(infoTempo -> tm_mon) << "/"
	<< 1900 + (infoTempo -> tm_year) << endl;
}
