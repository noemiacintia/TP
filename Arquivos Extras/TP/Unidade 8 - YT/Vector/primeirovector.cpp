#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> num1;
    vector<int> num2;
    int tam1,tam2,i;

    num1.push_back(1);
    num1.push_back(2);
    num1.push_back(3);
    num1.push_back(4);
    num1.push_back(5);

    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);
    num2.push_back(9);
    num2.push_back(10);

    // inserindo no in�cio:
    // num1.insert(num1.begin(), 888);
    // inserindo na 2� posi��o:
    // num1.insert(num1.begin()+1, 888);
    // inserir no final do vector:
    //num1.insert(num1.end()-1,888);
    // inserindo na �ltima posi��o:
    // num1.insert(num1.end(),888);
    //inserindo na pen�ltima posi��o:
    num1.insert(num1.end()-1,888);
    //remover elementos da posi��o -1:
    num1.erase(num1.end()-2);

    //num1.swap(num2);
    tam1=num1.size();
    tam2=num2.size();

    cout << "Primeiro valor de num1: " << num1.front() << endl;
    cout << "Ultimo valor de num1..: " << num1.back() << endl;
    cout << "Valor do meio.........: " << num1.at(tam1/2) << endl;

    cout << "Tamanho do vector num1: " << tam1 << endl;

    for(i=0; i<tam1; i++)
    {
        cout << num1[i] << " ";
    }
    cout << endl;
    for(i=0; i<tam2; i++)
    {
        cout << num2[i] << " ";
    }

    // enquanto num n�o estiver vazio
    while(!num1.empty())
    {
        // retirar o �ltimo elemento
        num1.pop_back();
    }

    // limpa tudo
    num2.clear();

    cout << "\nNovo tamanho de num1: " << num1.size();

    return 0;

}
