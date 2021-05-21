#include <iostream>
#include <string>
#include <iomanip>
#include <locale>
#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <vector>
#include <algorithm>

#include "Cervejaria.cpp"
#include "CervejaUnd.cpp"
#include "CervejaLitro.cpp"
#include "Estoque.cpp"

using namespace std;

int main( )
{
    ofstream arquivo1;
    arquivo1.open("EstoqueUnidade.txt");
    ofstream arquivo2;
    arquivo2.open("EstoqueLitro.txt");

    setlocale(LC_ALL, "");
    Estoque estoque; //Objeto do tipo Estoque
    int aux, opcao, opcaoEstoque;
    int op(1);
    string codigoFun="Adm21", login, senha;

    cout<<"============================================================================="<<endl;
    cout<<"============================================================================="<<endl;
    cout<<"=========== Bem vindx ao estoque da Cervejaria Artesanal Beer's++ ==========="<<endl;
    cout<<"============================================================================="<<endl;
    cout<<"============================================================================="<<endl;

    cout << "Insira seu login: ";
    cin >> login;

    while(senha!=codigoFun){
        cout << "Insira sua senha: ";
        cin >> senha;
    }

    cout << endl << "Ola, " << login << " !" << endl << endl;

    system("pause");
    system("cls");

    while (op == 1)
    {
        //Chama o menu principal e abre os arquivos do estoque
        estoque.MenuPrincipal( );
        cin >> opcaoEstoque;
        aux = 1;

        if(opcaoEstoque == 1)
        {
            while(aux == 1)
            {
                system("cls");
                //Pede ao usuario que escolha umas das opções.
                cout<<"============== ESTOQUE UNIDADE! ==============="<<endl<<endl;
                cout <<"Agora, escolha uma das opcoes abaixo: "<<endl;
                cout<<"1 - Inserir uma nova cerveja ao estoque."<<endl;
                cout<<"2 - Adicionar unidade a um produto existente."<<endl;
                cout<<"3 - Pesquisar cerveja por nome."<<endl;
                cout<<"4 - Pesquisar cerveja por codigo."<<endl;
                cout<<"5 - Efetuar venda."<<endl;
                cout<<"6 - Remover cerveja por codigo."<<endl;
                cout<<"7 - Imprimir estoque."<<endl;
                cout<<"8 - Imprimir estoque ordenado por nome."<<endl;
                cout<<"9 - Imprimir estoque ordenado por quantidade."<<endl;
                cout<<"10 - Salvar o estoque em um arquivo .txt"<<endl;
                cout<<"11 - Retornar ao menu principal."<<endl;
                cout<<"0 - Encerrar o programa."<<endl;
                cout<<"Opcao escolhida -> "<<endl;

                cin >> opcao;
                system("cls");

                switch(opcao)
                {
                case 0:
                {
                    //Encerra o programa
                    cout << "Encerrando o programa!" << endl;
                    system("pause");
                    exit(0);
                }

                case 1:
                {
                    //inseri produtos ao estoque
                    CervejaUnd cervejaund;
                    string nome, codigo, validade;
                    float preco;
                    int quantidade;

                    cout << "Insira os seguintes dados para realizar o cadastro: "<<endl;
                    cout << "Nome: ";
                    cin>>nome;
                    cervejaund.setNome(nome);
                    cout << "Codigo: ";
                    cin>>codigo;
                    cervejaund.setCodigo(codigo);
                    cout << "Preco: ";
                    cin>>preco;
                    cervejaund.setPreco(preco);
                    cout<<"Quantidade: ";
                    cin>>quantidade;
                    cervejaund.setQntUnidade(quantidade);
                    cout<<"Prazo de Validade: ";
                    cin>>validade;
                    cervejaund.setPValidade(validade);

                    cervejaund.getNome();
                    cervejaund.getCodigo();
                    cervejaund.getPreco();
                    cervejaund.getQntUnidade();
                    cervejaund.getPValidade();

                    if(estoque.InserirUnd(cervejaund))
                    {
                        cout << "O produto foi cadastrado!" << endl;
                    }
                    else
                    {
                        cout << "Nao foi possivel adicionar ao estoque."<< endl;
                    }
                    system("pause");
                    system("cls");
                    break;
                }

                case 2:
                {
                    //Adiciona quantidades a produtos existentes no estoque
                    int quantidade;
                    string codigo;

                    cout<<"Entre com a quantidade do produto: "<<endl;
                    cin>>quantidade;
                    cout<<"Entre com o codigo do produto: "<<endl;
                    cin>>codigo;

                    if(estoque.AdicionarQntUnd(quantidade, codigo))
                    {
                        cout << "A quantidade foi acrescentada com sucesso!" << endl;
                    }
                    else
                    {
                        cout << "Nao foi possivel acrescentar."<< endl;
                    }
                    system("pause");
                    system("cls");
                    break;
                }

                case 3:
                {
                    //Pesquisa produto por nome
                    string nome;
                    cout << "Insira o nome da cerveja para realizar a pesquisa: ";
                    cin.ignore();
                    getline(cin, nome);

                    if(!estoque.PesquisarNomeUnd(nome))
                    {
                        cout << "O nome pesquisado nao esta na lista." << endl;
                    }
                    system("pause");
                    system("cls");
                    break;
                }

                case 4:
                {
                    //Pesquisa produto por código
                    string codigo;
                    cout << "Insira o codigo da cerveja para realizar a pesquisa: ";
                    cin.ignore();
                    getline(cin, codigo);

                    if(!estoque.PesquisarCodigoUnd(codigo))
                    {
                        cout << "O nome codigo nao esta na lista." << endl;
                    }
                    system("pause");
                    system("cls");
                    break;
                }

                case 5:
                {
                    //Efetua venda
                    int quantidade;
                    string codigo;
                    cout <<	"Entre com a quantidade do produto:"<<endl;
                    cin >> quantidade;
                    cout<<"Entre com o codigo do produto:"<<endl;
                    cin >> codigo;

                    if(estoque.EfetuarVendaUnd(codigo, quantidade))
                    {
                        cout <<"Venda efetuada com sucesso! Obrigadx pela compra." << endl;
                    }
                    else
                    {
                        cout << "Nao foi possivel efetuar a compra."<< endl;
                    }
                    system("pause");
                    system("cls");
                    break;

                }

                case 6:
                {
                    //Remove um produto do estoque
                    string codigo;
                    cout << "Insira codigo da cerveja que deseja remover da lista: ";
                    cin >> codigo;

                    if(estoque.RetirarCodigoUnd(codigo))
                    {
                        cout << "Cerveja removida com sucesso!" << endl;
                    }
                    else
                    {
                        cout << "O código informado nao pertence a nenhuma cerveja da lista." << endl;
                    }
                    system("pause");
                    system("cls");
                    break;
                }

                case 7:
                {
                    //Imprime o estoque
                    cout << "Estoque como foi inserido: " << endl << endl;
                    estoque.ImprimeUnd();
                    system("pause");
                    system("cls");
                    break;

                }

                case 8:
                {
                    //Imprime o estoque em ordem alfabética
                    cout << "Estoque ordenado por nome em ordem alfabetica: " << endl << endl;
                    estoque.ImprimeNomeOrdenadoUnd();
                    system("pause");
                    system("cls");
                    break;
                }

                case 9:
                {
                    //Imprime o estoque em ordem crescente (quantidades)
                    cout << "Estoque ordenado por quantidade em ordem crescente: " << endl << endl;
                    estoque.ImprimeQntOrdenadoUnd();
                    system("pause");
                    system("cls");
                    break;
                }

                case 10:
                {
                    //Salva o estoque no arquivo.txt
                    if(estoque.SalvarUnd())
                    {
                        cout << "O estoque foi salvo com sucesso." << endl;
                    }
                    else
                    {
                        cout << "Nao foi possivel salvar o estoque." << endl;
                    }
                    system("pause");
                    system("cls");
                    break;
                }

                case 11:
                {
                    //Retorna ao menu principal
                    //estoque.MenuPrincipal( );
                    system("cls");
                    opcaoEstoque = 0;
                    aux = 0;
                    break;
                }

                default:
                {
                    cout << "Opcao incorreta! Pressione enter para tentar novamente." << endl;
                    system("pause");
                    system("cls");
                    break;
                }
                }
            }
        }

        else if (opcaoEstoque == 2)
        {
            while(aux == 1)
            {
                system("cls");
                //Pede ao usuario que escolha umas das opções.
                cout<<"============== ESTOQUE LITRO! ==============="<<endl<<endl;
                cout <<"Agora, escolha uma das opcoes abaixo: "<<endl;
                cout<<"1 - Inserir uma nova cerveja ao estoque."<<endl;
                cout<<"2 - Adicionar unidade a um produto existente."<<endl;
                cout<<"3 - Pesquisar cerveja por nome."<<endl;
                cout<<"4 - Pesquisar cerveja por codigo."<<endl;
                cout<<"5 - Efetuar venda."<<endl;
                cout<<"6 - Remover cerveja por codigo."<<endl;
                cout<<"7 - Imprimir estoque."<<endl;
                cout<<"8 - Imprimir estoque ordenado por nome."<<endl;
                cout<<"9 - Imprimir estoque ordenado por quantidade."<<endl;
                cout<<"10 - Salvar o estoque em um arquivo .txt"<<endl;
                cout<<"11 - Retornar ao menu principal."<<endl;
                cout<<"0 - Encerrar o programa."<<endl;
                cout<<"Opcao escolhida -> "<<endl;

                cin >> opcao;
                system("cls");

                switch(opcao)
                {
                case 0:
                {
                    cout << "Encerrando o programa" << endl;
                    system("pause");
                    exit(0);
                }

                case 1:
                {
                    //inseri produtos ao estoque
                    CervejaLitro cervejal;
                    string nome, codigo, validade;
                    float preco;
                    int quantidade;

                    cout << "Insira os seguintes dados para realizar o cadastro: "<<endl;
                    cout << "Nome: ";
                    cin>>nome;
                    cervejal.setNome(nome);
                    cout << "Codigo: ";
                    cin>>codigo;
                    cervejal.setCodigo(codigo);
                    cout << "Preco: ";
                    cin>>preco;
                    cervejal.setPreco(preco);
                    cout<<"Quantidade: ";
                    cin>>quantidade;
                    cervejal.setQntLitro(quantidade);
                    cout<<"Prazo de Validade: ";
                    cin>>validade;
                    cervejal.setPValidade(validade);

                    cervejal.getNome();
                    cervejal.getCodigo();
                    cervejal.getPreco();
                    cervejal.getQntLitro();
                    cervejal.getPValidade();

                    if(estoque.InserirLitro(cervejal))
                    {
                        cout << "O produto foi cadastrado!" << endl;
                    }
                    else
                    {
                        cout << "Nao foi possivel adicionar ao estoque."<< endl;
                    }
                    system("pause");
                    system("cls");
                    break;
                }

                case 2:
                {
                    //Adiciona quantidades a produtos existentes no estoque
                    int quantidade;
                    string codigo;

                    cout<<"Entre com a quantidade do produto: "<<endl;
                    cin>>quantidade;
                    cout<<"Entre com o codigo do produto: "<<endl;
                    cin>>codigo;

                    if(estoque.AdicionarQntL(quantidade, codigo))
                    {
                        cout << "A quantidade foi acrescentada com sucesso!" << endl;
                    }
                    else
                    {
                        cout << "Nao foi possivel acrescentar."<< endl;
                    }
                    system("pause");
                    system("cls");
                    break;
                }

                case 3:
                {
                    //Pesquisa produto por nome
                    string nome;
                    cout << "Insira o nome da cerveja para realizar a pesquisa: ";
                    cin.ignore();
                    getline(cin, nome);

                    if(!estoque.PesquisarNomeLitro(nome))
                    {
                        cout << "O nome pesquisado nao esta na lista." << endl;
                    }
                    system("pause");
                    system("cls");
                    break;
                }

                case 4:
                {
                    //Pesquisa produto por código
                    string codigo;
                    cout << "Insira o codigo da cerveja para realizar a pesquisa: ";
                    cin.ignore();
                    getline(cin, codigo);

                    if(!estoque.PesquisarCodigoLitro(codigo))
                    {
                        cout << "O nome código nao esta na lista." << endl;
                    }
                    system("pause");
                    system("cls");
                    break;
                }

                case 5:
                {
                    //Efetua venda
                    int quantidade;
                    string codigo;
                    cout <<	"Entre com a quantidade do produto:"<<endl;
                    cin >> quantidade;
                    cout<<"Entre com o codigo do produto:"<<endl;
                    cin >> codigo;

                    if(estoque.EfetuarVendaLitro(codigo, quantidade))
                    {
                        cout <<"Venda efetuada com sucesso! Obrigadx pela compra." << endl;
                    }
                    else
                    {
                        cout << "Nao foi possivel efetuar a compra."<< endl;
                    }
                    system("pause");
                    system("cls");
                    break;
                }

                case 6:
                {
                    //Remove um produto do estoque
                    string codigo;
                    cout << "Insira codigo da cerveja que deseja remover da lista: ";
                    cin >> codigo;

                    if(estoque.RetirarCodigoLitro(codigo))
                    {
                        cout << "Cerveja removida com sucesso!" << endl;
                    }
                    else
                    {
                        cout << "O código informado nao pertence a nenhuma cerveja da lista." << endl;
                    }
                    system("pause");
                    system("cls");
                    break;
                }

                case 7:
                {
                    //Imprime o estoque
                    cout << "Estoque como foi inserido: " << endl << endl;
                    estoque.ImprimeLitro();
                    system("pause");
                    system("cls");
                    break;
                }

                case 8:
                {
                    //Imprime o estoque em ordem alfabética
                    cout << "Estoque ordenado por nome em ordem alfabetica: " << endl << endl;
                    estoque.ImprimeNomeOrdenadoLitro();
                    system("pause");
                    system("cls");
                    break;
                }

                case 9:
                {
                    //Imprime o estoque em ordem crescente (quantidades)
                    cout << "Estoque ordenado por quantidade em ordem crescente: " << endl << endl;
                    estoque.ImprimeQntOrdenadoLitro();
                    system("pause");
                    system("cls");
                    break;
                }

                case 10:
                {
                    //Salva o estoque no arquivo.txt
                    if(estoque.SalvarLitro())
                    {
                        cout << "O estoque foi salvo com sucesso." << endl;
                    }
                    else
                    {
                        cout << "Nao foi possivel salvar o estoque." << endl;
                    }
                    system("pause");
                    system("cls");
                    break;
                }

                case 11:
                {
                    //Retorna ao menu principal
                    system("cls");
                    opcaoEstoque = 0;
                    aux = 0;
                    break;
                }

                default:
                {
                    cout << "Opcao incorreta! Pressione enter para tentar novamente." << endl;
                    system("pause");
                    system("cls");
                    break;
                }
                }
            }
        }
    }
return 0;
}
