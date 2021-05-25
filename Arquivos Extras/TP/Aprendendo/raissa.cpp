#include "raissa.h"

Fracao::Fracao(){ // costrutor para instanciacao dos atributos

    numerador = 1;
    denominador = 1;
    escolha = 0;
}


//Agora cada metodo deve ser implementado
//metodos set

void Fracao::setDenominad(int denominador){
  this->denominador=denominador;
}
void Fracao::setNumerad(int numerador){
  this->numerador=numerador;
}
void Fracao::setEscolh(int escolha){
  this->escolha=escolha;
}
//metodos get
int Fracao::getNumerador(){
  return numerador;
}
int Fracao::getEscolha(){
  return escolha;
}
//metodo para calcular a multiplicacao de fracoes
void Fracao::multiplicacao(Fracao fracao1, Fracao fracao2){
  int numerador1 = fracao1.numerador*fracao2.numerador;
  this->numerador = numerador1;
  int denominador1 = fracao1.denominador*fracao2.denominador;
  this->denominador = denominador1;

}//metodo para calcular a divisao de fracoes
void Fracao::Divisao(Fracao fracao1, Fracao fracao2){
  int numerador1 = fracao1.numerador*fracao2.denominador;
  this->numerador = numerador1;
  int denominador1 = fracao1.denominador*fracao2.numerador;
  this->denominador = denominador1;
}
//Desenvolvimento do metodo para imprimir a fracao resultante
int Fracao::getDenominador(){//o metodo imprime, de acordo com a escolha de operacao feita, a respectiva fracao
  return denominador;
}
//Desenvolvimento do metodo para imprimir a fracao resultante em ponto flutuante limitado a 4 casas decimais
float Fracao::Pontoflutuante(){
    return float(numerador)/float(denominador);
}
