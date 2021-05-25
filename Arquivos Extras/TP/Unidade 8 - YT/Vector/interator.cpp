#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<string>produtos={"mouse","teclado","monitor","gabinete","cx.som"};
    // criando um interator
    // vector<string>::iterator it;
    // retorna o primeiro elemento do vector
    // vector<string>::iterator it=produtos.begin();

    // imprimindo todos os elementos
    for(vector<string>::iterator it=produtos.begin(); it!=produtos.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
