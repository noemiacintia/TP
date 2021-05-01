#ifndef CLIENTE_H
#define CLIENTE_H

class Cliente : public Pessoa{
	private:
		float plafond, valorEmDivida;
	public:
		Cliente(string, long int, Endereco, Data, float, float);
		void set_plafond(float);
		void set_valorEmDivida(float);
		float get_plafond() const;
		float get_valorEmDivida() const;
		float obterSaldo() const;
		void imprime() const;
};

#endif
