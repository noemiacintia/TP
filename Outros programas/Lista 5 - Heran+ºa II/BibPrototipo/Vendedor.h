#ifndef VENDEDOR_H
#define VENDEDOR_H

class Vendedor : public Empregado {
private:
	float valorVendas, comissao;
public:
	Vendedor (string, long int, Endereco, Data, int, float, float, float, float);
	float getValorVendas() const;
	float getComissao() const;
	void setValorVendas(float);
	void setComissao(float);
	float calculaSalario() const;
	void imprime() const;
};

#endif /* VENDEDOR_H_ */
