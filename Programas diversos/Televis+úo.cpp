//Este programa é uma televisao e o usuario pode mudar o canal para uma unidade a mais ou a menos.
// Também pode aumentar ou diminuir o volume ou mudar para qualquer canal.*/
#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;

class Tv{
  private:
    int canal;
    int volume_do_som;
    int maior_canal;
    int maior_volume;
     
  public:
    Tv(int, int);
    void somacanais();        //aumenta canal de um
    void diminuircanais();    //diminui canal de um
    void aumentarvolume();    //aumenta volume de um
    void diminuirvolume();    //diminui volume de um
    void escolherCanal(int);       //escolhe canal
    int getCanal();
    int getVolume_do_som();
};
//inicializando o construtor
Tv::Tv(int maior_canal, int maior_volume){
  canal=7; //valor default (escolhido pelo fabricante)
  volume_do_som=10; //valor default (escolhido pelo fabricante)
  this->maior_canal= maior_canal; //this indica que o atributo pertence à Classe
  this->maior_volume= maior_volume;
}

int Tv::getCanal(){
  return canal;
}
int Tv::getVolume_do_som(){
  return volume_do_som;
}

//metodo para aumentar 1 unidade no canal da telelevisao.
void Tv::somacanais(){
    if(canal <maior_canal){
      canal++;   // ==> canal = canal + 1
    }
}
//metodo para diminuir 1 unidade no canal da televisao.
void Tv::diminuircanais(){
    if (canal>1)
        canal--;   // ==> canal = canal -1
}
//metodo para aumentar o volume do som em 1 unidade.
void Tv::aumentarvolume(){
    if (volume_do_som < maior_volume)
    	volume_do_som++;
     //quando tem um único comando dentro de outro comando, não precisa das chaves '{' '}'
}
//metodo para diminuir o volume do som em 1 unidade.
void Tv::diminuirvolume(){
    if (volume_do_som>1)
     volume_do_som--;
}
//método para escolher o canal
void Tv::escolherCanal(int canal){
	if (canal>=1 && canal<=maior_canal	)
      this->canal = canal;   //this indica que canal é o atributo do objeto ativo
}


int main(){
  setlocale(LC_ALL,"");	
  Tv televisao(50,100);  //parâmetros do maior canal e maior volume passados 
                         //durante a criação do objeto
  int opcao, canalSelecionado;
  //criando o menu para selecionar a opcao do usuario
  do {
    cout << "OLÁ, BEM-VINDO AO PAINEL DE CONTROLE DA SUA TELEVISÃO" <<endl;
    cout<<"O canal atual é "<<televisao.getCanal()<<endl;
    cout<<"O volume atual é "<<televisao.getVolume_do_som()<<endl<<endl;
    
	cout<<"==========MENU============"<<endl;
    cout<<"1 - aumentar em 1 o seu canal atual"<<endl;
    cout<<"2 - diminuir em 1 o seu canal atual"<<endl;
    cout<<"3 - aumentar o volume do som"<<endl;
    cout<<"4 - diminuir o volume do som"<<endl;
    cout<<"5 - trocar para qualquer canal"<<endl;
    cout<<"6 - desligar a televisao"<<endl;
    cout<<"digite sua opcao: "<<endl;
    cin>>opcao;

    switch ( opcao ){
      case 1:
      	  televisao.somacanais();
      	  break;
      case 2:
		  televisao.diminuircanais();
      	  break;
      case 3:
      	  televisao.aumentarvolume();
      	  break;
      case 4:
      	  televisao.diminuirvolume();
      	  break;
      case 5:
      	  cout<<"voce quer mudar pra qual canal? ";
      	  cin>>canalSelecionado;
      	  televisao.escolherCanal(canalSelecionado);
      	  break;
      case 6:
      	  cout<<"sua televisao foi desligada."<<endl;
      	  break;
    }
    system("cls");  //limpa a tela - incluir a bibliote <
  } while (opcao!=6);

  return 0;
}