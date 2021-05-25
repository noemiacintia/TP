#include <iostream>
#include <locale>

using namespace std;

class Retangulo
{
    int pix, piy, psx, psy;
    bool checar(int,int,int,int);
public:
    int setValores(int, int, int, int);
    int comprimento();
    int largura();
    int perimetro();
    int area();
    bool ehquadrado();
};
int Retangulo::setValores(int x1, int x2, int y1, int y2)
{
    if(checar(x1, y1, x2, y2))
    {
        pix = x1;
        piy = y1;
        psx = x2;
        psy = y2;
    }
    else
    {
        pix = 0;
        piy = 0;
        psx = 0;
        psy = 0;
    }
}

bool Retangulo::checar(int x1, int x2, int y1, int y2)
{
    if(x1>0 && x1<15)
    {
        if(y1>0 && y1<15)
        {
            if(x2>0 && x2<15)
            {
                if(y2>0 && y2<15)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
int Retangulo::comprimento()
{
    return psx-pix;
}

int Retangulo::largura()
{
    return psy-piy;
}

int Retangulo::perimetro()
{
    int larg=largura();
    int comp=comprimento();
    return (2*larg)+(2*comp);
}

int Retangulo::area()
{
    int larg=largura();
    int comp=comprimento();
    return comp*larg;
}

bool Retangulo::ehquadrado()
{
    int larg=largura();
    int comp=comprimento();
    if(larg==0 && comp==0)
    {
        return false;
    }
    else
    {
        return larg==comp;
    }
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int x1, x2, y1, y2;
    Retangulo r1;
    cin >> x1 >> x2;
    cin >> y1 >> y2;
    r1.setValores(x1, y1, x2, y2);
    cout << "Area = " << r1.area() << endl
         << "Perimetro = " << r1.perimetro() << endl
         << "Largura = " << r1.largura() << endl
         << "Comprimento = " << r1.comprimento() << endl;
    if(r1.ehquadrado())
    {
        cout <<"� um quadrado!" << endl;
    }
    else
    {
        cout << "" << endl;
    }
    return 0;
}
