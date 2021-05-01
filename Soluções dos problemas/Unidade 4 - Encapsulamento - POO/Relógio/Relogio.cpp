/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 4 - LVP 08 */

// incluindo o arquivo que definimos o prot�tipo da classe
#include "Relogio.h"

// m�todo do construtor sem par�metros para inicializar os atributos da classe.
Relogio::Relogio()
{
    hora = 0;
    minutos = 0;
    segundos = 0;
}

// m�todo para atribuir aos atributos da classe os valores inseridos pelo usu�rio
void Relogio::setHora(int hora, int minuto, int segundo)
{
    this->hora = hora;
    this->minutos = minuto;
    this->segundos = segundo;
}

// m�todo para retornar os segundos calculados
int Relogio::getSegundos()
{
    return segundos;
}

// m�todo para retornar os minutos calculados
int Relogio::getMinutos()
{
    return minutos;
}

// m�todo para retornar a hora calculada
int Relogio::getHora()
{
    return hora;
}

// m�todo para calcular a hora avan�ando
void Relogio::horarioAvancando()
{
    segundos+=1;
    if(segundos>=60)
    {
        segundos-=60;
        minutos+=1;
    }

    if(minutos>=60)
    {
        minutos-=60;
        hora+=1;
    }

    if(hora>=24)
        hora-=24;
}
