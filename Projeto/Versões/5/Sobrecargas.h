// Arquivo destinado as sobrecargas utilizadas no projeto.

#include "Cervejaria.h"
#include "CervejaLitro.h"
#include "CervejaUnd.h"


// Sobrecarregando o operador de sa�da << para que possa gravar um objeto inteiro em um arquivo.
ofstream& operator << (ofstream& arquivo, Cervejaria& c)
{
	arquivo << endl << c.nome << endl;
	arquivo << c.codigo << endl;
	arquivo << c.preco;
	
	return arquivo;
}

// Sobrecarregando o operador de entrada >> para que possa ler um objeto inteiro de um arquivo.
ifstream& operator >> (ifstream& arquivo, Cervejaria& c)
{
	string nome, codigo;
	float preco;
	
	getline(arquivo, nome);
	c.setNome(nome);
	getline(arquivo, codigo);
	c.setCodigo(codigo);
	arquivo >> preco;
	c.setPreco(preco);
	
	return arquivo;
}
