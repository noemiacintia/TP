#include "CamaroteInferior.h" //Implementa��o da classe derivada.

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
	cout<<"A localiza��o do seu ingresso �: "<<getLocalizacao()<<endl;
	cout<<"O valor do ingresso �: "<<valorIngressoVip()<<endl; //m�todo da classe IngressoVip
}