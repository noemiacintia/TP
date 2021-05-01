//Classe PacoteDoisDias: resultado do cálculo anterior somado de uma taxa adicional;
#include "PacoteDoisDias.h"

PacoteDoisDias::PacoteDoisDias(float peso, float precoQuilo, float taxaAdicional):
	Pacote(peso, precoQuilo) {
	setTaxaAdicional(taxaAdicional);
}
void PacoteDoisDias::setTaxaAdicional(float taxaAdicional){
	this->taxaAdicional=taxaAdicional>0?taxaAdicional:0;
}
float PacoteDoisDias::getTaxaAdicional() const{
	return taxaAdicional;
}
float PacoteDoisDias::calculaValor() const{
	return Pacote::calculaValor() + getTaxaAdicional();
}
void PacoteDoisDias::imprimeValor() const{
	cout<<"O valor do Pacote de Dois Dias é: "<<calculaValor()<<endl<<endl;
}
