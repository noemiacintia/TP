/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 4 - LVP 08 */

// para garantir que o arquivo não seja inicializado várias vezes
#ifndef RELOGIO_H
// definindo o arquivo que tô usando
#define RELOGIO_H

// criando a classe Relogio
class Relogio
{
    // definindo atributos
    int minutos;
    int segundos;
    int hora;
public:
    // definindo métodos públicos
    Relogio(); // criando o construtor padrão para inicializar os atributos
    void setHora(int, int, int);
    int getSegundos();
    int getMinutos();
    int getHora();
    void horarioAvancando();
};

#endif // RELOGIO_H
