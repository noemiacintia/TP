//>Discente: GUILHERME SANTOS DA SILVEIRA
//>Matrícula: 118210-896
//>Período: 2020.1
//>Curso: Engenharia Elétrica
//>Disciplina: Técnicas de Programação
//>Professor: Marcus Salerno
//>Unidade 4: Lab 9
//>Descrição do programa: PROGRAMA UTILIZADO PARA FAZER CALCULOS SEGUINDO A LEI
//LEI DE OHM.


#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

class CalculaOHM
{
	private:

	float R1, E1, I1;

public:

	CalculaOHM();
	float RetornaR(float);
	float RetornaI(float);
	float CalculaE();
	float CalculaPD();



	};

//---------------------------------------------------------------------------//

CalculaOHM::CalculaOHM(){

	R1 = 0;
	E1 = 0;
	I1 = 0;		//construtor por padrão
}

//---------------------------------------------------------------------------//

float CalculaOHM::RetornaR(float R){

R1 = R ;	//Guardando o valor de R

return R1;

}
//---------------------------------------------------------------------------//

float CalculaOHM::RetornaI(float I){

I1 = I;						//Guardando o valor de I

return I1;

}

//---------------------------------------------------------------------------//

float CalculaOHM::CalculaE(){

float E;

E = I1*R1;

E = CalculaE();							//Calculando o valor de E

return E;

}
//---------------------------------------------------------------------------//

float CalculaOHM::CalculaPD(){

float P;

P = I1*CalculaE();						//Calcula a Potencia Dissipada
P = CalculaPD();

return P;

};

//---------------------------------------------------------------------------//



int main(void){

CalculaOHM OHM[4];

	float R[5],I[5];

	cout<<"Bem-vindo a calculadora de Lei de OHM, por favor digite os dados abaixo"<<
	endl;


	cout<<"Por favor digite as resistencias"<<endl;
	for (int n=0;n<5;n++){
	cin>>R;
	//cout<<"Por favor digire a corrente"<<endl;
	cin>>I;
	OHM[n].RetornaR(R);
	OHM[n].RetornaI(I);
	cout<<n<<":"<<endl;
	cout<<"Voltagem"<<":"<<endl;
	cout<<OHM[n].CalculaE()<<endl;
	cout<<"Potência"<<":"<<endl;
	cout<<OHM[n].CalculaPD()<<endl;
}
	}

return 0;
}
