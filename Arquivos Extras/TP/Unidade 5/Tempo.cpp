/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 5 - LVP 10 */

// incluindo o arquivo que definimos o protótipo da classe
#include "Tempo.h"

// construtor para inicializar os atributos da classe
Tempo::Tempo()
{
    hora=0;
    minuto=0;
    segundo=0;
}

/* método para atribuir aos atributos da classe o horario
inserido pelo usário que é passado pelo método horarioEntrada
e horarioSaida */
void Tempo::setHorario(int hora, int minuto, int segundo)
{
    this->hora=hora;
    this->minuto=minuto;
    this->segundo=segundo;
}

// método para transformar em segundos o horario de entrada e saida
int Tempo::totalSegundos()
{
    return (hora*3600)+(minuto*60)+segundo;
}
