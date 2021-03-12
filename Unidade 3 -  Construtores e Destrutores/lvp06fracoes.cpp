/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674

UNIDADE 3
LVP 06: Crie uma classe chamada Fracao para realizar
aritm�tica com fra��es. Utilize vari�veis do tipo
inteiro para representar os dados private da classe �
o numerador e o denominador. Forne�a um construtor que
permita que um objeto dessa classe seja inicializado com
valores quando esse objeto for instanciado. O construtor
deve conter valores-padr�o no caso de nenhum inicializador
ser fornecido. Forne�a fun��es-membro public que realizam
cada uma das tarefas a seguir:
a) Multiplicar dois n�meros do tipo Fracao. Este m�todo
recebe como par�metros 2 n�meros do tipo Fracao e retorna
um n�mero Fracao.
b) Dividir dois n�meros do tipo Fracao. Este m�todo recebe
como par�metros 2 n�meros do tipo Fracao e retorna um n�mero Fracao.
Adicione � classe anterior (chamada Fracao) as seguintes funcionalidades:
a) Imprimir a Fracao resultante na forma a/b, onde a � o
numerador e b � o denominador.
b) Imprimir a Fracao resultante em formato de ponto flutuante
com 4 casas decimais.
Obs.: Na main, crie um programa para testar a classe utilizando
um menu com as seguintes op��es:
1. Multiplicar - Ap�s a sele��o da op��o, o usu�rio deve
fornecer os valores das duas fra��es.
2. Dividir - Ap�s a sele��o da op��o, o usu�rio deve fornecer
os valores das duas fra��es.
Obs.: Para voc�s entenderem como se calcula a multiplica��o
de fra��es, lembrem-se que haver� uma fra��o que ser� gerada
como resultado da multiplica��o de outras duas, ou seja,
dada a classe Fracao, na main teremos:
int main(){
     Fracao f1, f2, fr;
     ....
     fr.multiplica(f1, f2);
}
PS.: o m�todo multiplica, da fra��o fr, recebe as duas
fra��es(f1 e f2), multiplica os denominadores e numeradores
(obedecendo as regras das fra��es) e o resultado � armazenado
no denominador e numerador da fr.
Neste programa, � importante que voc�s saibam
(ou pesquisem) como s�o realizadas a multiplica��o e
divis�o de fra��es. */

#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// criando a classe Fracoes
class Fracao
{
    // definindo atributos
    int numerador;
    int denominador;
public:
    // definindo m�todos p�blicos
    Fracao(); // criando o construtor sem par�metros
    void setFracao(int, int);
    int getRacionalNum();
    int getRacionalDen();
    float getFlutuante();
    void multiplica(Fracao, Fracao);
    void divide(Fracao, Fracao);
};

/* m�todo do construtor sem par�metros para inicializar os atributos da classe.
Inicializo com 1 para n�o ter problema nos c�lculos da multiplica��o e divis�o. */
Fracao::Fracao()
{
    numerador = denominador = 1;
}

/* m�todo para atribuir os valores que o usu�rio digitou na main para
os objetos (f1 e f2), aos atibutos da classe Fracoes */
void Fracao::setFracao(int num, int den)
{
    numerador = num;
    denominador = den;
}

// m�todo para multiplicar as fra��es f1 e f2
void Fracao::multiplica(Fracao f1, Fracao f2)
{
    /* em cada vari�vel desse m�todo, para cada objeto (f1 e f2),
    eu chamo os atributos da classe Fracoes */
    int num = f1.numerador * f2.numerador;
    int den = f1.denominador * f2.denominador;
    /* atribuindo aos atributos numerador e denominador do objeto fr os valores
    que acabamos de calcular */
    this-> numerador = num;
    this-> denominador = den;
}

void Fracao::divide(Fracao f1, Fracao f2)
{
    /* em cada vari�vel desse m�todo, para cada objeto (f1 e f2),
    eu chamo os atributos da classe Fracoes e como a divis�o de fra��es � feita
    a primeira pelo inverso da segunda eu manipulo os c�lculos invertendo o
    numerador e denominador da segunda fra��o */
    int num = f1.numerador * f2.denominador;
    int den = f1.denominador * f2.numerador;
    /* atribuindo aos atributos numerador e denominador do objeto fr os valores
    que acabamos de calcular */
    this-> numerador = num;
    this-> denominador = den;
}

// m�todo para exibir o atributo "numerador" criado na classe Fracoes
int Fracao::getRacionalNum()
{
    return numerador;
}

// m�todo para exibir o atributo "denominador" criado na classe Fracoes
int Fracao::getRacionalDen()
{
    return denominador;
}

// m�todo para retornar o valor dos atributos com casas decimais
float Fracao::getFlutuante()
{
    /* transformando em double e dividindo os valores que as fun��es
    getRacionalNum e getRacionalDen retornam */
    return double(getRacionalNum())/double(getRacionalDen());
}

int main()
{
    // para traduzir os cout's pro portugu�s
    setlocale(LC_ALL,"Portuguese");
    // vari�veis para guardar os valores que o usu�rio digitar
    int opcao;
    int numerador1;
    int denominador1;
    int numerador2;
    int denominador2;
    // definindo os objetos da classe Fracoes
    Fracao f1, f2, fr;
    // pedindo ao usu�rio os valores que precisamos
    cout << "Insira a op��o desejada: " << endl
         << "\t1 - Multiplicar" << endl << "\t2- Dividir" << endl;
    cin >> opcao;
    cin >> numerador1;
    cin >> denominador1;
    cin >> numerador2;
    cin >> denominador2;
    // caso o usu�rio digite 0 para os denominadores
    if(denominador1==0 || denominador2==0)
    {
        cout << "Denominadore(s)<0 tente inseri-los novamente "
             "(denominador1(espa�o)denominador2): ";
        cin >> denominador1;
        cin >> denominador2;
    }
    /* chamando o m�todo setFracao para atribuir essas informa��es inseridas aos
    aos atributos da classe para cada objeto */
    f1.setFracao(numerador1, denominador1);
    f2.setFracao(numerador2, denominador2);
    // verificando o valor que o usu�rio digitou em opcao
    if(opcao==1)
    {
        /* chamando o m�todo multiplica pro objeto fr que passei como par�metro
        os objetos f1 e f2 */
        fr.multiplica(f1, f2);
        cout << "A multiplica��o eh: " << endl;
    }
    else if(opcao==2)
    {
         /* chamando o m�todo divide pro objeto fr que passei como par�metro
        os objetos f1 e f2 */
        fr.divide(f1, f2);
        cout << "A divis�o eh: " << endl;
    }
    // chamando os m�todos para exibir os valores como a quest�o pede
    cout << fixed << setprecision(4);
    cout << "Formato racional: " << fr.getRacionalNum()
         << "/" << fr.getRacionalDen() << endl
         << "Formato em ponto flutuante: " << fr.getFlutuante();
    return 0;
}
