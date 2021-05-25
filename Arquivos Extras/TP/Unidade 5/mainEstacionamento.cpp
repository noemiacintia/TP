/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
Unidade 5 - LVP 10:

Crie uma classe Estacionamento para armazenar dados
de um estacionamento. Os atributos devem representar
a placa e modelo do carro, além da hora de entrada e
saída do estacionamento. Utilize dois objetos da
classe Tempo (como especificado abaixo) para esses
horários. Crie métodos da classe Estacionamento para:

• funcionar como get e set da placa e do modelo;
• inicializar os dados com vazio ou zero;
• armazenar os dados da hora de entrada;
• armazenar os dados da hora de saída;
• imprimir os dados de um carro estacionado;
• calcular e retornar o valor a ser pago pelo carro
estacionado. Considere o preço de R$1,50 por hora.

Crie um objeto do tipo Estacionamento. Forneça os valores
(através de comandos de leitura) da placa, do modelo, e
dos horários de entrada e saída do carro. Em seguida
imprima os dados do carro (placa e modelo), quantas horas
o carro ficou no estacionamento e o valor a ser pago.

class Estacionamento {  // protótipo da classe Estacionamento
            string placa;
            string modelo;
            Tempo horaEntrada;
            Tempo horaSaida;
   public:
            Estacionamento();
            void setPlaca(string);
            void setModelo(string);
            string getPlaca();
            string getModelo();
            //informa a hora que o veículo entrou
            void horarioEntrada(int,int,int);
            //informa a hora que o veículo saiu
            void horarioSaida(int,int,int);
            //calcula o total de horas no estacionamento (*).
            int calculaHora();
            //calcula o valor a ser pago em função da quantidade de horas
            float valorEstacionamento();
            // Imprime dados de um carro estacionado
            void imprimeDados();
};

(*) Se houver frações de hora, o cálculo deve arredondar para cima.
A função ceil( ) faz essa conversão. Tem que usar a biblioteca <cmath>.

Class Tempo {  //protótipo da classe Tempo
            int hora, minuto, segundo;
    public:
            Tempo();
            void setHorario(int, int, int);
            //converte a hora, minuto e segundos em segundos
            int totalSegundos();
}
(*) A função totalSegundos deve converter, seja o horário de entrada
ou de saída, em segundos. Por exemplo se o objeto tiver armazenado
hora=10, minuto=20 e segundo=30, o resultado do
cálculo será 10*3600+20*60+30. */

#include <iostream>
#include <locale>

using namespace std;

#include "Estacionamento.cpp"
#include "Tempo.cpp"

int main()
{
    // para traduzir os cout's pro português
    setlocale(LC_ALL, "Portuguese");
    cout << "Este programa realiza o controle de um estacionamento "
         << endl << "informando o valor a pagar em função do tempo "
         << "que o carro ficou estacionado." << endl << endl;
    // definindo o objeto da classe
    Estacionamento carro;
    // variáveis para guardar informações que o usuário digitar
    string placa1, modelo1;
    int horaentrada, minutoentrada, segundoentrada;
    int horasaida, minutosaida, segundosaida;
    cout << "Insira a placa e o modelo do carro: ";
    cin >> placa1;
    cin >> modelo1;
    carro.setPlaca(placa1);
    carro.setModelo(modelo1);
    cout << "Insira o horário de entrada e de saída do carro "
         << "no formato 00 00 00: ";
    cin >> horaentrada >> minutoentrada >> segundoentrada;
    cin >> horasaida >> minutosaida >> segundosaida;
    // atribuindo aos métodos da classe Estacionamento
    carro.horarioEntrada(horaentrada, minutoentrada, segundoentrada);
    carro.horarioSaida(horasaida, minutosaida, segundosaida);
    // imprimindo os dados de acordo com a questão
    carro.imprimeDados();
    return 0;
}
