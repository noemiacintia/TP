//Classe Pacote: peso x preço por quilo
#include "Pacote.h"

Pacote::Pacote(float peso, float precoQuilo){
	setPeso(peso);
	setPrecoQuilo(precoQuilo);
}
void Pacote::setPeso(float peso){
	this->peso = peso>0?peso:0;
}
float Pacote::getPeso() const{
	return peso;
}
void Pacote::setPrecoQuilo(float precoQuilo){
	this->precoQuilo = precoQuilo>0?precoQuilo:0;
}
float Pacote::getPrecoQuilo() const{
	return precoQuilo;
}
float Pacote::calculaValor() const{
	return peso*precoQuilo;
}
void Pacote::imprimeValor() const{
	cout<<"O valor do Pacote é: "<<calculaValor()<<endl<<endl;;
}