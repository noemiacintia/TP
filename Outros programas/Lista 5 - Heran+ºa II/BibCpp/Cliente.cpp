#include "..\BibPrototipo\Cliente.h"

Cliente::Cliente(string nome, long int CPF, Endereco endereco_auxi, Data data_auxi, float plafond, float valorEmDivida):Pessoa(nome,CPF,endereco_auxi,data_auxi){
    this -> plafond = plafond;
    this -> valorEmDivida = valorEmDivida;
}

void Cliente::set_plafond(float plafond){
    this -> plafond = plafond;
}

void Cliente::set_valorEmDivida(float valorEmDidida){
    this -> valorEmDivida = valorEmDivida;
}

float Cliente::get_plafond()const{
    return plafond;
}

float Cliente::get_valorEmDivida()const{
    return valorEmDivida;
}

float Cliente::obterSaldo()const{
    return plafond - valorEmDivida;
}

void Cliente::imprime()const{
    Pessoa::imprime();
    cout << "Valor do Plafond: " << plafond << endl;
    cout << "Valor da Divida: " << valorEmDivida << endl;
    cout << "Saldo: " << obterSaldo() << endl;
}
