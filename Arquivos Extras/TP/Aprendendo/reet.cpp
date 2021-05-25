#include <iostream>
using namespace std;

class Retangulo
{
    int pix, piy, psx, psy;
    bool checar(int,int,int,int);
public:
    void setValores(int, int, int, int);
    int comprimento();
    int largura();
    int perimetro();
    int area();
    bool ehquadrado();
};

void Retangulo::setValores(int x1, int x2, int y1, int y2)
{
    pix=x1;
    piy=y1;
    psx=x2;
    psy=y2;
}

int area() {
        int larguraa = largura();
        return larguraa*(psy - piy);
    }

    int larguraa() {
        return psx - pix;
    }

    int perimetro() {
        int larguraa = largura();
        int altura = y2 - y1;
        return (2 * larguraa) + (2 * altura);
    }

    bool ehquadrado() {
        int larguraa = largura();
        int altura = psy - piy;
        return largura == altura;
    }

int main()
{
    int x1, y1, x2, y2;
    Retangulo ret;
    cin >> x1 >> y1 >> x2 >> y2;
    ret.setValores(x1, y1, x2, y2);
    return 0;
}
