#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<string>produtos={"mouse", "teclado", "monitor", "gabinete", "cx.som"};
    vector<string>::iterator it;
    // apontando para o início
    it=produtos.begin();
    // advance
    // next: avança p direita
    // prev: retorna p esquerda

    // avança um número x de elementos dentro da coleção
    advance(it, 3);
    cout << *it << endl;
    return 0;
}
