#include <string>
// inclui a biblioteca pra poder ter acesso as funções
#include <fstream>
#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std ;
//Declara classe Data
class Data
{
    int x;
    int y;
public :
//construtor
    Data():x(0),y(0){};
//sobrecarga operadores << e >> como funções friend.
//observe que Data é declarado como referencia
    friend istream & operator >> (istream &, Data &);
    friend ostream & operator << (ostream &, Data &);
//observe que Data é declarado como ponteiro
    friend ifstream & operator >> (ifstream &, Data *&);
    friend ofstream & operator << (ofstream &, Data *&);
};
//int Data::nobj=0;
int main ()
{
//Solicita o nome do arquivo de disco
    cout << " Nome do Arquivo : ";
    string nome_arquivo;
    getline(cin, nome_arquivo);
//Abre arquivo de disco para escrita
    ofstream fout (nome_arquivo . c_str () );
//Verifica se o arquivo foi aberto
    if (!fout)
    {
        cout << "\n\ nErro na Abertura de arquivo ";
        exit (1) ;
    }
//Cria vetor para objetos do tipo Data
    vector <Data> d;
//Cria objeto e ponteiro para objeto
    Data obj ;
    Data * pobj ;
    pobj = & obj ;
//Lê objeto e armazena em obj
    cout << " Entre com os valores de x e y de cada objeto . "
         << " Para encerrar ctrl +d" << endl;
    while(cin >> obj )
    {
//armazena dados do objeto no arquivo de disco
        fout << pobj ;
//mostra dados do objeto lido na tela
        cout << " Objeto =" << obj ;
//armazena objeto no vetor
        d. push_back (obj);
    };
//reseta o stream cin, deixando ok para próxima leitura
    cin.clear ();
//fecha o arquivo de disco
    fout.close () ;
//mostra todos os objetos lidos
    cout <<"\ nMostrando objetos do vetor d \a" << endl;
    for (int i = 0 ; i < d. size () ; i ++)
        cout << d[i] << endl ;
//abre arquivo de disco para leitura
    cout <<" Vai ler os objetos do disco " << endl;
    ifstream fin (nome_arquivo . c_str () );
//testa se ok
    if(!fin)
    {
        cout << "\n\ nErro na Abertura de arquivo ";
        exit (1);
    }
//cria um segundo vetor
    vector <Data> d2 ;
//enquanto não chegar ao fim do arquivo, lê dados do objeto e armazena em obj
    while( fin >> pobj )
    {
        cout << obj;
        d2 . push_back (obj);
    };
    fin.close();
//mostra todos os objetos lidos
    cout <<"\ nMostrando objetos do vetor d2 \a" << endl;
    for (int i=0; i<d2.size(); i++)
        cout << d2 [i] << endl;
    cin.get();
    return 0;
}
istream & operator >> ( istream & in, Data & d)
{
    cout << "\ nx : " ;
    in >> d.x;
    cout << "\ ny : " ;
    in >> d.y;
    in.get(); //retorno de carro
    return in;
}
ostream & operator << (ostream& out, Data& d)
{
    out << "(x = " << d.x;
    out << " ,y = " << d.y << ")" << endl;
    return out;
}
ifstream & operator >> ( ifstream & in, Data *& d)
{
    in.read (reinterpret_cast <char*> (d), sizeof(Data)) ;
    //in.read ((char*)d , sizeof(Data));
    return in ;
}
ofstream & operator << (ofstream & out, Data *& d)
{
    out.write ( reinterpret_cast <const char*> (d), sizeof(Data));
// out.write( (char*) d, sizeof(Data));
    return out ;
}

