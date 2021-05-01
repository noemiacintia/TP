//Classe PacoteOvernight: resultado do item a somado a 
//uma taxa adicional multiplicada pelo peso do pacote
#include "PacoteOvernight.h"

PacoteOvernight::PacoteOvernight(float peso, float precoQuilo, float taxaAdicional):
	Pacote(peso, precoQuilo) {
	setTaxaAdicional(taxaAdicional);
}
void PacoteOvernight::setTaxaAdicional(float taxaAdicional){
	this->taxaAdicional=taxaAdicional>0?taxaAdicional:0;
}
float PacoteOvernight::getTaxaAdicional() const{
	return taxaAdicional;
}
float PacoteOvernight::calculaValor() const{
	return Pacote::calculaValor() + getTaxaAdicional()*Pacote::getPeso();
}
void PacoteOvernight::imprimeValor() const{
	cout<<"O valor do Pacote Overnight é: "<<calculaValor()<<endl<<endl;
}
