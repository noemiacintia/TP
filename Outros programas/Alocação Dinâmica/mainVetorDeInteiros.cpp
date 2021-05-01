/*
Escreva uma classe chamada "MatrizDeInteiros" que tenha como atributo uma matriz 
de inteiros e um construtor que receba como par�metro a ordem da matriz, a instancie 
e inicialize com zeros. Acrescente � classe os seguintes m�todos:
- um m�todo que receba como par�metro tr�s n�meros inteiros indicando respectivamente 
linha, coluna e o valor que deve ser armazenado na linha e coluna indicada. Obs: Caso a 
linha ou a coluna, passadas como par�metro, estejam fora da ordem da matriz retorne false 
para indicar que n�o foi poss�vel inserir o elemento na matriz.
- um m�todo "ehQuadrada", que retorna true se a matriz for quadrada (isto �, tem o mesmo 
n�mero de linhas e colunas). Retorna false caso contr�rio.
- um m�todo Total que some todos os valores da matriz retornando o resultado.
- um m�todo que receba como par�metro um determinado valor e retorne a linha onde o 
elemento foi encontrado na matriz ou -1 caso contr�rio.
*/

#include <iostream>
#include <iomanip>
#include <clocale>

using namespace std;

#include "VetorDeInteiros.cpp"

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, tamanho, valor;
	cout<<"Digite o tamanho do vetor: ";
	cin>>tamanho;
	
	VetorDeInteiros vet(tamanho);  //cria��o do objeto
	
	for (i=0;i<tamanho;i++){  //leitura dos valores do vetor
		cout<<"digite o valor "<< i <<": ";
		cin>>valor;
		cout<<"Armazenou? "<<vet.armazenaValor(i,valor)<<endl; //1-SIM 0-N�o armazenou
	}

	vet.escreveVetor();
	
	cout<<"A soma dos elementos do vetor �: "<<vet.total()<<endl;
	cout<<"O elemento "<<5<<" est� na linha "<<vet.retornaPosicao(5)<<" (se -1 o elemento n�o est� na matriz)"<<endl;
	return 0;
}