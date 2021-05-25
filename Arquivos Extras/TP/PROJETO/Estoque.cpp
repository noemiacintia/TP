#include "Estoque.h"

Estoque :: Estoque( )
{
    CervejaUnd c;
    ifstream arquivo;
    arquivo.open("EstoqueUnidade.dat");

    if(arquivo.is_open())  // Verificando se o arquivo foi aberto.
    {

        while(!arquivo.eof())  // Enquanto for diferente de eof(end of file) continue se repetindo.
        {
            arquivo.ignore(); // Ignorando o caractere de quebra de linha que est� no in�cio de cada objeto.
            arquivo >> c; // Utilizando a sobrecarga do operador >> para inicializar o objeto.
            CervejaUnidade.push_back(c); // Adicionando o objeto a lista.
        }
    }
    arquivo.close();
}


Estoque :: ~Estoque( )
{
    SalvarUnd( );
}

bool Estoque :: PesquisarNomeUnd(string nome)
{
    unsigned n (0);
    for (unsigned i(0); i<CervejaUnidade.size( ); i++)
    {
        if(CervejaUnidade[i].getNome( ) == nome)
        {
            CervejaUnidade[i].Imprime( );
            return true;
        }
        else
        {
            n++;
        }
    }
    if(n == CervejaUnidade.size( ))
    {
        return false;
    }
}

bool Estoque :: PesquisarCodigoUnd(string codigo)
{
    unsigned c(0);
    for (unsigned i(0); i<CervejaUnidade.size( ); i++)
    {
        if(CervejaUnidade[i].getCodigo( ) == codigo)
        {
            CervejaUnidade[i].Imprime( );
            return true;
        }
        else
        {
            c++;
        }
    }
    if(c==CervejaUnidade.size( ))
    {
        return false;
    }
}

bool Estoque :: SalvarUnd( )
{
    ofstream arquivo;
    arquivo.open("EstoqueUnidade.dat", ios::trunc);

    if(arquivo.is_open())
    {
        for(unsigned i(0); i < CervejaUnidade.size(); i++)
        {
            // Utilizando a sobrecarga do operador << para gravar o objeto no arquivo.
            arquivo << CervejaUnidade[i];
        }
        return true;
    }
    else
    {
        return false;
    }
    arquivo.close();
}

bool Estoque :: InserirUnd(CervejaUnd c_u)
{
    for(unsigned i(0); i < CervejaUnidade.size(); i++)
    {
        // Verificando se j� n�o existe uma pessoa na lista com o mesmo CPF.
        if(CervejaUnidade[i].getCodigo() == c_u.getCodigo())
        {
            return false;
        }
    }
    CervejaUnidade.push_back(c_u);
    return true;
}

bool Estoque :: RetirarCodigoUnd(string codigo)
{
    unsigned c(0);
    for(unsigned i(0); i < CervejaUnidade.size(); i++)
    {
        if(CervejaUnidade[i].getCodigo() == codigo)
        {
            CervejaUnidade.erase(CervejaUnidade.begin() + i);
            return true;
        }
        else
        {
            c++;
        }
    }
    if(c == CervejaUnidade.size())
    {
        return false;
    }
}

bool Estoque :: EfetuarVendaUnd(string codigo, int quantidade)
{
    unsigned c(0);
    for(unsigned i(0); i < CervejaUnidade.size(); i++)
    {
        if(CervejaUnidade[i].getCodigo() == codigo)
        {
            CervejaUnidade.erase(CervejaUnidade.begin() + i);
            quantidade --;
            return true;
        }
        else
        {
            c++;
        }
    }
    if(c == CervejaUnidade.size())
    {
        return false;
    }
}

void Estoque :: ImprimeUnd( )
{
    for(unsigned i(0); i < CervejaUnidade.size(); i++)
    {
        //cout << i+1 << "Dados da Cerveja: " << endl;
        CervejaUnidade[i].Imprime( );
        cout << endl;
    }
}

void Estoque :: ImprimeNomeOrdenadoUnd( )
{
    vector<string> aux(CervejaUnidade.size());// Criando um vector auxiliar para armazenar todos os nomes da lista

    for(unsigned i(0); i < CervejaUnidade.size(); i++)
    {
        aux[i] = CervejaUnidade[i].getNome();
    }

    sort(aux.begin(), aux.end()); // Ordenado a lista auxiliar de nomes em ordem alfab�tica.

    // For�ando a impress�o dos objetos na mesma ordem dos nomes do vector auxiliar.
    unsigned contador(1);

    for(unsigned k(0); k < aux.size(); k++)
    {
        for(unsigned i(0); i < CervejaUnidade.size(); i++)
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

void Estoque :: ImprimeQntOrdenadoUnd( )
{
    vector<int> aux(CervejaUnidade.size());// Criando um vector auxiliar para armazenar todos os nomes da lista

    for(unsigned i(0); i < CervejaUnidade.size(); i++)
    {
        aux[i] = CervejaUnidade[i].getQntUnidade();
    }

    sort(aux.begin(), aux.end()); // Ordenado a lista auxiliar de nomes em ordem alfab�tica.

    // For�ando a impress�o dos objetos na mesma ordem dos nomes do vector auxiliar.
    int contador = 1;
    for(unsigned k(0); k < aux.size(); k++)
    {
        for(unsigned i(0); i < CervejaUnidade.size(); i++)
        {
            if(aux[k] == CervejaUnidade[i].getQntUnidade())
            {
                CervejaUnidade[i].Imprime();
                cout << endl;
                contador++;
            }
        }
    }
}
