#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// criando a classe Fracoes
class Fracao
{
    int numerador;
    int denominador;
public:
    Fracao();
    void setFracao(int, int);
    int getRacionalNum();
    int getRacionalDen();
    float getFlutuante();
    void multiplica(Fracao, Fracao);
    void divide(Fracao, Fracao);
};

Fracao::Fracao()
{
    numerador = denominador = 1;
}

void Fracao::setFracao(int num, int den)
{
    numerador = num;
    denominador = den;
}

void Fracao::multiplica(Fracao f1, Fracao f2)
{
    int num = f1.numerador * f2.numerador;
    int den = f1.denominador * f2.denominador;
    this-> numerador = num;
    this-> denominador = den;
}

void Fracao::divide(Fracao f1, Fracao f2)
{
    int num = f1.numerador * f2.denominador;
    int den = f1.denominador * f2.numerador;
    this-> numerador = num;
    this-> denominador = den;
}

int Fracao::getRacionalNum()
{
    return numerador;
}

int Fracao::getRacionalDen()
{
    return denominador;
}

float Fracao::getFlutuante()
{
    return double(getRacionalNum())/double(getRacionalDen());
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int opcao, numerador1, denominador1, numerador2, denominador2;
    Fracao f1, f2, fr;
    cout << "Insira a opção desejada: " << endl
         << "\t1 - Multiplicar" << endl << "\t2- Dividir" << endl;
    cin >> opcao;
    cin >> numerador1;
    cin >> denominador1;
    cin >> numerador2;
    cin >> denominador2;
    if(denominador1==0 || denominador2==0)
    {
        cin >> denominador1;
        cin >> denominador2;
    }
    f1.setFracao(numerador1, denominador1);
    f2.setFracao(numerador2, denominador2);

    if(opcao==1)
        fr.multiplica(f1, f2);
    else
        fr.divide(f1, f2);

    cout << fixed << setprecision(4);
    cout << "A multiplicação eh: " << endl
         << "Formato racional: " << fr.getRacionalNum()
         << "/" << fr.getRacionalDen() << endl
         << "Formato em ponto flutuante: " << fr.getFlutuante();
    return 0;
}
