#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;

class Fracao{
  private:
    int numerador, denominador;
// crio os metodos
  public:

    Fracao(int, int, int, int);
    void setValores(int x1, int y1, int x2, int y2);
    void multiplica1();
    void multiplica2();
    void divide1();
    void divide2();
    void flutuantem();
    void flutuanted();
};
//inicializo o construtor
Fracao::Fracao(int pix, int piy, int psx, int psy){
  pix=0;
  piy=0;
  psx=0;
  psy=0;
  this->pix= pix;
  this->piy= piy;
  this->psx= psx;
  this->psy= psy;
}

void Fracao::setValores(int x1, int y1, int x2, int y2){
     pix = x1;
     piy = y1;
     psx = x2;
     psy = y2;
}
void Fracao::multiplica1(){
    f1.numerador*f2.numerador;
}
void Fracao::multiplica2(){
    return (piy*psy);
}
void Fracao::divide1(){
    return (pix*psy);
}
void Fracao::divide2(){
    return (piy*psx);
}
void Fracao::flutuanted(){
    return ((pix*psy)/(piy*psx));
}
void Fracao::flutuantem(){
    float(numerador);
}


int main(){
  setlocale(LC_ALL,"");
  Fracao f1, f2, fr;
  int x1,x2,y1,y2;
  int opcao;
  //crio o menu do elevador
  do {
    cout << "OLÁ, BEM-VINDO AO PAINEL DE CONTROLE DA SUA TELEVISÃO" <<endl;
    cout<<"ANDAR"<<Elevador.getAndar()<<endl;
    cout<<"ELEVADOR COM :"<<Elevador.getPessoas()<<endl<<endl;

	cout<<"==========MENU============"<<endl;
    cout<<"Para multiplicar tecle 1"<<endl;
    cout<<"Para dividir tecle 2"<<endl;
    cout<<"digite sua opcao: "<<endl;
    cin>>opcao;

    switch ( opcao ){
      case 1:
      	  cout<<"INFORME O x1,y1,x2,y1: ";
      	  cin>>x1, y1, x2, y2;
      	  if(y1==0 || y2==0)
            cin >> y1 >> y2;
      	  fr.setValores(x1,y1,x2,y2);
      	  fr.multiplica(f1, f2);
      	  cout<<"A divisao eh:";
          cout<<"Formato racional:" <<fr.multiplica1 << "/" << fr.multiplica2;
          cout<<"Formato em ponto flutuante:" << fr.flutuantem;
      	  break;
      case 2:
      	  cout<<"INFORME O x1,y1,x2,y1: ";
      	  cin>>x1, y1, x2, y2;
      	  f1.setValores(x1,y1,x2,y2);
      	  cout<<"A divisao eh:";
          cout<<"Formato racional:" <<fr.divide1 << "/" << fr.divide2;
          cout<<"Formato em ponto flutuante:" << fr.flutuanted;
      	  break;
    }
    system("cls");
  } while (opcao!=2);

  return 0;
}
