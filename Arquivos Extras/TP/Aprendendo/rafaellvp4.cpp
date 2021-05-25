/*Defina uma classe em C++ para representar uma pessoa.
Uma pessoa, no nosso caso, possui os seguintes atributos:

·   Nome, Idade, Altura, Peso e Sexo.

A classe deve possuir métodos para modificar e acessar
cada um dos atributos, um método para calcular o IMC
(Índice de Massa Corpórea), um método que forneça o
nome da pessoa e um método que retorne a sua categoria
de acordo com o IMC. O IMC é obtido através da divisão
 do peso pela altura ao quadrado e é interpretado da
 seguinte forma:

·   IMC <= 18,5:  Abaixo do peso normal

·   18,5 < IMC <= 25:  Peso Normal

·   25 < IMC <= 30: Acima do peso normal.

·   IMC > 30: Obesidade

Escreva uma aplicação para utilizar os métodos descritos
na classe. */
#include <iostream>
#include <string>

using namespace std;

class Pessoa{
	string nome;
    string sexo;
    int idade;
    float altura;
    float peso;
    float IMC;

  public:
    void setNome(string);
    void setIdade(int);
    void setAltura(float);
    void setPeso(float);
    void setSexo(string);
    float calculaIMC();
    float getIMC();
    string obtemSituacao();
    string getNome();
};
    void Pessoa::setNome(string name){
        nome = name;
    }
    string Pessoa::getNome(){
      return nome;
    }
    void Pessoa::setIdade(int Idade){
        idade = Idade;
    }
    void Pessoa::setAltura(float Altura){
        altura = Altura;
    }
    void Pessoa::setPeso(float Peso){
        peso = Peso;
    }
    void Pessoa::setSexo(string Sexo){
        sexo = Sexo;
    }

    float Pessoa::calculaIMC(){
        IMC = peso/(altura * altura);
        return IMC;
    }
    string Pessoa::obtemSituacao(){
        if (IMC<=18.5)
            return "Abaixo do peso normal";
        else if (IMC<=25)
            return "Peso Normal";
        else if (IMC <=30)
            return "Acima do peso normal.";
        else
            return "Obesidade";
    }

int main(){
    Pessoa pessoa1;

	string name, Sexo;
    int Idade;
    float Altura, Peso;

	cout<<"Digite o nome da pessoa: ";
	cin>>name;
	cout<<"Digite a idade da pessoa: ";
	cin>>Idade;
	cout<<"Digite a altura da pessoa: ";
	cin>>Altura;
    cout<<"Digite o peso da pessoa: ";
	cin>>Peso;
	cout<<"Digite o sexo da pessoa: ";
	cin>>Sexo;

	pessoa1.setNome(name);
    pessoa1.setIdade(Idade);
    pessoa1.setAltura(Altura);
    pessoa1.setPeso(Peso);
    pessoa1.setSexo(Sexo);
    pessoa1.calculaIMC();
	cout<< "De acordo com o peso " << pessoa1.getNome()<<" esta "<<pessoa1.obtemSituacao()<<endl;
	cout << pessoa1.calculaIMC();

	return 0;

}
