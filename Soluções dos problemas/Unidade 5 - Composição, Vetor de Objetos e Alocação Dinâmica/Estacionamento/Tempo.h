/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 5 - LVP 10 */

// para garantir que o arquivo não seja inicializado várias vezes
#ifndef TEMPO_H
// definindo o arquivo que tô usando
#define TEMPO_H

// criando a classe Tempo
class Tempo //protótipo da classe Tempo
{
    // definindo atributos
    int hora, minuto, segundo;
public:
    // definindo métodos públicos
    Tempo(); // criando o construtor padrão
    void setHorario(int, int, int);
    int totalSegundos(); //converte a hora, minuto e segundos em segundos
};
#endif // TEMPO_H
