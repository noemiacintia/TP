#ifndef POLIGONOREGULAR_H
#define POLIGONOREGULAR_H

class PoligonoRegular{
	protected: //poderia ser private, mas precisa implementar os m�todos get()
		int nro_de_lados;
		int medida_lado;
	public:
		PoligonoRegular();
		float perimetro();
};

#endif
