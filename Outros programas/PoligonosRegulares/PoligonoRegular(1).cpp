#include "PoligonoRegular.h"

PoligonoRegular::PoligonoRegular(){
		nro_de_lados=0;
		medida_lado=0;

}

float PoligonoRegular::perimetro(){
	return nro_de_lados*medida_lado;
}