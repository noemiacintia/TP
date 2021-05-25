#ifndef FRACAO_H
#define FRACAO_H
class Fracao{
  private:
  ///escolhi usar um terceiro atributo "escolha" para o programa passar de forma direta qual a operãcão desejada
    int numerador, denominador, escolha;
  public:
    Fracao();//definicao public para o construtor
    void setDenominad(int);
    void setNumerad(int);
    void setEscolh(int);
    void multiplicacao(Fracao, Fracao);//metodo para multiplicar dois numeros do tipo fracao
    void Divisao(Fracao, Fracao);//metodo para dividir dois numeros do tipo fracao
    float Pontoflutuante();

  //metodos get (servem para atribuir valor a um atributo)
    int getNumerador();
    int getDenominador();
    int getEscolha();
};
#endif
