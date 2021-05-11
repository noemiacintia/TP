#include "Estoque.h"
#include "Sobrecargas.h"

Estoque :: Estoque( ){
    Cervejaria c;
    ifstream arquivo;
    arquivo.open("EstoqueUnidade.txt");

    if(arquivo.is_open()) // Verificando se o arquivo foi aberto.
	{
		while(!arquivo.eof()) // Enquanto for diferente de eof(end of file) continue se repetindo.
		{
			arquivo.ignore(); // Ignorando o caractere de quebra de linha que est� no in�cio de cada objeto.
			arquivo >> c; // Utilizando a sobrecarga do operador >> para inicializar o objeto.
			CervejaUnidade.push_back(c); // Adicionando o objeto a lista.
		}
	}
	arquivo.close();

    //CervejaLitro
/*    ifstream arquivo;
    arquivo.open("EstoqueLitro.txt");

    if(arquivo.is_open()) // Verificando se o arquivo foi aberto.
	{
		while(!arquivo.eof()) // Enquanto for diferente de eof(end of file) continue se repetindo.
		{
			arquivo.ignore(); // Ignorando o caractere de quebra de linha que est� no in�cio de cada objeto.
			arquivo >> c; // Utilizando a sobrecarga do operador >> para inicializar o objeto.
			CervejaLitro.push_back(c); // Adicionando o objeto a lista.
		}
	}
	arquivo.close();*/

}

Estoque :: ~Estoque( ){
    SalvarUnd( );
}

bool Estoque :: PesquisarNomeUnd(string nome){
    int n = 0;
        for (int i=0; i<CervejaUnidade.size( ); i++){
            if(CervejaUnidade[i].getNome( ) == nome){
                CervejaUnidade[i].Imprime( );
                return true;
            }
            else
                n++;
        }
        if(n==CervejaUnidade.size( ))
            return false;
}

bool Estoque :: PesquisarCodigoUnd(string codigo){
    int c = 0;
        for (int i=0; i<CervejaUnidade.size( ); i++){
            if(CervejaUnidade[i].getNome( ) == codigo){
                CervejaUnidade[i].Imprime( );
                return true;
            }
            else
                c++;
        }
        if(c==CervejaUnidade.size( ))
            return false;
}

bool Estoque :: SalvarUnd( ){
    ofstream arquivo;
    arquivo.open("EstoqueUnidade.txt", ios::trunc);

    if(arquivo.is_open())
	{
		for(int i = 0; i < CervejaUnidade.size(); i++)
		{
			// Utilizando a sobrecarga do operador << para gravar o objeto no arquivo.
			arquivo << CervejaUnidade[i]; 
		}
		return true;	
	}
	else
		return false;
	
	arquivo.close();
}

bool Estoque :: InserirUnd(Cervejaria c_u){
    for(int i=0; i < CervejaUnidade.size(); i++)
	{
		// Verificando se j� n�o existe uma pessoa na lista com o mesmo CPF.
		if(CervejaUnidade[i].getCodigo() == c_u.getCodigo())
			return false;
	}
	
	CervejaUnidade.push_back(c_u);
	return true;
}

bool Estoque :: RetirarCodigoUnd(string codigo){
    int c = 0;
	for(int i = 0; i < CervejaUnidade.size(); i++)
	{
		if(CervejaUnidade[i].getCodigo() == codigo)
		{
			CervejaUnidade.erase(CervejaUnidade.begin() + i);
			return true;
		}
		else
			c++;
	}
	if(c == CervejaUnidade.size())
		return false;
}

bool Estoque :: EfetuarVendaUnd(string codigo, int quantidade){
    int c = 0;
	for(int i = 0; i < CervejaUnidade.size(); i++)
	{
		if(CervejaUnidade[i].getCodigo() == codigo)
		{
			CervejaUnidade.erase(CervejaUnidade.begin() + i);
            quantidade --;
			return true;
		}
		else
			c++;
	}
	if(c == CervejaUnidade.size())
		return false;
}

void Estoque :: ImprimeUnd( ){
    for(int i= 0; i < CervejaUnidade.size(); i++)
	{
		cout << i+1 << "Dados da Cerveja: " << endl;
		CervejaUnidade[i].Imprime( );
		cout << endl;
	}
}

void Estoque :: ImprimeNomeOrdenadoUnd( ){
    vector<string> aux(CervejaUnidade.size());// Criando um vector auxiliar para armazenar todos os nomes da lista
	
    for(int i = 0; i < CervejaUnidade.size(); i++)
	{
		aux[i] = CervejaUnidade[i].getNome();
	}
	
	sort(aux.begin(), aux.end()); // Ordenado a lista auxiliar de nomes em ordem alfab�tica.
	
	// For�ando a impress�o dos objetos na mesma ordem dos nomes do vector auxiliar.
	int contador = 1;

	for(int k = 0; k < aux.size(); k++)
	{
		for(int i = 0; i < CervejaUnidade.size(); i++)
		{
			if(aux[k] == CervejaUnidade[i].getNome())
			{
				cout << contador << "Dados da Cerveja: " << endl;
				CervejaUnidade[i].Imprime( );
				cout << endl;
				contador++;
			}
		}
	}
}

void Estoque :: ImprimeQntOrdenadoUnd( ){
    vector<string> aux(CervejaUnidade.size());// Criando um vector auxiliar para armazenar todos os nomes da lista
	
    for(int i = 0; i < CervejaUnidade.size(); i++)
	{
		aux[i] = CervejaUnidade[i].getQntUnidade();
	}
	
	sort(aux.begin(), aux.end()); // Ordenado a lista auxiliar de nomes em ordem alfab�tica.
	
	// For�ando a impress�o dos objetos na mesma ordem dos nomes do vector auxiliar.
	int contador = 1;

	for(int k = 0; k < aux.size(); k++)
	{
		for(int i = 0; i < CervejaUnidade.size(); i++)
		{
			if(aux[k] == CervejaUnidade[i].getQntUnidade())
			{
				cout << contador << "Dados da Cerveja: " << endl;
				CervejaUnidade[i].Imprime( );
				cout << endl;
				contador++;
			}
		}
	}
}
