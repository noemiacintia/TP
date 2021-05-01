#ifndef OPERARIO_H
#define OPERARIO_H

class Operario: public Empregado {
	private:
		float valorProducao; // valor por artigo produzido
		float comissao; //porcentagem 
	
	public:
		Operario (string, long int, Endereco, Data, int, float, float, float, float);
		void set_valorP(float);
		void set_valorC(float);
		float get_valorP()const;
		float get_valorC()const;
		float calculaSalario() const;
		void imprime()const;	
};

#endif
