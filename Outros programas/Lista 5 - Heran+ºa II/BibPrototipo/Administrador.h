#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

class Administrador : public Empregado{
	private:
		float ajudasDeCusto;
	public:
		Administrador(string, long int, Endereco, Data, int, float,  float, float);
		void setAjuda(float);
		float calculaSalario()const;
		float getAjuda()const;
		void imprime() const;
};

#endif
