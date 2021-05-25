#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

#include "raissa.cpp"

int main() {
  Fracao fracao1, fracao2, fr;
  double aux, aux2;
  int escolha;
  setlocale(LC_ALL, "Portuguese");
  //apresentacao ao usuario sobre a finalidade do programa
  cout<<"Este programa tem como finalidade calcular e apresentar resultados das operacoes de multilicacao e divisao com fracoes."<<endl<<"Voce deseja fazer uma multiplicacao (aperte 1) ou uma divisao (aperte 2)?"<<endl;
  cin>>escolha;
  fr.setEscolh(escolha);//pegando o valor que representa qual a oprecao que deseja ser feita
  //pwgando os valores do denominador e numerador
  cout<<"Informe o numerador da fração 1"<<endl;
  cin>>aux;
  fracao1.setNumerad(aux);
  cout<<"Informe o denominador da fração 1"<<endl;
  cin>>aux;
  fracao1.setDenominad(aux);
  cout<<"Informe o numerador da fração 2"<<endl;
  cin>>aux2;
  fracao2.setNumerad(aux2);
  cout<<"Informe o denominador da fração 2"<<endl;
  cin>>aux2;
  fracao2.setDenominad(aux2);
  //chamando os metodos atraves da escolha do usuario
  if (escolha == 1){
    fr.multiplicacao(fracao1, fracao2);
    cout<<"O resultado da sua multiplicação em forma de fracao é: "<<fr.getNumerador()<<"/"<<fr.getDenominador()<<endl;
    cout << fixed << setprecision(4);
    cout << fr.Pontoflutuante();
  }
  if (escolha == 2){
    fr.Divisao(fracao1, fracao2);
    cout<<"O resultado da sua divisao em forma de fracao é: "<<fr.getNumerador()<<"/"<<fr.getDenominador()<<endl;
    cout << fixed << setprecision(4);
    cout << fr.Pontoflutuante();
  }
return 0;
}
