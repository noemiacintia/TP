/* ALUNA: NOÊMIA CÍNTIA SALES SANTOS DA SILVA
   MATRÍCULA: 119210674

UNIDADE 2
LVP 03: Crie uma classe Retangulo a partir da qual apenas
as coordenadas cartesianas dos vértices de suas instâncias
são armazenadas (x1,y1, x2,y2). Para simplificar, considere
os valores dos vértices apenas como atributos da classe.
O construtor deve chamar uma função-membro que receba tais
coordenadas e verifique se todas elas se encontram no primeiro
quadrante, sem que nenhum dos valores de x ou y seja maior do
que 15,0 (ou seja, os valores do primeiro quadrante devem ser
positivos e menores que 15). Considere que o usuário irá fornecer
coordenadas que especificam um retângulo. Também deverão ser
definidas funções-membros para calcular o comprimento, a largura,
o perímetro e a área do retângulo (uma função-membro para cada cálculo).
O comprimento deverá ser o maior das duas dimensões. Incluir uma
função-predicado (função que retorna verdadeiro ou falso, de acordo com
uma verificação) denominada ehQuadrado.
O protótipo da Classe deve possuir a estrutura abaixo. Não será necessário
neste momento utilizarmos o construtor (assunto da próxima semana).
Vocês devem escrever o código dos métodos conforme explicado em aula.
Na main, crie uma aplicação para executar esse programa.
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
    //definindo método privado
    bool checar(int,int,int,int);
public:
    // definindo métodos públicos
    int setValores(int, int, int, int);
    int comprimento();
    int largura();
    int perimetro();
    int area();
    bool ehquadrado();
};

/* método para atribuir aos atributos da classe os valores dos vértices
inseridos pelo usuário */
int Retangulo::setValores(int x1, int y1, int x2, int y2)
{
    /* chamando o método checar para testar, antes de atribuir, se os valores
    inseridos pelo usuário são maiores que zero e menores que 15. */
    if(checar(x1, y1, x2, y2))
    {
        // se o método checar retornar verdadeiro atribui
        pix = x1;
        piy = y1;
        psx = x2;
        psy = y2;
    }
    // caso não retorne verdadeiro é inserido 0 em todos os atributos da classe
    else
    {
        pix = 0;
        piy = 0;
        psx = 0;
        psy = 0;
    }
}

/* método para checar se os valores inseridos pelo usuário são maiores que
 zero e menores que 15. */
bool Retangulo::checar(int x1, int y1, int x2, int y2)
{
    if((x1>0 && x1<15)&& (y1>0 && y1<15) && (x2>0 && x2<15) && (y2>0 && y2<15))
        // como é do tipo bool ele retorna true ou false
        return true;
    else
        return false;
}

// método que retorna o comprimento do retangulo
int Retangulo::comprimento()
{
    return psx-pix;
}

// método que retorna a largura do retangulo
int Retangulo::largura()
{
    return psy-piy;
}

// método que retorna o perimetro do retangulo
int Retangulo::perimetro()
{
    // atribuindo  a variavel larg o valor que a função largura retorna
    int larg=largura();
    // atribuindo  a variavel comp o valor que a função comprimento retorna
    int comp=comprimento();
    return (2*larg)+(2*comp);
}

// método que retorna a area do retangulo
int Retangulo::area()
{
    // atribuindo  a variavel larg o valor que a função largura retorna
    int larg=largura();
    // atribuindo  a variavel comp o valor que a função comprimento retorna
    int comp=comprimento();
    return comp*larg;
}

/* método que retorna se os vértices inseridos pelo usuário formam ou não
um quadrado */
bool Retangulo::ehquadrado()
{
    int larg=largura();
    int comp=comprimento();
    /* se os vértices forem iguais a zero não pode ser quadrado pois o usuário
    digitou um valor menor que zero ou maior que 15 */
    if(larg==0 && comp==0)
    {
        return false;
    }
    // se o comprimento for igual a largura significa que é quadrado
    else
    {
        return larg==comp;
    }
}

int main()
{
    // para traduzir os cout's pro português
    setlocale(LC_ALL,"Portuguese");
    cout << "Este programa calcula a área, comprimento, largura e perímetro"
    " de um retângulo  dado seus vértices e ainda informa ao usuário se"
    " é ou não um quadrado." << endl << endl;
    /* variáveis para guardar os valores que o usuário digitar referente aos
    vértices */
    int x1, x2, y1, y2;
    // definindo o objeto da classe Retangulo como r1
    Retangulo r1;
    // pedindo ao usuário os valores dos vértices
    cout << "Digite os vértices x1 e y1 no modelo x1(espaço)y1: ";
    cin >> x1 >> y1;
    cout << "Digite os vértices x2 e y2 no modelo x2(espaço)y2: ";
    cin >> x2 >> y2;
    /* chamando o método setValores para atribuir esses valores inseridos aos
    aos atributos da classe */
    r1.setValores(x1, y1, x2, y2);
    /* chamando os métodos e exibindo os valores referentes a área, perímetro
    largura e comprimento */
    cout << endl << "Comprimento: " << r1.comprimento() << endl
         << "Largura: " << r1.largura() << endl
         << "Perímetro: " << r1.perimetro() << endl
         << "Área: " << r1.area() << endl;
    // testando se a função é ou não quadrado e exibindo caso seja
    if(r1.ehquadrado())
        cout <<"É um quadrado!" << endl;
    return 0;
}
