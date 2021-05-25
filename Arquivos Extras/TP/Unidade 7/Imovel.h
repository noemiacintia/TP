/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674
   Unidade 7 - LVP 14 */

// para garantir que o arquivo não seja inicializado várias vezes
#ifndef IMOVEL_H
// definindo o arquivo que tô usando
#define IMOVEL_H

// criando a classe base Imovel
class Imovel{
// definindo atributos protected para as classes derivadas acessarem
protected:
    string nome; // endereço
    string rua; // endereço
    float preco;
public:
    // construtor para inicializar os atributos
    Imovel(string="", string="", float=0);
};
#endif // IMOVEL_H
