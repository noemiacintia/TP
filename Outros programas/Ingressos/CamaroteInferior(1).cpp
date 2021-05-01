#include "CamaroteInferior.h" //Implementação da classe derivada.

CamaroteInferior::CamaroteInferior(float valor, float valorAdicional, string localizacao):IngressoVip(valor,valorAdicional){
	setLocalizacao(localizacao);
}
void CamaroteInferior::setLocalizacao(string localizacao){
	this->localizacao=localizacao;
}
string CamaroteInferior::getLocalizacao()const{
	return localizacao;
}
void CamaroteInferior::imprime()const{
	IngressoVip::imprime();
	cout<<"A localização do seu ingresso é: "<<getLocalizacao()<<endl;
	cout<<"O valor do ingresso é: "<<valorIngressoVip()<<endl; //método da classe IngressoVip
}