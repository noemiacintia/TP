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

    tam1=num1.size();
    tam2=num2.size();

    // trocando os valores dos vectores
    // num1.swap(num2);

    for(i=0; i<tam1; i++)
    {
        cout << num1[i] << " ";
    }

    cout << endl;

    for(i=0; i<tam2; i++)
    {
        cout << num2[i] << " ";
    }
    return 0;
}
