#include <iostream>
using namespace std;

// ocupa menos espaço que as structs
union uniao
{
    int inteiro0;
    char caractere0;
};

union estrutura01
{
    int inteiro1;
    char caractere1;
    float decimal1;
};

struct estrutura02
{
    int inteiro2;
    char caractere2;
    float decimal2;
};

int main()
{
    cout << "Uniao: " << sizeof(union estrutura01) << endl;
    cout << "Struct: " << sizeof(struct estrutura02);
    return 0;
}
