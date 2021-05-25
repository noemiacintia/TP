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
O comprimento dever� ser o maior das duas dimens�es. Incluir uma fun��o-predicado (fun��o que retorna verdadeiro ou falso, de acordo com uma verifica��o) denominada ehQuadrado.
O prot�tipo da Classe deve possuir a estrutura abaixo. N�o ser� necess�rio neste momento utilizarmos o construtor (assunto da pr�xima semana).  Voc�s devem escrever o c�digo dos m�todos conforme explicado em aula. Na main, crie uma aplica��o para executar esse programa.
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

#include <iostream> // biblioteca para os comandos de entrada e sa�da
#include <locale> // biblioteca para traduzir a linguagem dos cout's

using namespace std; // definindo todas as fun��es da biblioteca padr�o

// criando a classe Retangulo
class Retangulo
{
    // atributos para os v�rtices
    int pix, piy, psx, psy;
    // m�todo para checar se as vari�veis s�o maiores que 0 e menores que 15
    bool checar(int,int,int,int);
public:
    /* m�todo para atribuir
    os valores que o usu�rio digitou aos atributos da classe */
    int setValores(int, int, int, int);
    // m�todo para calcular o comprimento
    int comprimento();
    // m�todo para calcular a largura
    int largura();
    // m�todo para calcular o perimetro
    int perimetro();
    // m�todo para calcular a area
    int area();
    // m�todo para saber se o � ou n�o um quadrado
    bool ehquadrado();
};

/* atribuindo aos atributos da classe os valores informados
pelo usu�rio e checando se � menor que 15 e maior que 0 */
int Retangulo::setValores(int x1, int y1, int x2, int y2)
{
    /* se a fun��o checar retornar true atribui aos atributos
    os valores informados pelo usu�rio */
    if(checar(x1, y1, x2, y2))
    {
        pix = x1;
        piy = y1;
        psx = x2;
        psy = y2;
    }
    else /* caso a fun�a� checar retorne false atribui 0 aos
        atirbutos da classe */
    {
        pix = 0;
        piy = 0;
        psx = 0;
        psy = 0;
    }
}

bool Retangulo::checar(int x1, int x2, int y1, int y2)
{
    if((x1>0 && x1<15)&& (y1>0 && y1<15) && (x2>0 && x2<15) && (y2>0 && y2<15))
        return true;
    else
        return false;
}
int Retangulo::comprimento()
{
    return psx-pix;
}

int Retangulo::largura()
{
    return psy-piy;
}

int Retangulo::perimetro()
{
    int larg=largura();
    int comp=comprimento();
    return (2*larg)+(2*comp);
}

int Retangulo::area()
{
    int larg=largura();
    int comp=comprimento();
    return comp*larg;
}

bool Retangulo::ehquadrado()
{
    int larg=largura();
    int comp=comprimento();
    if(larg==0 && comp==0)
    {
        return false;
    }
    else
    {
        return larg==comp;
    }
}

int main()
{
    //comando para traduzir os cout's para portugues
    setlocale(LC_ALL,"Portuguese");
    cout << "Este programa calcula a �rea, comprimento, largura e per�metro"
    "de um ret�ngulo dado seus v�rtices e ainda informa ao usu�rio se o"
    "ret�ngulo � ou n�o um quadrado." << endl << endl;
    // vari�veis correspondentes aos v�rtices que o usu�rio ir� informar
    int x1, x2, y1, y2;
    // definindo o objeto da classe que criei como retangulo
    Retangulo retangulo;
    cout << "Informe os v�rtices x1 e x2: ";
    cin >> x1 >> y1;
    cout << "Informe os v�rtices y1 e y2: ";
    cin >> x2 >> y2;
    // chamando a fun��o setValores
    retangulo.setValores(x1, y1, x2, y2);
    // chamando as fun��es e exibindo os valores correspondentes:
    cout << "Area = " << retangulo.area() << endl
         << "Perimetro = " << retangulo.perimetro() << endl
         << "Largura = " << retangulo.largura() << endl
         << "Comprimento = " << retangulo.comprimento() << endl;
    // testando se � quadrado ou n�o
    if(retangulo.ehquadrado())
    {
        cout <<"� um quadrado!" << endl; // caso seja
    }
    else
    {
        cout << "" << endl; // caso n�o seja
    }
    return 0;
}
