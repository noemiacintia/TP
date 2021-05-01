#ifndef Empregado_H
#define Empregado_H

class Empregado: public Pessoa
{
	private:
		int numeroSecao;
		float salarioBase;
		float INSS;
	public:
		Empregado();
		Empregado(string, long int, Endereco, Data, int, float, float);

		void setNumeroSecao(int);
		int getNumeroSecao() const;

		void setSalarioBase(float);
		float getSalarioBase() const;

		void setINSS(float);
		float getINSS() const;

		float calculaSalario() const;

		void imprime() const;
};
#endif


