/*
Escreva uma classe chamada "MatrizDeInteiros" que tenha como atributo uma matriz 
de inteiros e um construtor que receba como parâmetro a ordem da matriz, a instancie 
e inicialize com zeros. Acrescente à classe os seguintes métodos:
- um método que receba como parâmetro três números inteiros indicando respectivamente 
linha, coluna e o valor que deve ser armazenado na linha e coluna indicada. Obs: Caso a 
linha ou a coluna, passadas como parâmetro, estejam fora da ordem da matriz retorne false 
para indicar que não foi possível inserir o elemento na matriz.
- um método "ehQuadrada", que retorna true se a matriz for quadrada (isto é, tem o mesmo 
número de linhas e colunas). Retorna false caso contrário.
- um método Total que some todos os valores da matriz retornando o resultado.
- um método que receba como parâmetro um determinado valor e retorne a linha onde o 
elemento foi encontrado na matriz ou -1 caso contrário.
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
	
	VetorDeInteiros vet(tamanho);  //criação do objeto
	
	for (i=0;i<tamanho;i++){  //leitura dos valores do vetor
		cout<<"digite o valor "<< i <<": ";
		cin>>valor;
		cout<<"Armazenou? "<<vet.armazenaValor(i,valor)<<endl; //1-SIM 0-Não armazenou
	}

	vet.escreveVetor();
	
	cout<<"A soma dos elementos do vetor é: "<<vet.total()<<endl;
	cout<<"O elemento "<<5<<" está na linha "<<vet.retornaPosicao(5)<<" (se -1 o elemento não está na matriz)"<<endl;
	return 0;
}