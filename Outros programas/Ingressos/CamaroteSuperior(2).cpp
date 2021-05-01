#include "CamaroteSuperior.h" //Implementação da classe derivada ingresso vip.

CamaroteSuperior::CamaroteSuperior(float valor, float valorAdicional, float valorMax):IngressoVip(valor,valorAdicional){
	setValorMax(valorMax);
}
void CamaroteSuperior::setValorMax(float valorMax){
	this-> valorMax=valorMax;
}
float CamaroteSuperior::getValorMax()const{
	return valorMax;
}
float CamaroteSuperior::valorSuperior()const{
	return valorIngressoVip()+valorMax;
}
void CamaroteSuperior::imprime()const{
	cout<<"O ingresso é vip, camarote superior. "<<endl;
	cout<<"Custa: "<<valorSuperior()<<endl;
}