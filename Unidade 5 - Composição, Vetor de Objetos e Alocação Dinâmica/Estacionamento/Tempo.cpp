/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 5 - LVP 10 */

// incluindo o arquivo que definimos o prot�tipo da classe
#include "Tempo.h"

// construtor para inicializar os atributos da classe
Tempo::Tempo()
{
    hora=0;
    minuto=0;
    segundo=0;
}

/* m�todo para atribuir aos atributos da classe o horario
inserido pelo us�rio que � passado pelo m�todo horarioEntrada
e horarioSaida */
void Tempo::setHorario(int hora, int minuto, int segundo)
{
    this->hora=hora;
    this->minuto=minuto;
    this->segundo=segundo;
}

// m�todo para transformar em segundos o horario de entrada e saida
int Tempo::totalSegundos()
{
    return (hora*3600)+(minuto*60)+segundo;
}
