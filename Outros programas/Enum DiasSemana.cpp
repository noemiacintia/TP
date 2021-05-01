#include <iostream>
using namespace std; 

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int Junho[5][7]={{1,2,3,4,5,6,7},
					{8,9,10,11,12,13,14},
					{15,16,17,18,19,20,21},
					{22,23,24,25,26,27,28},
					{29,30,31,0,0,0,0}};
	enum dias {Segunda, Terca, Quarta, Quinta, Sexta,
                       Sabado, Domingo}; 
	enum semana {semana01, semana02, semana03, semana04, semana05};
	cout<<"Sexta-feira da terceira semana de Junho eh dia " 
										<<Junho[semana03][Sexta]<<endl;
	return 0;									
										
}
