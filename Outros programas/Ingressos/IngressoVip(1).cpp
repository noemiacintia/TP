#include "IngressoVip.h"

IngressoVip::IngressoVip(float valor, float valorAdicional):Ingresso(valor){
	setValorAdicional(valorAdicional);
}
void IngressoVip::setValorAdicional(float valorAdicional){
	this->valorAdicional=valorAdicional;
}
float IngressoVip::getValorAdicional()const{
	return valorAdicional;
}
float IngressoVip::valorIngressoVip()const{
	return valor+valorAdicional;
}
void IngressoVip::imprime()const{
	cout<<"Ingresso tipo vip."<<endl;
}