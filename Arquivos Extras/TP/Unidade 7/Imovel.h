/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674
   Unidade 7 - LVP 14 */

// para garantir que o arquivo n�o seja inicializado v�rias vezes
#ifndef IMOVEL_H
// definindo o arquivo que t� usando
#define IMOVEL_H

// criando a classe base Imovel
class Imovel{
// definindo atributos protected para as classes derivadas acessarem
protected:
    string nome; // endere�o
    string rua; // endere�o
    float preco;
public:
    // construtor para inicializar os atributos
    Imovel(string="", string="", float=0);
};
#endif // IMOVEL_H
