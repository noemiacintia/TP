#include <string>
using namespace std;
class ClientData
{
public:
// construtor ClientData padrão
    ClientData( int = 0, string = "", string = "", double = 0.0 );
// funções de acesso para accountNumber
    void setAccountNumber( int );
    int getAccountNumber() const;
// funções de acesso para lastName
    void setLastName
    ( string );
    string getLastName() const;
// funções de acesso para firstName
    void setFirstName
    ( string );
    string getFirstName() const;
// funções de acesso para balance
    void setBalance
    ( double );
    double getBalance() const;
private:
    int accountNumber;
    char lastName
    [ 15 ];
    char firstName
    [ 10 ];
    double balance;
};
