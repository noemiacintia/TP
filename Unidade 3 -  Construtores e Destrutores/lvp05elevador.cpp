/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674

UNIDADE 3
LVP 05: Crie uma classe denominada Elevador para armazenar
as informações de um elevador dentro de um prédio.
Utilizando o Construtor, a classe deve armazenar o
andar atual (0=térreo), total de andares no prédio,
excluindo o térreo, capacidade do elevador, e quantas
pessoas estão presentes nele.

A classe deve também disponibilizar os seguintes métodos:
·  Construtor: que deve receber como parâmetros a capacidade
do elevador e o total de andares no prédio (os elevadores
sempre começam no térreo e vazios);
·  entra: para acrescentar uma pessoa no elevador(só deve
acrescentar se ainda houver espaço);
·  sai: para remover uma pessoa do elevador (só deve remover
se houver alguém dentro dele);
·  sobe: para subir a um determinado andar, ou seja, tem que
informar para qual andar o elevador deve ir (não deve subir
se já estiver no último andar ou se o andar não existir);
·  desce: para descer a um determinado andar (não deve descer
se já estiver no térreo ou se o andar não existir);
.  situacao: método para informar a situação atual (andar que
o elevador está e número de pessoas no elevador.
.  neste caso, não serão necessários métodos set e get porque
os métodos entra, sai, sobe e desce têm essa funcionalidade.

Na main, utilize um menu para executar o funcionamento do
elevador, de acordo com os seguintes critérios:
1 - entra
2 - sai
3 - sobe
4 - desce
5 - encerra o menu
A cada opção do menu escolhida pelo usuário, o método situacao
deve ser chamado para informar qual o andar que o elevador se
encontra e quantas pessoas estão no elevador. */

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
    // definindo métodos públicos
    Elevador(int, int); // criando o construtor com parâmetros
    Elevador(); // criando o construtor padrão
    int entra();
    int sai();
    int sobe(int);
    int desce(int);
    void situacao();

};

// método do construtor padrão para inicializar os atributos da classe
Elevador::Elevador()
{
    andarAtual = 0;
	pessoasNoElevador = 0;
	capacidadeDoElevador = 10;
	totalDeAndares = 5;
}

/* método do construtor com parâmetros para atribuir aos atributos
"capacidadeDoElevador" e "totalDeAndares" os valores que definimos
no construtor padrão */
Elevador::Elevador(int capacidadeDoElevador, int totalDeAndares)
{
    this->capacidadeDoElevador = capacidadeDoElevador;
    this->totalDeAndares = totalDeAndares;
}

// método para adicionar pessoas no elevador, caso não passe da capacidade
int Elevador::entra()
{
    if(pessoasNoElevador>=capacidadeDoElevador)
        // a pessoa não entra pois excede a capacidade
        return pessoasNoElevador;
    else
        // a pessoa entra pois está dentro do limite
        return pessoasNoElevador+=1;
}

// método para retirar pessoas do elevador, caso tenha alguém no elevador
int Elevador::sai()
{
    // retira apenas se tiver alguém
    if(pessoasNoElevador>0)
        return pessoasNoElevador-=1;
}

// método para subir o elevador, caso não passe do total de andar
int Elevador::sobe(int andar)
{
    // atribuindo a andarAtual o andar que o usuário informou na main
    andarAtual=andar;
    // caso exceda o limite máximo de andares definido
    if(andarAtual>totalDeAndares)
    {
        andarAtual=5;
        return andarAtual;
    }
    // caso não exceda
    else
        return andarAtual;
}

int Elevador::desce(int andar)
{
    // atribuindo a andarAtual o andar que o usuário informou na main
    andarAtual=andar;
    // caso exceda o limite mínimo que seria 0-térreo de andares definido
    if(andarAtual<0)
    {
        andarAtual=0;
        return andarAtual;
    }
    // caso não exceda
    else
        return andarAtual;
}

// método para exibir a situacao do elevador como pede na questao
void Elevador::situacao()
{
    cout << "ELEVADOR COM: " << pessoasNoElevador << " PESSOA(S)"
         << endl << "ANDAR: " << andarAtual << endl;
}

int main()
{
    // para traduzir os cout's pro português
    setlocale(LC_ALL,"Portuguese");
    // variáveis para guardar os valores que o usuário digitar
    int menu;
    int andar;
    // definindo os objetos da classe Elevador
    Elevador predio;
    cout << "Este programa simula um elevador em que o usuário "
        "insere as opções e o programa retorna a situação do elevador."
        << endl << endl;
    // pedindo ao usuário os valores que precisamos
    cout << "Insira o número de acordo com o menu abaixo:" << endl
         << "1 - entra" << endl << "2 - sai" << endl << "3 - sobe"
         << endl << "4 - desce" << endl << "5 - encerra o menu" << endl;
    cin >> menu;
    // enquanto o usuário não digitar 5 o programa espera outros valores
    while(menu!=5)
    {
        // verificando o que o usuário digitou e chamando seus respectivos métodos
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
        // pedindo novamente ao usuário o que ele deseja fazer
        cin >> menu;
    }
    return 0;
}
