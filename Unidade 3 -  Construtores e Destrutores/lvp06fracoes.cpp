/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674

UNIDADE 3
LVP 06: Crie uma classe chamada Fracao para realizar
aritmética com frações. Utilize variáveis do tipo
inteiro para representar os dados private da classe –
o numerador e o denominador. Forneça um construtor que
permita que um objeto dessa classe seja inicializado com
valores quando esse objeto for instanciado. O construtor
deve conter valores-padrão no caso de nenhum inicializador
ser fornecido. Forneça funções-membro public que realizam
cada uma das tarefas a seguir:
a) Multiplicar dois números do tipo Fracao. Este método
recebe como parâmetros 2 números do tipo Fracao e retorna
um número Fracao.
b) Dividir dois números do tipo Fracao. Este método recebe
como parâmetros 2 números do tipo Fracao e retorna um número Fracao.
Adicione à classe anterior (chamada Fracao) as seguintes funcionalidades:
a) Imprimir a Fracao resultante na forma a/b, onde a é o
numerador e b é o denominador.
b) Imprimir a Fracao resultante em formato de ponto flutuante
com 4 casas decimais.
Obs.: Na main, crie um programa para testar a classe utilizando
um menu com as seguintes opções:
1. Multiplicar - Após a seleção da opção, o usuário deve
fornecer os valores das duas frações.
2. Dividir - Após a seleção da opção, o usuário deve fornecer
os valores das duas frações.
Obs.: Para vocês entenderem como se calcula a multiplicação
de frações, lembrem-se que haverá uma fração que será gerada
como resultado da multiplicação de outras duas, ou seja,
dada a classe Fracao, na main teremos:
int main(){
     Fracao f1, f2, fr;
     ....
     fr.multiplica(f1, f2);
}
PS.: o método multiplica, da fração fr, recebe as duas
frações(f1 e f2), multiplica os denominadores e numeradores
(obedecendo as regras das frações) e o resultado é armazenado
no denominador e numerador da fr.
Neste programa, é importante que vocês saibam
(ou pesquisem) como são realizadas a multiplicação e
divisão de frações. */

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
    // definindo métodos públicos
    Fracao(); // criando o construtor sem parâmetros
    void setFracao(int, int);
    int getRacionalNum();
    int getRacionalDen();
    float getFlutuante();
    void multiplica(Fracao, Fracao);
    void divide(Fracao, Fracao);
};

/* método do construtor sem parâmetros para inicializar os atributos da classe.
Inicializo com 1 para não ter problema nos cálculos da multiplicação e divisão. */
Fracao::Fracao()
{
    numerador = denominador = 1;
}

/* método para atribuir os valores que o usuário digitou na main para
os objetos (f1 e f2), aos atibutos da classe Fracoes */
void Fracao::setFracao(int num, int den)
{
    numerador = num;
    denominador = den;
}

// método para multiplicar as frações f1 e f2
void Fracao::multiplica(Fracao f1, Fracao f2)
{
    /* em cada variável desse método, para cada objeto (f1 e f2),
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
    /* em cada variável desse método, para cada objeto (f1 e f2),
    eu chamo os atributos da classe Fracoes e como a divisão de frações é feita
    a primeira pelo inverso da segunda eu manipulo os cálculos invertendo o
    numerador e denominador da segunda fração */
    int num = f1.numerador * f2.denominador;
    int den = f1.denominador * f2.numerador;
    /* atribuindo aos atributos numerador e denominador do objeto fr os valores
    que acabamos de calcular */
    this-> numerador = num;
    this-> denominador = den;
}

// método para exibir o atributo "numerador" criado na classe Fracoes
int Fracao::getRacionalNum()
{
    return numerador;
}

// método para exibir o atributo "denominador" criado na classe Fracoes
int Fracao::getRacionalDen()
{
    return denominador;
}

// método para retornar o valor dos atributos com casas decimais
float Fracao::getFlutuante()
{
    /* transformando em double e dividindo os valores que as funções
    getRacionalNum e getRacionalDen retornam */
    return double(getRacionalNum())/double(getRacionalDen());
}

int main()
{
    // para traduzir os cout's pro português
    setlocale(LC_ALL,"Portuguese");
    // variáveis para guardar os valores que o usuário digitar
    int opcao;
    int numerador1;
    int denominador1;
    int numerador2;
    int denominador2;
    // definindo os objetos da classe Fracoes
    Fracao f1, f2, fr;
    // pedindo ao usuário os valores que precisamos
    cout << "Insira a opção desejada: " << endl
         << "\t1 - Multiplicar" << endl << "\t2- Dividir" << endl;
    cin >> opcao;
    cin >> numerador1;
    cin >> denominador1;
    cin >> numerador2;
    cin >> denominador2;
    // caso o usuário digite 0 para os denominadores
    if(denominador1==0 || denominador2==0)
    {
        cout << "Denominadore(s)<0 tente inseri-los novamente "
             "(denominador1(espaço)denominador2): ";
        cin >> denominador1;
        cin >> denominador2;
    }
    /* chamando o método setFracao para atribuir essas informações inseridas aos
    aos atributos da classe para cada objeto */
    f1.setFracao(numerador1, denominador1);
    f2.setFracao(numerador2, denominador2);
    // verificando o valor que o usuário digitou em opcao
    if(opcao==1)
    {
        /* chamando o método multiplica pro objeto fr que passei como parâmetro
        os objetos f1 e f2 */
        fr.multiplica(f1, f2);
        cout << "A multiplicação eh: " << endl;
    }
    else if(opcao==2)
    {
         /* chamando o método divide pro objeto fr que passei como parâmetro
        os objetos f1 e f2 */
        fr.divide(f1, f2);
        cout << "A divisão eh: " << endl;
    }
    // chamando os métodos para exibir os valores como a questão pede
    cout << fixed << setprecision(4);
    cout << "Formato racional: " << fr.getRacionalNum()
         << "/" << fr.getRacionalDen() << endl
         << "Formato em ponto flutuante: " << fr.getFlutuante();
    return 0;
}
