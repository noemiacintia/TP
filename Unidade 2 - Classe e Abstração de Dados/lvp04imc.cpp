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
    // definindo m�todos p�blicos
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

/* m�todo para atribuir ao atributo "nome", criado na classe Pessoa,
o nome inserido pelo usu�rio na main */
void Pessoa::setNome(string nomeUsuario)
{
    nome=nomeUsuario;
}

/* m�todo para atribuir ao atributo "idade", criado na classe Pessoa,
a idade inserida pelo usu�rio na main */
void Pessoa::setIdade(int idadeUsuario)
{
    idade=idadeUsuario;
}

/* m�todo para atribuir ao atributo "altura", criado na classe Pessoa,
a altura inserida pelo usu�rio na main */
void Pessoa::setAltura(float alturaUsuario)
{
    altura=alturaUsuario;
}

/* m�todo para atribuir ao atributo "peso", criado na classe Pessoa,
o peso inserido pelo usu�rio na main */
void Pessoa::setPeso(float pesoUsuario)
{
    peso=pesoUsuario;
}

/* m�todo para atribuir ao atributo "sexo" criado na classe Pessoa
o sexo inserido pelo usu�rio na main */
void Pessoa::setSexo(string sexoUsuario)
{
    sexo=sexoUsuario;
}

// m�todo para exibir o atributo "nome" criado na classe Pessoa
string Pessoa::getNome()
{
    return nome;
}

// m�todo para exibir o atributo "idade" criado na classe Pessoa
int Pessoa::getIdade()
{
    return idade;
}

// m�todo para exibir o atributo "altura" criado na classe Pessoa
float Pessoa::getAltura()
{
    return altura;
}

// m�todo para exibir o atributo "peso" criado na classe Pessoa
float Pessoa::getPeso()
{
    return peso;
}

// m�todo para exibir o atributo "sexo" criado na classe Pessoa
string Pessoa::getSexo()
{
    return sexo;
}

// m�todo para calcular o imc criado na classe pessoa
float Pessoa::calculando_imc()
{
    return peso/(pow(altura, 2));
}

// m�todo para informar a categoria que o usuario se encontra referente ao imc
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
    // para traduzir os cout's pro portugu�s
    setlocale(LC_ALL,"Portuguese");
    cout << "Este programa calcula o IMC, dada as informa��es pelo usu�rio "
         "como nome, idade, peso, altura e sexo, e informa a categoria referente"
         " ao IMC que a pessoa se     encontra." << endl << endl;
    // vari�veis para guardar os valores que o usu�rio digitar referente a pessoa
    string nomeUsuario;
    string sexoUsuario;
    int idadeUsuario;
    float alturaUsuario;
    float pesoUsuario;
    // definindo o objeto da classe Pessoa como pessoa1
    Pessoa pessoa1;
    // pedindo ao usu�rio as informa��es da pessoa
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
    /* chamando os m�todos para atribuir essas informa��es inseridos aos
    aos atributos da classe sendo cada um para o sua respectiva informa��o */
    pessoa1.setNome(nomeUsuario);
    pessoa1.setIdade(idadeUsuario);
    pessoa1.setAltura(alturaUsuario);
    pessoa1.setPeso(pesoUsuario);
    pessoa1.setSexo(sexoUsuario);
    /* chamando os m�todos que exibem os valores referentes ao nome, idade,
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
