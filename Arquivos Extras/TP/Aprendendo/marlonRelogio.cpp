#include <iostream>
#include <locale>

class Relogio
{
    int hora;
    int minuto;
    int segundo;

public:
    void setHora(int, int, int);
    void avancar();
    int getSegundo();
    int getMinuto();
    int getHora();

};

void Relogio::setHora(int hrs, int minut, int seg)
{
    hora=hrs;
    minuto=minut;
    segundo=seg;
}

int Relogio::getHora()
{
    return hora;
}
int Relogio::getMinuto()
{
    return minuto;
}
int Relogio::getSegundo()
{
    return segundo;
}

void Relogio::avancar()
{
    segundo=segundo+1;
    if(segundo>=60)
    {
        segundo=segundo-60;
        minuto=minuto+1;
    }

    if(minuto>=60)
    {
        minuto=minuto-60;
        hora=hora+1;
    }

    if(hora>=24)
    {
        hora=hora-24;
    }
}

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
    Relogio r1;
    int hrs, minut, seg;
    cout<<"Informe as hora, os minutos e os segundos: "<<endl;
    cin >> hrs >> minut >> seg;
    r1.setHora(hrs,minut,seg);
    r1.avancar();
    r1.avancar();
    r1.avancar();
    cout<<"Horário avançado: " <<r1.getHora()<<"h " <<r1.getMinuto()<<"min " <<r1.getSegundo()<<"s";
    return 0;
}
