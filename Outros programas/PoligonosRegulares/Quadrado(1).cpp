#include "Quadrado.h"

Quadrado::Quadrado(int valor){
	nro_de_lados = 4;
	medida_lado = valor;
}
	  
float Quadrado::calculaArea(){
	return medida_lado*medida_lado;
}


