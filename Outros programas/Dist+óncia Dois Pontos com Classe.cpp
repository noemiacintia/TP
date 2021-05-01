#include <iostream>
#include <string>
#include <locale>
#include <cmath>
#include<iomanip>
using namespace std;

//Criando Classes
class Ponto{
    int x;
    int y;
  public:
  	Ponto();
	Ponto(int, int);
  	void setx(int);
  	void sety(int);
  	int getx();
  	int gety();
  	float distancia(Ponto);
};

Ponto::Ponto(){
	x = y = 0;
}

Ponto::Ponto(int px, int py){
	x= px;
	y= py;
}

void Ponto::setx(int px){
	x = px;
}

void Ponto::sety(int py){
	y = py;
}

int Ponto::getx(){
	return x;
}

int Ponto::gety(){
	return y;
}

// A distancia vai ser calculada a partir do objeto (ponto) que ativar este método.
float Ponto::distancia(Ponto p){
	return sqrt( pow(p.getx()- getx(), 2) + pow(p.gety()-gety(), 2)); 
}

int main (){
    setlocale(LC_ALL,"");

    //Declarando dois pontos do tipo Ponto
    Ponto ponto1(3,3);
    Ponto ponto2;
    int coordx, coordy;

    cout << endl << "O programa calcula a distânica entre dois pontos " << endl <<endl ;
    
    cout << "Coordenadas do Ponto 1: ";
    cout << ponto1.getx() << "," << ponto1.gety();

    cout << endl << "Informe as coordenadas do Ponto 2:"<< endl<< "Posição em x = ";
    cin  >> coordx;
    cout << "Posição em y = ";
    cin  >> coordy;
	ponto2.setx(coordx);
	ponto2.sety(coordy);

    //Exibindo resultado do cálculo da distancia entre dois pontos com duas casas decimais
    cout<< endl<<"A distância entre dois pontos é :"<<fixed<<setprecision(2)
	    <<ponto1.distancia(ponto2)<< endl;
    return 0;
}
