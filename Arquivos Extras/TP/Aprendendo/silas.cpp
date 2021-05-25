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
    // criando o construtor com parâmetros
    Elevador(int, int);
    // criando o construtor padrão
    Elevador();
    int entra();
    int sai();
    int sobe(int);
    int desce(int);
    void situacao();

};

/* método do construtor sem parâmetros para inicializar os atributos
"andarAtual" e "pessoasNoElevador" com 0. */
Elevador::Elevador()
{
    andarAtual = 0;
	pessoasNoElevador = 0;
	capacidadeDoElevador = 10;
	totalDeAndares = 5;
}

/* método do construtor com parâmetros para atribuir aos atributos
"capacidadeDoElevador" e "totalDeAndares", criado na classe Elevador,
os valores informados na main */
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

/* método para retirar pessoas do elevador, caso tenha alguém no elevador */
int Elevador::sai()
{
    if(pessoasNoElevador>0)
        return pessoasNoElevador-=1;
}

/* método para subir o elevador, caso não passe do total de andar */
int Elevador::sobe(int andar)
{
    //
    andarAtual=andar;
    if(andarAtual>totalDeAndares)
    {
        andarAtual=5;
        return andarAtual;
    }
    else
        return andarAtual;
}

int Elevador::desce(int andar)
{
    andarAtual=andar;
    if(andarAtual<0)
    {
        andarAtual=0;
        return andarAtual;
    }
    else
        return andarAtual;
}

void Elevador::situacao()
{
    cout << "ELEVADOR COM: " << pessoasNoElevador << " PESSOA(S)"
         << endl << "ANDAR: " << andarAtual << endl;
}

int main()
{
    // para traduzir os cout's pro português
    setlocale(LC_ALL,"Portuguese");
    int menu;
    int andar;
    Elevador predio;

    cout << "Insira o número de acordo com o menu abaixo:" << endl
         << "\t1 - entra" << endl << "\t2 - sai" << endl << "\t3 - sobe"
         << endl << "\t4 - desce" << endl << "\t5 - encerra o menu" << endl;
    cin >> menu;

    while(menu!=5)
    {
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
        cin >> menu;
    }
    return 0;
}
