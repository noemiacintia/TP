#ifndef PESSOA_H
#define PESSOA_H

struct Endereco{
	string rua;
	int numero;
	string bairro;
	int CEP;
};

struct Data{
	int dia;
	int mes;
	int ano;
};

class Pessoa {
	string nome;
	long int CPF;
	Endereco ende;
	Data datanasc;
public:
	Pessoa();
	Pessoa(string, long int , Endereco , Data );
	void setNome(string);
	void setCPF(long int);
	void setEndereco(Endereco);
	void setDataNasc(Data);
	string getNome(void) const;
	long int getCPF(void)const;
	Endereco getEndereco(void)const;
	Data getDataNasc() const;
	void imprime()const;
};

#endif
