/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 5 - LVP 10 */

// para garantir que o arquivo não seja inicializado várias vezes
#ifndef ESTACIONAMENTO_H
// definindo o arquivo que tô usando
#define ESTACIONAMENTO_H

// includindo a linha 11 e 12 neste arquivo para que possa rodar no ava
#include <iostream>
using namespace std;

// includindo a classe para criar os objetos horaEntrada e horaSaida
#include "Tempo.h"
// criando a classe Estacionamento
class Estacionamento // protótipo da classe Estacionamento
{
    // definindo atributos
    string placa;
    string modelo;
    Tempo horaEntrada;
    Tempo horaSaida;
public:
     // definindo métodos públicos
    Estacionamento(); // criando o construtor padrão
    void setPlaca(string);
    void setModelo(string);
    string getPlaca();
    string getModelo();
    void horarioEntrada(int,int,int); //informa a hora que o veículo entrou
    void horarioSaida(int,int,int);  //informa a hora que o veículo saiu
    int calculaHora(); //calcula o total de horas no estacionamento (*).
    float valorEstacionamento(); //calcula o valor a ser pago em função da
    //quantidade de horas
    void imprimeDados(); // Imprime dados de um carro estacionado

};
#endif // ESTACIONAMENTO_H
