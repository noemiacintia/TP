#include "Carro.h"

Carro::Carro(Pessoa p, string m, int af, string pl, float c){
	proprietario=p;
	marca=m;
	anoFab=af;
	placa=pl;
	tanque=0.0; 
	quilometragem=0;
	consumo=c; 
}
bool Carro::temAutonomia(int km){
	if (km/consumo<=tanque)  // return (km/consumo<=tanque)
		return true;
	return false;
}

void Carro::setProprietario(Pessoa p){
	proprietario = p;
}
void Carro::setMarca(string m){
	marca = m;
}
void Carro::setAnoFab(int af){
	anoFab = af;
}
void Carro::setPlaca(string pl){
	placa = pl;
}
Pessoa Carro::getProprietario(){
	return proprietario;
}
string Carro::getMarca(){
	return marca;
}
int Carro::getAnoFab(){
	return anoFab;
}
string Carro::getPlaca(){
	return placa;
}
//tem que fornecer a quantidade de litros
void Carro::abastece(int litros){
	tanque+= litros;
} 
//tem que fornecer quantos quilometros percorreu. Só atualiza a quilometragem
//do carro se tiver combustível suficiente
void Carro::percurso(int km){
	if (temAutonomia(km)){
		quilometragem += km;
		tanque -= km/consumo;
	}
} 
float Carro::getTanque(){
	return tanque;
}
int Carro::getQuilometragem(){
	return quilometragem;
}