#ifndef INGRESSOVIP_H //Classe derivada da classe base Ingresso.
#define INGRESSOVIP_H

class IngressoVip: public Ingresso{
	private:
		float valorAdicional;
    public:
    	IngressoVip(float=0,float=0);
    	void setValorAdicional(float);
    	float getValorAdicional()const;
    	float valorIngressoVip() const;
    	void imprime()const;
};

#endif