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
#include <iomanip>
#include <locale>
#include <cmath>

using namespace std;

// criando a classe Pessoa
class Pessoa
{
    // definindo atributos
    string nome;
    string sexo;
    int idade;
    float peso;
    float altura;
public:
    // definindo métodos públicos
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

/* método para atribuir ao atributo "nome", criado na classe Pessoa,
o nome inserido pelo usuário na main */
void Pessoa::setNome(string nomeUsuario)
{
    nome=nomeUsuario;
}

/* método para atribuir ao atributo "idade", criado na classe Pessoa,
a idade inserida pelo usuário na main */
void Pessoa::setIdade(int idadeUsuario)
{
    idade=idadeUsuario;
}

/* método para atribuir ao atributo "altura", criado na classe Pessoa,
a altura inserida pelo usuário na main */
void Pessoa::setAltura(float alturaUsuario)
{
    altura=alturaUsuario;
}

/* método para atribuir ao atributo "peso", criado na classe Pessoa,
o peso inserido pelo usuário na main */
void Pessoa::setPeso(float pesoUsuario)
{
    peso=pesoUsuario;
}

/* método para atribuir ao atributo "sexo" criado na classe Pessoa
o sexo inserido pelo usuário na main */
void Pessoa::setSexo(string sexoUsuario)
{
    sexo=sexoUsuario;
}

// método para exibir o atributo "nome" criado na classe Pessoa
string Pessoa::getNome()
{
    return nome;
}

// método para exibir o atributo "idade" criado na classe Pessoa
int Pessoa::getIdade()
{
    return idade;
}

// método para exibir o atributo "altura" criado na classe Pessoa
float Pessoa::getAltura()
{
    return altura;
}

// método para exibir o atributo "peso" criado na classe Pessoa
float Pessoa::getPeso()
{
    return peso;
}

// método para exibir o atributo "sexo" criado na classe Pessoa
string Pessoa::getSexo()
{
    return sexo;
}

// método para calcular o imc criado na classe pessoa
float Pessoa::calculando_imc()
{
    return peso/(pow(altura, 2));
}

// método para informar a categoria que o usuario se encontra referente ao imc
string Pessoa::categoria_imc()
{
    float IMC=calculando_imc();
    if(IMC<=18.5)
        return "Abaixo do peso normal";
    else if(IMC<=25)
        return "Peso normal";
    else if(IMC<=30)
        return "Acima do peso normal";
    else
        return "Obesidade";
}

int main()
{
    // para traduzir os cout's pro português
    setlocale(LC_ALL,"Portuguese");
    cout << "Este programa calcula o IMC, dada as informações pelo usuário "
         "como nome, idade, peso, altura e sexo, e informa a categoria referente"
         " ao IMC que a pessoa se     encontra." << endl << endl;
    // variáveis para guardar os valores que o usuário digitar referente a pessoa
    string nomeUsuario;
    string sexoUsuario;
    int idadeUsuario;
    float alturaUsuario;
    float pesoUsuario;
    // definindo o objeto da classe Pessoa como pessoa1
    Pessoa pessoa1;
    // pedindo ao usuário as informações da pessoa
    cout << "Informe o nome da pessoa: ";
    cin >> nomeUsuario;
    cout << "Informe a idade da pessoa: ";
    cin >> idadeUsuario;
    cout << "Informe a altura da pessoa: ";
    cin >> alturaUsuario;
    cout << "Informe o peso da pessoa: ";
    cin >> pesoUsuario;
    cout << "Informe o sexo da pessoa: ";
    cin >> sexoUsuario;
    /* chamando os métodos para atribuir essas informações inseridos aos
    aos atributos da classe sendo cada um para o sua respectiva informação */
    pessoa1.setNome(nomeUsuario);
    pessoa1.setIdade(idadeUsuario);
    pessoa1.setAltura(alturaUsuario);
    pessoa1.setPeso(pesoUsuario);
    pessoa1.setSexo(sexoUsuario);
    /* chamando os métodos que exibem os valores referentes ao nome, idade,
    altura, peso, sexo e caculando o imc para exibir a categoria que a pessoa
    se encontra */
    cout << endl << "Nome: " << pessoa1.getNome() << endl
         << "Idade: " << pessoa1.getIdade() << endl
         << "Altura: " << pessoa1.getAltura() << endl
         << fixed << setprecision(2)
         << "Peso: " << pessoa1.getPeso() << endl
         << "Sexo: " << pessoa1.getSexo() << endl
         << "IMC: " << pessoa1.calculando_imc() << endl
         << "Categoria: " << pessoa1.categoria_imc() << endl;
    return 0;
}
