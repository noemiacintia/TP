/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 5 - LVP 10 */

// para garantir que o arquivo n�o seja inicializado v�rias vezes
#ifndef TEMPO_H
// definindo o arquivo que t� usando
#define TEMPO_H

// criando a classe Tempo
class Tempo //prot�tipo da classe Tempo
{
    // definindo atributos
    int hora, minuto, segundo;
public:
    // definindo m�todos p�blicos
    Tempo(); // criando o construtor padr�o
    void setHorario(int, int, int);
    int totalSegundos(); //converte a hora, minuto e segundos em segundos
};
#endif // TEMPO_H
