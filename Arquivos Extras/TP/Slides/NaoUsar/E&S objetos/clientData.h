#include <string>
using namespace std;
class ClientData
{
public:
// construtor ClientData padr�o
    ClientData( int = 0, string = "", string = "", double = 0.0 );
// fun��es de acesso para accountNumber
    void setAccountNumber( int );
    int getAccountNumber() const;
// fun��es de acesso para lastName
    void setLastName
    ( string );
    string getLastName() const;
// fun��es de acesso para firstName
    void setFirstName
    ( string );
    string getFirstName() const;
// fun��es de acesso para balance
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
