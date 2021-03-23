#include <iostream>
#include "Triangulo.cpp"
#include "Ponto.cpp"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    float ax, ay, bx, by, cx, cy;
    cout<<"Insira as coordenadas dos vértices A, B e C: "<<endl<<"Ax: ";
    cin>>ax;
    cout<<"Ay: ";
    cin>>ay;
    cout<<"Bx: ";
    cin>>bx;
    cout<<"By: ";
    cin>>by;
    cout<<"Cx: ";
    cin>>cx;
    cout<<"Cy: ";
    cin>>cy;
    Triangulo T(ax, ay, bx, by, cx, cy);
    T.getCoordenadas();
    cout<<"Perímetro: "<<T.calcPerimetro()<<endl;

    return 0;
}
