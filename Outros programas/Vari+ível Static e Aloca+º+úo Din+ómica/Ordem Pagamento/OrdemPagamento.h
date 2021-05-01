#ifndef ORDEMPAGAMENTO_H
#define ORDEMPAGAMENTO_H

class OrdemPagamento{
	static float taxaDeCambio;
	float valorEnviado;
	
	public:
		OrdemPagamento(float);
		float calculeValorOrdem() const;
		static void modifiqueTaxaDeCambio(float);
		static float getTaxaDeCambio();
};

#endif