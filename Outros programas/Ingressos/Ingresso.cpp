#include "Ingresso.h"  //Incluindo o arquivo de cabecalho .h, para implementação da classe base.

Ingresso::Ingresso(float valor){ //Construtor parametrizado.
	setValor(valor);
}
void Ingresso::setValor(float valor){ 
	this->valor=valor;
}
float Ingresso::getValor()const{ //Const pois nao altera o objeto.
	return valor;
}
void Ingresso::imprime()const{ 
	cout<<"O ingresso custa: "<<getValor()<<endl;
}
