#ifndef CAMAROTESUPERIOR_H  //Classe derivada de Ingresso vip.
#define CAMAROTESUPERIOR_H

class CamaroteSuperior: public IngressoVip{
	private:
		float valorMax;
    public:
    	CamaroteSuperior(float=0, float=0, float=0);
    	void setValorMax(float);
    	float getValorMax()const;
    	float valorSuperior()const;
    	void imprime()const;
};

#endif