#include <iostream>

using namespace std;

class Retangulo {
public:
    int x1;
    int x2;
    int y1;
    int y2;

    Retangulo() {
        this->x1 = 0;
        this->x2 = 0;
        this->y1 = 0;
        this->y2 = 0;
    }

    Retangulo(int x1, int x2, int y1, int y2) {
        this->x1 = x1;
        this->x2 = x2;
        this->y1 = y1;
        this->y2 = y2;
    }

    /*
     *   (x1, y2)            (x2, y2)
     *      @-------------------@
     *      :                   :
     *      :                   :
     *      :                   :
     *      @-------------------@
     *   (x1, y1)            (x2, y1)
     */

    int calcularArea() {
        int largura = calcularLargura();
        return largura * (y2 - y1);
    }

    int calcularLargura() {
        return x2 - x1;
    }

    int calcularPerimetro() {
        int largura = calcularLargura();
        int altura = y2 - y1;
        return (2 * largura) + (2 * altura);
    }

    bool eQuadrado() {
        int largura = calcularLargura();
        int altura = y2 - y1;
        return largura == altura;
    }
};

int main() {
    Retangulo retangulo = Retangulo(0, 11, 0, 10);

    cout << "     Area = " << retangulo.calcularArea() << "\n"
         << "Perimetro = " << retangulo.calcularPerimetro() << "\n"
         << "  Largura = " << retangulo.calcularLargura() << "\n"
         << "  Quadrdo = " << retangulo.eQuadrado() << "\n";

    return 0;
}
