#include "Hexagono.h"

Hexagono::Hexagono(int valor){
	nro_de_lados = 6;
	medida_lado = valor;
}
	  
float Hexagono::calculaArea(){
	return (3*medida_lado*sqrt(3))/2;
}
