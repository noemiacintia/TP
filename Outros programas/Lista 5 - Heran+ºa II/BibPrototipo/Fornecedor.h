#ifndef FORNECEDOR_H
#define FORNECEDOR_H

class Fornecedor: public Pessoa{
	private:
		float plafond;	// crédito máximo atribuído pelo fornecedor
		float valorEmDivida;	// valor devido ao fornecedor
	public:
		Fornecedor(string, long int, Endereco, Data, float, float); // construtor default
		float obterSaldo() const;	// retorna a diferença entre o crédito máximo e o valor devido
		void set_plafond(float);	// modifica o valor do crédito máximo
		void set_valorEmDivida(float);	// modifica o valor da dívida
		float get_plafond()const;	// retorna o valor do crédito
		float get_valorEmDivida()const;	// retorna o valor da dívida
		void imprime()const;	// imprime os valores atribuídos
		
};


#endif
