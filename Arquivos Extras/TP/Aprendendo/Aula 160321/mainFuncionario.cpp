#include <iostream>
#include <clocale>
using namespace std;

#include "Funcionario.cpp"

int main() {
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
    Funcionario func1;
    float ht, vh;
    cout<<"Digite valor da hora e a quantidade das horas trabalhadas "<<endl;
    cin>>vh>>ht;
    /* Atribui os valores para cada atributo */
    func1.setValorHora(vh);
    func1.setHorasTrab(ht);
    /* Calcula e escreve o salario do funcionario1 */    
    func1.calcSalario(); //sal�rio � calculado com valores do objeto
    cout<<endl<<"O salario do funcionario1 � "<<func1.getSalario()<<endl<<endl;
    return 0;
}
