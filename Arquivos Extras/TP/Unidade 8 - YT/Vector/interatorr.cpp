#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<string>produtos={"mouse", "teclado", "monitor", "gabinete", "cx.som"};
    vector<string>::iterator it;
    // apontando para o in�cio
    it=produtos.begin();
    // advance
    // next: avan�a p direita
    // prev: retorna p esquerda

    // avan�a um n�mero x de elementos dentro da cole��o
    advance(it, 3);
    cout << *it << endl;
    return 0;
}
