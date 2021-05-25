/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674

UNIDADE 2
LVP 04: Defina uma classe em C++ para representar uma pessoa.
Uma pessoa, no nosso caso, possui os seguintes atributos:

· Nome, Idade, Altura, Peso e Sexo.
A classe deve possuir métodos para modificar e acessar
cada um dos atributos, um método para calcular o IMC
(Índice de Massa Corpórea), um método que forneça o nome
da pessoa e um método que retorne a sua categoria de acordo
com o IMC. O IMC é obtido através da divisão do peso pela
altura ao quadrado e é interpretado da seguinte forma:
·   IMC <= 18,5:  Abaixo do peso normal
·   18,5 < IMC <= 25:  Peso Normal
·   25 < IMC <= 30: Acima do peso normal.
·   IMC > 30: Obesidade
Escreva uma aplicação para utilizar os métodos descritos na classe. */

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

// métodos para exibir os atributos da classe
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

// método para calcular o imc
float Pessoa::calculando_imc()
{
    IMC = peso/(pow(altura, 2));
    return IMC;
}

// método para informar a categoria que o usuario se encontra referente ao imc
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
