#include "OrdemPagamento.h"

OrdemPagamento::OrdemPagamento(float valor){
	valorEnviado = valor;
}

float OrdemPagamento::calculeValorOrdem() const{
	return valorEnviado*taxaDeCambio;
}

 void OrdemPagamento::modifiqueTaxaDeCambio(float novoValor){
	taxaDeCambio = novoValor;
} 

float OrdemPagamento::taxaDeCambio = 5.65;