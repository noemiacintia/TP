#include "Cervejaria.h"

// Sobrecarregando o operador de saída << para que possa gravar um objeto inteiro em um arquivo.
ofstream& operator << (ofstream& arquivo, Cervejaria& c)
{
	arquivo << c.getNome( ) << endl;
	arquivo << c.getCodigo( ) << endl;
	arquivo << c.getPreco( ) << endl;

	return arquivo;
}

// Sobrecarregando o operador de entrada >> para que possa ler um objeto inteiro de um arquivo.
ifstream& operator >> (ifstream& arquivo, Cervejaria& c)
{
	string nome, codigo;
	float preco;
	int quantidade;

	getline(arquivo, nome);
	c.setNome(nome);
	getline(arquivo, codigo);
	c.setCodigo(codigo);
	arquivo >> preco;
	c.setPreco(preco);

	return arquivo;
}

