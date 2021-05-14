#include "CervejaUnd.h"

// Sobrecarregando o operador de saída << para que possa gravar um objeto inteiro em um arquivo.
friend istream& operator >> (istream& arquivo, CervejaUnd& c)
{
	arquivo >> c.qntUnidade;
	return arquivo;
}

// Sobrecarregando o operador de entrada >> para que possa ler um objeto inteiro de um arquivo.
friend ostream& operator << (ostream& arquivo, const CervejaUnd& c)
{
    arquivo.qntUnidade;
	return arquivo;
}
