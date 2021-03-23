/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 4 - LVP 08 */

// para garantir que o arquivo n�o seja inicializado v�rias vezes
#ifndef RELOGIO_H
// definindo o arquivo que t� usando
#define RELOGIO_H

// criando a classe Relogio
class Relogio
{
    // definindo atributos
    int minutos;
    int segundos;
    int hora;
public:
    // definindo m�todos p�blicos
    Relogio(); // criando o construtor padr�o para inicializar os atributos
    void setHora(int, int, int);
    int getSegundos();
    int getMinutos();
    int getHora();
    void horarioAvancando();
};

#endif // RELOGIO_H
