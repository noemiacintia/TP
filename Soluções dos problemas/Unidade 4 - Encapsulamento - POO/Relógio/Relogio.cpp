/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 4 - LVP 08 */

// incluindo o arquivo que definimos o protótipo da classe
#include "Relogio.h"

// método do construtor sem parâmetros para inicializar os atributos da classe.
Relogio::Relogio()
{
    hora = 0;
    minutos = 0;
    segundos = 0;
}

// método para atribuir aos atributos da classe os valores inseridos pelo usuário
void Relogio::setHora(int hora, int minuto, int segundo)
{
    this->hora = hora;
    this->minutos = minuto;
    this->segundos = segundo;
}

// método para retornar os segundos calculados
int Relogio::getSegundos()
{
    return segundos;
}

// método para retornar os minutos calculados
int Relogio::getMinutos()
{
    return minutos;
}

// método para retornar a hora calculada
int Relogio::getHora()
{
    return hora;
}

// método para calcular a hora avançando
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
