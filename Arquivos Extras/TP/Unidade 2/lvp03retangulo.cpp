/* ALUNA: NO�MIA C�NTIA SALES SANTOS DA SILVA
   MATR�CULA: 119210674

UNIDADE 2
LVP 03: Crie uma classe Retangulo a partir da qual apenas
as coordenadas cartesianas dos v�rtices de suas inst�ncias
s�o armazenadas (x1,y1, x2,y2). Para simplificar, considere
os valores dos v�rtices apenas como atributos da classe.
O construtor deve chamar uma fun��o-membro que receba tais
coordenadas e verifique se todas elas se encontram no primeiro
quadrante, sem que nenhum dos valores de x ou y seja maior do
que 15,0 (ou seja, os valores do primeiro quadrante devem ser
positivos e menores que 15). Considere que o usu�rio ir� fornecer
coordenadas que especificam um ret�ngulo. Tamb�m dever�o ser
definidas fun��es-membros para calcular o comprimento, a largura,
o per�metro e a �rea do ret�ngulo (uma fun��o-membro para cada c�lculo).
O comprimento dever� ser o maior das duas dimens�es. Incluir uma
fun��o-predicado (fun��o que retorna verdadeiro ou falso, de acordo com
uma verifica��o) denominada ehQuadrado.
O prot�tipo da Classe deve possuir a estrutura abaixo. N�o ser� necess�rio
neste momento utilizarmos o construtor (assunto da pr�xima semana).
Voc�s devem escrever o c�digo dos m�todos conforme explicado em aula.
Na main, crie uma aplica��o para executar esse programa.
class Retangulo{

	int pix, piy, psx, psy;
    bool checar(int,int,int,int);
public:
    setValores(int, int, int, int);
    int comprimento();
	int largura();
	int perimetro();
	int area();
	bool ehquadrado();
};
*/

#include <iostream>
#include <locale>

using namespace std;

// criando a classe Retangulo
class Retangulo
{
    // definindo atributos
    int pix, piy, psx, psy;
    //definindo m�todo privado
    bool checar(int,int,int,int);
public:
    // definindo m�todos p�blicos
    int setValores(int, int, int, int);
    int comprimento();
    int largura();
    int perimetro();
    int area();
    bool ehquadrado();
};

/* m�todo para atribuir aos atributos da classe os valores dos v�rtices
inseridos pelo usu�rio */
int Retangulo::setValores(int x1, int y1, int x2, int y2)
{
    /* chamando o m�todo checar para testar, antes de atribuir, se os valores
    inseridos pelo usu�rio s�o maiores que zero e menores que 15. */
    if(checar(x1, y1, x2, y2))
    {
        // se o m�todo checar retornar verdadeiro atribui
        pix = x1;
        piy = y1;
        psx = x2;
        psy = y2;
    }
    // caso n�o retorne verdadeiro � inserido 0 em todos os atributos da classe
    else
    {
        pix = 0;
        piy = 0;
        psx = 0;
        psy = 0;
    }
}

/* m�todo para checar se os valores inseridos pelo usu�rio s�o maiores que
 zero e menores que 15. */
bool Retangulo::checar(int x1, int y1, int x2, int y2)
{
    if((x1>0 && x1<15)&& (y1>0 && y1<15) && (x2>0 && x2<15) && (y2>0 && y2<15))
        // como � do tipo bool ele retorna true ou false
        return true;
    else
        return false;
}

// m�todo que retorna o comprimento do retangulo
int Retangulo::comprimento()
{
    return psx-pix;
}

// m�todo que retorna a largura do retangulo
int Retangulo::largura()
{
    return psy-piy;
}

// m�todo que retorna o perimetro do retangulo
int Retangulo::perimetro()
{
    // atribuindo  a variavel larg o valor que a fun��o largura retorna
    int larg=largura();
    // atribuindo  a variavel comp o valor que a fun��o comprimento retorna
    int comp=comprimento();
    return (2*larg)+(2*comp);
}

// m�todo que retorna a area do retangulo
int Retangulo::area()
{
    // atribuindo  a variavel larg o valor que a fun��o largura retorna
    int larg=largura();
    // atribuindo  a variavel comp o valor que a fun��o comprimento retorna
    int comp=comprimento();
    return comp*larg;
}

/* m�todo que retorna se os v�rtices inseridos pelo usu�rio formam ou n�o
um quadrado */
bool Retangulo::ehquadrado()
{
    int larg=largura();
    int comp=comprimento();
    /* se os v�rtices forem iguais a zero n�o pode ser quadrado pois o usu�rio
    digitou um valor menor que zero ou maior que 15 */
    if(larg==0 && comp==0)
    {
        return false;
    }
    // se o comprimento for igual a largura significa que � quadrado
    else
    {
        return larg==comp;
    }
}

int main()
{
    // para traduzir os cout's pro portugu�s
    setlocale(LC_ALL,"Portuguese");
    cout << "Este programa calcula a �rea, comprimento, largura e per�metro"
    " de um ret�ngulo  dado seus v�rtices e ainda informa ao usu�rio se"
    " � ou n�o um quadrado." << endl << endl;
    /* vari�veis para guardar os valores que o usu�rio digitar referente aos
    v�rtices */
    int x1, x2, y1, y2;
    // definindo o objeto da classe Retangulo como r1
    Retangulo r1;
    // pedindo ao usu�rio os valores dos v�rtices
    cout << "Digite os v�rtices x1 e y1 no modelo x1(espa�o)y1: ";
    cin >> x1 >> y1;
    cout << "Digite os v�rtices x2 e y2 no modelo x2(espa�o)y2: ";
    cin >> x2 >> y2;
    /* chamando o m�todo setValores para atribuir esses valores inseridos aos
    aos atributos da classe */
    r1.setValores(x1, y1, x2, y2);
    /* chamando os m�todos e exibindo os valores referentes a �rea, per�metro
    largura e comprimento */
    cout << endl << "Comprimento: " << r1.comprimento() << endl
         << "Largura: " << r1.largura() << endl
         << "Per�metro: " << r1.perimetro() << endl
         << "�rea: " << r1.area() << endl;
    // testando se a fun��o � ou n�o quadrado e exibindo caso seja
    if(r1.ehquadrado())
        cout <<"� um quadrado!" << endl;
    return 0;
}
