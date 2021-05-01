#include "IngressoNormal.h" 


IngressoNormal::IngressoNormal(float valor):Ingresso(valor){
	
}
void IngressoNormal::imprime()const{
	Ingresso::imprime();
	cout<<"Ingresso normal. "<<endl;
}