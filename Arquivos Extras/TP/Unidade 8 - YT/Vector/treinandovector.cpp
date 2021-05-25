#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> num; // num1(5) - vector com tamanho
    int tam, i;

    // insere no final do vector
    num.push_back(10); // valor que eu quero inserir no vector
    num.push_back(2);
    num.push_back(5);
    num.push_back(9);
    // não pode: num[4]=3 pois não existe a pos 4
    num[3]=3;

    tam=num.size(); // retorna o tamanho do vector

    cout << "Tamanho do vector: " << tam << endl;

    // imprimindo quais são os elementos

    // i<num.size()
    for(i=0; i<tam; i++){
        cout << num[i] << " ";
    }

    return 0;
}
