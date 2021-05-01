#ifndef INGRESSONORMAL_H
#define INGRESSONORMAL_H  //Classe derivada da classe base.

class IngressoNormal:public Ingresso{
	public:
		IngressoNormal(float=0);
		void imprime()const;
};

#endif