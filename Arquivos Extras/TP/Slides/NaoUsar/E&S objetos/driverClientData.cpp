#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
#include "ClientData.h" // Defini��o da classe ClientData
int main()
{
ofstream outCredit("credit.dat", ios::binary );
// fecha o programa se ofstream n�o p�de abrir o arquivo
if ( !outCredit )
{
cerr << "File could not be opened." << endl;
exit( 1 );
}
ClientData blankClient; // construtor zera, ou apaga, cada membro de dados
// gera a sa�da de 100 registros em branco no arquivo
for ( int i = 0; i < 100; i++ )
outCredit.write( reinterpret_cast< const char * >( &blankClient ),
sizeof(ClientData ));
return 0;
}
