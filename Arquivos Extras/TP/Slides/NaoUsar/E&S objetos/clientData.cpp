#include <string>
using namespace std;
#include "ClientData.h"
// construtor ClientData padrão
ClientData::ClientData( int accountNumberValue, string lastNameValue, string
                        firstNameValue, double balanceValue)
{
    setAccountNumber( accountNumberValue );
    setLastName( lastNameValue );
    setFirstName( firstNameValue );
    setBalance( balanceValue );
}
// obtém o valor do número da conta
int ClientData::getAccountNumber() const
{
    return accountNumber;
}
// configura o valor do número da conta
void ClientData::setAccountNumber
( int accountNumberValue
)
{
    accountNumber
        = accountNumberValue; // deve validar
}
// obtém o valor do sobrenome
string ClientData::getLastName() const
{
    return lastName;
}
// configura o valor do sobrenome
void ClientData::setLastName
( string lastNameString
)
{
// copia no máximo 15 caracteres da string para lastName
    const char
    *lastNameValue
        = lastNameString.data();
    int length
        = lastNameString.size();
    length = ( length
               < 15
               ? length : 14 );
    strncpy
    ( lastName, lastNameValue, length );
    lastName
    [ length ] = '\0'; // acrescenta caractere nulo ao sobrenome
}
// obtém o valor do nome
string ClientData::getFirstName() const
{
    return firstName;
}
// configura o valor do nome
void ClientData::setFirstName( string firstNameString )
{
// copia no máximo 10 caracteres da string para firstName
    const char *firstNameValue = firstNameString.data();
    int length = firstNameString.size();
    length = ( length < 10 ? length : 9 );
    strncpy( firstName, firstNameValue, length );
    firstName[ length ] = '\0'; // acrescenta o caractere nulo a firstName
}
// obtém o valor do saldo
double ClientData::getBalance() const
{
    return balance;
}
// configura o valor do saldo
void ClientData::setBalance( double balanceValue )
{
    balance = balanceValue;
}
