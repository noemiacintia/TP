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
O comprimento deverá ser o maior das duas dimensões. Incluir uma função-predicado (função que retorna verdadeiro ou falso, de acordo com uma verificação) denominada ehQuadrado.
O protótipo da Classe deve possuir a estrutura abaixo. Não será necessário neste momento utilizarmos o construtor (assunto da próxima semana).  Vocês devem escrever o código dos métodos conforme explicado em aula. Na main, crie uma aplicação para executar esse programa.
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

#include <iostream> // biblioteca para os comandos de entrada e saída
#include <locale> // biblioteca para traduzir a linguagem dos cout's

using namespace std; // definindo todas as funções da biblioteca padrão

// criando a classe Retangulo
class Retangulo
{
    // atributos para os vértices
    int pix, piy, psx, psy;
    // método para checar se as variáveis são maiores que 0 e menores que 15
    bool checar(int,int,int,int);
public:
    /* método para atribuir
    os valores que o usuário digitou aos atributos da classe */
    int setValores(int, int, int, int);
    // método para calcular o comprimento
    int comprimento();
    // método para calcular a largura
    int largura();
    // método para calcular o perimetro
    int perimetro();
    // método para calcular a area
    int area();
    // método para saber se o é ou não um quadrado
    bool ehquadrado();
};

/* atribuindo aos atributos da classe os valores informados
pelo usuário e checando se é menor que 15 e maior que 0 */
int Retangulo::setValores(int x1, int y1, int x2, int y2)
{
    /* se a função checar retornar true atribui aos atributos
    os valores informados pelo usuário */
    if(checar(x1, y1, x2, y2))
    {
        pix = x1;
        piy = y1;
        psx = x2;
        psy = y2;
    }
    else /* caso a funçaõ checar retorne false atribui 0 aos
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
    cout << "Este programa calcula a área, comprimento, largura e perímetro"
    "de um retângulo dado seus vértices e ainda informa ao usuário se o"
    "retângulo é ou não um quadrado." << endl << endl;
    // variáveis correspondentes aos vértices que o usuário irá informar
    int x1, x2, y1, y2;
    // definindo o objeto da classe que criei como retangulo
    Retangulo retangulo;
    cout << "Informe os vértices x1 e x2: ";
    cin >> x1 >> y1;
    cout << "Informe os vértices y1 e y2: ";
    cin >> x2 >> y2;
    // chamando a função setValores
    retangulo.setValores(x1, y1, x2, y2);
    // chamando as funções e exibindo os valores correspondentes:
    cout << "Area = " << retangulo.area() << endl
         << "Perimetro = " << retangulo.perimetro() << endl
         << "Largura = " << retangulo.largura() << endl
         << "Comprimento = " << retangulo.comprimento() << endl;
    // testando se é quadrado ou não
    if(retangulo.ehquadrado())
    {
        cout <<"É um quadrado!" << endl; // caso seja
    }
    else
    {
        cout << "" << endl; // caso não seja
    }
    return 0;
}
