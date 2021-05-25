/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 5 - LVP 10 */

#include <cmath>
#include <iomanip>
// incluindo os arquivos que definimos no protótipo da classe
#include "Estacionamento.h"
// no ava não precisa dessa linha 10
#include "Tempo.h"

// construtor para inicializar os atributos da classe.
Estacionamento::Estacionamento()
{
    placa="";
    modelo="";
    horaEntrada.setHorario(0, 0, 0);
    horaSaida.setHorario(0, 0, 0);
}

/* método para atribuir ao atributo da classe a placa
do carro inserida pelo usário */
void Estacionamento::setPlaca(string placa)
{
    this->placa=placa;
}

/* método para atribuir ao atributo da classe o modelo
do carro inserido pelo usário */
void Estacionamento::setModelo(string modelo)
{
    this->modelo=modelo;
}

// método para exibir a placa do carro
string Estacionamento::getPlaca()
{
    return placa;
}

// método para exibir o modelo do carro
string Estacionamento::getModelo()
{
    return modelo;
}

/* método que passa o horário de entrada inserido pelo usuário
como parâmetro para o método setHorario da classe Tempo no
objeto horaEntrada */
void Estacionamento::horarioEntrada(int hora, int minuto, int segundo)
{
    horaEntrada.setHorario(hora, minuto, segundo);
}

/* método que passa o horário de saída inserido pelo usuário
como parâmetro para o método setHorario da classe Tempo no
objeto horaSaida */
void Estacionamento::horarioSaida(int hora, int minuto, int segundo)
{
    horaSaida.setHorario(hora, minuto, segundo);
}

// método para calcular o tempo que o carro ficou estacionado
int Estacionamento::calculaHora()
{
    // criei variáveis para não ficar o return visivelmente feio
    int entrada = horaEntrada.totalSegundos();
    int saida = horaSaida.totalSegundos();
    /* foat para que o cálculo seja feito corretamente (pegar o
    valor real e não só a parte inteira, já que estamos trabalhando
    com inteiros) e o ceil para arredondar esse valor pra cima */
    return ceil((float)(saida-entrada)/3600);
}

// método para calcular o valor a ser pago em função da hora estacionada
float Estacionamento::valorEstacionamento()
{
    return 1.5*calculaHora();
}

// método para impressão de dados como a questão pede
void Estacionamento::imprimeDados()
{
    cout << fixed << setprecision(2);
    cout << endl << "Placa: " << placa << endl
         << "Modelo: " << modelo << endl
         << "Horas ocupadas: " << calculaHora() << "h" << endl
         << "Valor a ser pago: " << valorEstacionamento() << "R$" << endl;
}
