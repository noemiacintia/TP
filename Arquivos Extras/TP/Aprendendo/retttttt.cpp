#include <iostream>
#include <locale>

using namespace std;

class Retangulo
{
    int pix, piy, psx, psy;
public:
    void setValores(int, int, int, int);
    int comprimento();
    int largura();
    int perimetro();
    int area();
    bool ehquadrado();
};

    /*
     *   (x1, y2)            (x2, y2)
     *      @-------------------@
     *      :                   :
     *      :                   :
     *      :                   :
     *      @-------------------@
     *   (x1, y1)            (x2, y1)
     */

void Retangulo::setValores (int x1, int x2, int y1, int y2)
{
    pix=x1;
    piy=y1;
    psx=x2;
    psy=y2;
}

int Retangulo::comprimento()
{
    int comprimento = 0;
    if (pix>piy && pix>psx && pix>psy)
    {
        comprimento = pix;
    }
    else if(piy>pix && piy>psx && piy>psy)
    {
        comprimento = piy;
    }
    else if(psx>pix && psx>piy && psx>psy)
    {
        comprimento = psx;
    }
    else if(psy>pix && psy>piy && psy>psx)
    {
        comprimento = psy;
    }
}

int Retangulo::area()
{
    int largura1 = largura();
    return largura1*(psy - piy);
}

int Retangulo::largura()
{
    return psx - pix;
}

int Retangulo::perimetro()
{
    int largura1 = largura();
    int altura = psy - piy;
    return (2 * largura1) + (2 * altura);
}

bool Retangulo::ehquadrado()
{
    int largura1 = largura();
    int altura = psy - piy;
    return largura1 == altura;
}
int main ( )
{
    setlocale(LC_ALL,"Portuguese");
    int x1, x2, y1, y2;
    Retangulo r1;
    cin >> x1 >> y1 >> x2 >> y2;
    r1.setValores (x1, y1, x2, y2);
    cout << "     Area = " << r1.area() << endl
         << "Perimetro = " << r1.perimetro() << endl
         << "  Largura = " << r1.largura() << endl
         << "  Quadrdo = " << r1.ehquadrado() << endl
         << " Comprimento = " << r1.comprimento() << endl;
    return 0;
}

