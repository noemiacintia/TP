#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

#include "Imovel.cpp"

int main()
{
    // para traduzir os cout's pro português
    setlocale(LC_ALL, "Portuguese");
    string rua, bairro;
    float preco;
    cout << "Rua: ";
    cin >> rua;
    cout << "Bairro: ";
    cin >> bairro;
    cout << "Preço";
    cin >> preco;
    Imovel im1(rua, bairro, preco);
    im1.imprime();
    return 0
}
