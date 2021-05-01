#ifndef FORNECEDOR_H
#define FORNECEDOR_H

class Fornecedor: public Pessoa{
	private:
		float plafond;	// cr�dito m�ximo atribu�do pelo fornecedor
		float valorEmDivida;	// valor devido ao fornecedor
	public:
		Fornecedor(string, long int, Endereco, Data, float, float); // construtor default
		float obterSaldo() const;	// retorna a diferen�a entre o cr�dito m�ximo e o valor devido
		void set_plafond(float);	// modifica o valor do cr�dito m�ximo
		void set_valorEmDivida(float);	// modifica o valor da d�vida
		float get_plafond()const;	// retorna o valor do cr�dito
		float get_valorEmDivida()const;	// retorna o valor da d�vida
		void imprime()const;	// imprime os valores atribu�dos
		
};


#endif
