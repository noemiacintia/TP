#include "..\BibPrototipo\Administrador.h"

Administrador::Administrador(string nome, long int CPF, Endereco endereco_auxi, Data data_auxi, int numeroSecao, float salarioBase, 
					float INSS, float ajudasDeCusto):Empregado(nome, CPF, endereco_auxi, data_auxi, numeroSecao, salarioBase, INSS){
    this -> ajudasDeCusto = ajudasDeCusto;
}

void Administrador::setAjuda(float ajudasDeCusto){
    this->ajudasDeCusto = ajudasDeCusto;
}

float Administrador::calculaSalario()const{
    return Empregado::calculaSalario() + ajudasDeCusto;
}

float Administrador::getAjuda()const{
    return ajudasDeCusto;
}
void Administrador::imprime() const{
    Empregado::imprime();
    cout << "Salario com Acréscimo: " << calculaSalario() <<endl;
}     