/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674

UNIDADE 2
LVP 04: Defina uma classe em C++ para representar uma pessoa.
Uma pessoa, no nosso caso, possui os seguintes atributos:

� Nome, Idade, Altura, Peso e Sexo.
A classe deve possuir m�todos para modificar e acessar
cada um dos atributos, um m�todo para calcular o IMC
(�ndice de Massa Corp�rea), um m�todo que forne�a o nome
da pessoa e um m�todo que retorne a sua categoria de acordo
com o IMC. O IMC � obtido atrav�s da divis�o do peso pela
altura ao quadrado e � interpretado da seguinte forma:
�   IMC <= 18,5:  Abaixo do peso normal
�   18,5 < IMC <= 25:  Peso Normal
�   25 < IMC <= 30: Acima do peso normal.
�   IMC > 30: Obesidade
Escreva uma aplica��o para utilizar os m�todos descritos na classe. */

#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

class Pessoa
{
    string nome;
    string sexo;
    int idade;
    float peso;
    float altura;
    float IMC;
public:
    string getNome();
    string getSexo();
    int getIdade();
    float getPeso();
    float getAltura();
    void setNome(string);
    void setIdade(int);
    void setAltura(float);
    void setPeso(float);
    void setSexo(string);
    float calculando_imc();
    string categoria_imc();
};

void Pessoa::setNome(string nomeUsuario){
    nome=nomeUsuario;
}

void Pessoa::setIdade(int idadeUsuario){
    idade=idadeUsuario;
}

void Pessoa::setAltura(float alturaUsuario){
    altura=alturaUsuario;
}

void Pessoa::setPeso(float pesoUsuario){
    peso=pesoUsuario;
}

void Pessoa::setSexo(string sexoUsuario){
    sexo=sexoUsuario;
}

// m�todos para exibir os atributos da classe
string Pessoa::getNome(){
    return nome;
}

int Pessoa::getIdade(){
    return idade;
}

float Pessoa::getAltura(){
    return altura;
}

float Pessoa::getPeso(){
    return peso;
}

string Pessoa::getSexo(){
    return sexo;
}

// m�todo para calcular o imc
float Pessoa::calculando_imc()
{
    IMC = peso/(pow(altura, 2));
    return IMC;
}

// m�todo para informar a categoria que o usuario se encontra referente ao imc
string Pessoa::categoria_imc()
{
    if(IMC<=18.5)
        return "Abaixo do peso normal";
    else if(IMC<=25)
        return "Peso normal";
    else if(IMC<=30)
        return "Acima do peso normal";
    else
        return "Obsesidade";
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    string nomeUsuario;
    string sexoUsuario;
    int idadeUsuario;
    float alturaUsuario;
    float pesoUsuario;
    Pessoa pessoa1;
    cin >> nomeUsuario;
    cin >> idadeUsuario;
    cin >> alturaUsuario;
    cin >> pesoUsuario;
    cin >> sexoUsuario;
    pessoa1.setNome(nomeUsuario);
    pessoa1.setIdade(idadeUsuario);
    pessoa1.setAltura(alturaUsuario);
    pessoa1.setPeso(pesoUsuario);
    pessoa1.setSexo(sexoUsuario);
    pessoa1.calculando_imc();
    cout << "De acordo com o peso " << pessoa1.getNome() << " esta "<< pessoa1.categoria_imc() << endl;
    return 0;
}
