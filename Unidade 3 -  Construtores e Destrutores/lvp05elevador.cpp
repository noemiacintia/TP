/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674

UNIDADE 3
LVP 05: Crie uma classe denominada Elevador para armazenar
as informa��es de um elevador dentro de um pr�dio.
Utilizando o Construtor, a classe deve armazenar o
andar atual (0=t�rreo), total de andares no pr�dio,
excluindo o t�rreo, capacidade do elevador, e quantas
pessoas est�o presentes nele.

A classe deve tamb�m disponibilizar os seguintes m�todos:
�  Construtor: que deve receber como par�metros a capacidade
do elevador e o total de andares no pr�dio (os elevadores
sempre come�am no t�rreo e vazios);
�  entra: para acrescentar uma pessoa no elevador(s� deve
acrescentar se ainda houver espa�o);
�  sai: para remover uma pessoa do elevador (s� deve remover
se houver algu�m dentro dele);
�  sobe: para subir a um determinado andar, ou seja, tem que
informar para qual andar o elevador deve ir (n�o deve subir
se j� estiver no �ltimo andar ou se o andar n�o existir);
�  desce: para descer a um determinado andar (n�o deve descer
se j� estiver no t�rreo ou se o andar n�o existir);
.  situacao: m�todo para informar a situa��o atual (andar que
o elevador est� e n�mero de pessoas no elevador.
.  neste caso, n�o ser�o necess�rios m�todos set e get porque
os m�todos entra, sai, sobe e desce t�m essa funcionalidade.

Na main, utilize um menu para executar o funcionamento do
elevador, de acordo com os seguintes crit�rios:
1 - entra
2 - sai
3 - sobe
4 - desce
5 - encerra o menu
A cada op��o do menu escolhida pelo usu�rio, o m�todo situacao
deve ser chamado para informar qual o andar que o elevador se
encontra e quantas pessoas est�o no elevador. */

#include <iostream>
#include <locale>

using namespace std;

// criando a classe Elevador
class Elevador
{
    // definindo atributos
    int andarAtual;
    int totalDeAndares;
    int capacidadeDoElevador;
    int pessoasNoElevador;
public:
    // definindo m�todos p�blicos
    Elevador(int, int); // criando o construtor com par�metros
    Elevador(); // criando o construtor padr�o
    int entra();
    int sai();
    int sobe(int);
    int desce(int);
    void situacao();

};

// m�todo do construtor padr�o para inicializar os atributos da classe
Elevador::Elevador()
{
    andarAtual = 0;
	pessoasNoElevador = 0;
	capacidadeDoElevador = 10;
	totalDeAndares = 5;
}

/* m�todo do construtor com par�metros para atribuir aos atributos
"capacidadeDoElevador" e "totalDeAndares" os valores que definimos
no construtor padr�o */
Elevador::Elevador(int capacidadeDoElevador, int totalDeAndares)
{
    this->capacidadeDoElevador = capacidadeDoElevador;
    this->totalDeAndares = totalDeAndares;
}

// m�todo para adicionar pessoas no elevador, caso n�o passe da capacidade
int Elevador::entra()
{
    if(pessoasNoElevador>=capacidadeDoElevador)
        // a pessoa n�o entra pois excede a capacidade
        return pessoasNoElevador;
    else
        // a pessoa entra pois est� dentro do limite
        return pessoasNoElevador+=1;
}

// m�todo para retirar pessoas do elevador, caso tenha algu�m no elevador
int Elevador::sai()
{
    // retira apenas se tiver algu�m
    if(pessoasNoElevador>0)
        return pessoasNoElevador-=1;
}

// m�todo para subir o elevador, caso n�o passe do total de andar
int Elevador::sobe(int andar)
{
    // atribuindo a andarAtual o andar que o usu�rio informou na main
    andarAtual=andar;
    // caso exceda o limite m�ximo de andares definido
    if(andarAtual>totalDeAndares)
    {
        andarAtual=5;
        return andarAtual;
    }
    // caso n�o exceda
    else
        return andarAtual;
}

int Elevador::desce(int andar)
{
    // atribuindo a andarAtual o andar que o usu�rio informou na main
    andarAtual=andar;
    // caso exceda o limite m�nimo que seria 0-t�rreo de andares definido
    if(andarAtual<0)
    {
        andarAtual=0;
        return andarAtual;
    }
    // caso n�o exceda
    else
        return andarAtual;
}

// m�todo para exibir a situacao do elevador como pede na questao
void Elevador::situacao()
{
    cout << "ELEVADOR COM: " << pessoasNoElevador << " PESSOA(S)"
         << endl << "ANDAR: " << andarAtual << endl;
}

int main()
{
    // para traduzir os cout's pro portugu�s
    setlocale(LC_ALL,"Portuguese");
    // vari�veis para guardar os valores que o usu�rio digitar
    int menu;
    int andar;
    // definindo os objetos da classe Elevador
    Elevador predio;
    cout << "Este programa simula um elevador em que o usu�rio "
        "insere as op��es e o programa retorna a situa��o do elevador."
        << endl << endl;
    // pedindo ao usu�rio os valores que precisamos
    cout << "Insira o n�mero de acordo com o menu abaixo:" << endl
         << "1 - entra" << endl << "2 - sai" << endl << "3 - sobe"
         << endl << "4 - desce" << endl << "5 - encerra o menu" << endl;
    cin >> menu;
    // enquanto o usu�rio n�o digitar 5 o programa espera outros valores
    while(menu!=5)
    {
        // verificando o que o usu�rio digitou e chamando seus respectivos m�todos
        if(menu==1)
        {
            predio.entra();
            predio.situacao();
        }
        else if(menu==2)
        {
            predio.sai();
            predio.situacao();
        }
        else if(menu==3)
        {
            cout << "INFORME O ANDAR DESEJADO: " << endl;
            cin >> andar;
            predio.sobe(andar);
            predio.situacao();
        }
        else if(menu==4)
        {
            cout << "INFORME O ANDAR DESEJADO: " << endl;
            cin >> andar;
            predio.desce(andar);
            predio.situacao();
        }
        // pedindo novamente ao usu�rio o que ele deseja fazer
        cin >> menu;
    }
    return 0;
}
