/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 5 - LVP 10 */

#include <cmath>
#include <iomanip>
// incluindo os arquivos que definimos no prot�tipo da classe
#include "Estacionamento.h"
// no ava n�o precisa dessa linha 10
#include "Tempo.h"

// construtor para inicializar os atributos da classe.
Estacionamento::Estacionamento()
{
    placa="";
    modelo="";
    horaEntrada.setHorario(0, 0, 0);
    horaSaida.setHorario(0, 0, 0);
}

/* m�todo para atribuir ao atributo da classe a placa
do carro inserida pelo us�rio */
void Estacionamento::setPlaca(string placa)
{
    this->placa=placa;
}

/* m�todo para atribuir ao atributo da classe o modelo
do carro inserido pelo us�rio */
void Estacionamento::setModelo(string modelo)
{
    this->modelo=modelo;
}

// m�todo para exibir a placa do carro
string Estacionamento::getPlaca()
{
    return placa;
}

// m�todo para exibir o modelo do carro
string Estacionamento::getModelo()
{
    return modelo;
}

/* m�todo que passa o hor�rio de entrada inserido pelo usu�rio
como par�metro para o m�todo setHorario da classe Tempo no
objeto horaEntrada */
void Estacionamento::horarioEntrada(int hora, int minuto, int segundo)
{
    horaEntrada.setHorario(hora, minuto, segundo);
}

/* m�todo que passa o hor�rio de sa�da inserido pelo usu�rio
como par�metro para o m�todo setHorario da classe Tempo no
objeto horaSaida */
void Estacionamento::horarioSaida(int hora, int minuto, int segundo)
{
    horaSaida.setHorario(hora, minuto, segundo);
}

// m�todo para calcular o tempo que o carro ficou estacionado
int Estacionamento::calculaHora()
{
    // criei vari�veis para n�o ficar o return visivelmente feio
    int entrada = horaEntrada.totalSegundos();
    int saida = horaSaida.totalSegundos();
    /* foat para que o c�lculo seja feito corretamente (pegar o
    valor real e n�o s� a parte inteira, j� que estamos trabalhando
    com inteiros) e o ceil para arredondar esse valor pra cima */
    return ceil((float)(saida-entrada)/3600);
}

// m�todo para calcular o valor a ser pago em fun��o da hora estacionada
float Estacionamento::valorEstacionamento()
{
    return 1.5*calculaHora();
}

// m�todo para impress�o de dados como a quest�o pede
void Estacionamento::imprimeDados()
{
    cout << fixed << setprecision(2);
    cout << endl << "Placa: " << placa << endl
         << "Modelo: " << modelo << endl
         << "Horas ocupadas: " << calculaHora() << "h" << endl
         << "Valor a ser pago: " << valorEstacionamento() << "R$" << endl;
}
