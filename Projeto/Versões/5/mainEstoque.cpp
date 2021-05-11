#include "Cervejaria.cpp"
#include "CervejaUnd.cpp"
#include "CervejaLitro.cpp"
#include "Estoque.cpp"

#include <locale>
#include <cstdlib>
#include <cstdio>


using namespace std;

int main( ){
    setlocale (LC_ALL, "Portuguese");
    Estoque estoque;
    int aux = 1;
    int opcao, opcao1;

    cout << "Você quer ir para o estoque de \n[1] Unidade\n [2]Litro" << endl;
    cin >> opcao1;

    if(opcao1==1){
        while(aux != 0){
		cout <<"Escolha uma das op��es abaixo: "<<endl;
		cout<<"1 - Inserir uma nova cerveja a lista."<<endl;
		cout<<"2 - Salvar a lista em um arquivo dat."<<endl;
		cout<<"3 - Pesquisar cerveja por nome."<<endl;
		cout<<"4 - Pesquisar cerveja por código."<<endl;
		cout<<"5 - Remover cerveja por código."<<endl;
		cout<<"6 - Imprimir estoque."<<endl;
		cout<<"7 - Imprimir estoque ordenado por nome."<<endl;
        cout<<"8 - Imprimir estoque ordenado por quantidade."<<endl;
		cout<<"0 - Encerrar o programa."<<endl;
		cout<<"Opção escolhida --> "<<endl;

		cin >> opcao;

		system("cls");
		switch(opcao){
			case 0:
			{
				cout << "Voc� quer ir embora. ;-;" << endl;
				system("pause");
				aux = 0;
				break;
			}

			case 1:
			{
				CervejaUnd cervejaund;
				string nome, codigo;
				float preco;
                int quantidade;

				cout << "Insira os seguintes dados para realizar o cadastro: ";
				cout << "\nNome: ";
				cin>>nome;
				//cin.ignore();
				//getline(cin, nome);
				cervejaund.setNome(nome);
				cout << "Código: ";
				cin>>codigo;
				//getline(cin, codigo);
				cervejaund.setCodigo(codigo);
				cout << "Preço: ";
                cin>>preco;
				cervejaund.setPreco(preco);
                cout<<"Quantidade: ";
                cin>>quantidade;
				cervejaund.setQntUnidade(quantidade);

				cervejaund.getNome();
				cervejaund.getCodigo();
				cervejaund.getPreco();
				cervejaund.getQntUnidade();

				if(estoque.InserirUnd(cervejaund)){
					cout << "O produto foi cadastrado!" << endl;
                }
                else{
					cout << "O cadastro não pode ser realizado!" << endl;
                }
                system("pause");
				system("cls");
				break;
            }

			case 2:
			{
				if(estoque.SalvarUnd()){
					cout << "O estoque est� salvo." << endl;
                }
                else{
					cout << "N�o foi poss�vel salvar o estoque." << endl;
                }
				system("pause");
				system("cls");
				break;
			}

			case 3:
			{
				string nome;
				cout << "Insira um nome para realizar a pesquisa: ";
				cin.ignore();
				getline(cin, nome);

				if(!estoque.PesquisarNomeUnd(nome)){
					cout << "O nome pesquisado n�o est� na lista." << endl;
                }
				system("pause");
				system("cls");
				break;
			}

			case 4:
			{
				string codigo;
				cout << "Insira o código para realizar a pesquisa: ";
				cin.ignore();
				getline(cin, codigo);

				if(!estoque.PesquisarCodigoUnd(codigo)){
					cout << "O nome código n�o est� na lista." << endl;
                }
				system("pause");
				system("cls");
				break;
			}

			case 5:
			{
				string codigo;
				cout << "Insira codigo da cerveja que deseja remover da lista: ";
				cin >> codigo;
				if(estoque.RetirarCodigoUnd(codigo)){
					cout << "Cerveja removida com sucesso!" << endl;
                }
				else{
					cout << "O código informado n�o pertence a nenhuma cerveja da lista." << endl;
                }
                system("pause");
				system("cls");
				break;
			}

			case 6:
			{
				cout << "Estoque como foi inserido: " << endl << endl;
				estoque.ImprimeUnd();
				system("pause");
				system("cls");
				break;
			}

			case 7:
			{
				cout << "Estoque ordenado por nome em ordem alfab�tica: " << endl << endl;
				estoque.ImprimeNomeOrdenadoUnd();
				system("pause");
				system("cls");
				break;
			}

            case 8:
			{
				cout << "Estoque ordenado por quantidade em ordem crescente: " << endl << endl;
				estoque.ImprimeQntOrdenadoUnd();
				system("pause");
				system("cls");
				break;
			}

			default:
			{
				cout << "Op��o incorreta! Pressione enter para tentar novamente." << endl;
				system("pause");
				system("cls");
				break;
			}
		}
	}
    }
    else if(opcao1==2){
        while(aux != 0){
		cout <<"Escolha uma das op��es abaixo: "<<endl;
		cout<<"1 - Inserir uma nova cerveja a lista."<<endl;
		cout<<"2 - Salvar a lista em um arquivo dat."<<endl;
		cout<<"3 - Pesquisar cerveja por nome."<<endl;
		cout<<"4 - Pesquisar cerveja por código."<<endl;
		cout<<"5 - Remover cerveja por código."<<endl;
		cout<<"6 - Imprimir estoque."<<endl;
		cout<<"7 - Imprimir estoque ordenado por nome."<<endl;
        cout<<"8 - Imprimir estoque ordenado por quantidade."<<endl;
		cout<<"0 - Encerrar o programa."<<endl;
		cout<<"Op��o escolhida --> "<<endl;

		cin >> opcao;

		system("cls");
		switch(opcao){
			case 0:
			{
				cout << "Voc� quer ir embora. ;-;" << endl;
				system("pause");
				aux = 0;
				break;
			}

			case 1:
			{
				CervejaLitro cervejal;
				string nome, codigo;
				float preco;
                int quantidade;

				cout << "Insira os seguintes dados para realizar o cadastro: ";
				cout << "\nNome: ";
				cin>>nome;
				//cin.ignore();
				//getline(cin, nome);
				cervejal.setNome(nome);
				cout << "Código: ";
				cin>>codigo;
				//getline(cin, codigo);
				cervejal.setCodigo(codigo);
				cout << "Preço: ";
                cin>>preco;
				cervejal.setPreco(preco);
                cout<<"Quantidade: ";
                cin>>quantidade;
				cervejal.setQntLitro(quantidade);

				cervejal.getNome();
				cervejal.getCodigo();
				cervejal.getPreco();
				cervejal.getQntLitro();

				if(estoque.InserirLitro(cervejal)){
					cout << "O produto foi cadastrado!" << endl;
                }
                else{
					cout << "O cadastro não pode ser realizado!" << endl;
                }
                system("pause");
				system("cls");
				break;
            }

			case 2:
			{
				if(estoque.SalvarLitro()){
					cout << "O estoque est� salvo." << endl;
                }
                else{
					cout << "N�o foi poss�vel salvar o estoque." << endl;
                }
				system("pause");
				system("cls");
				break;
			}

			case 3:
			{
				string nome;
				cout << "Insira um nome para realizar a pesquisa: ";
				cin.ignore();
				getline(cin, nome);

				if(!estoque.PesquisarNomeLitro(nome)){
					cout << "O nome pesquisado n�o est� na lista." << endl;
                }
				system("pause");
				system("cls");
				break;
			}

			case 4:
			{
				string codigo;
				cout << "Insira o código para realizar a pesquisa: ";
				cin.ignore();
				getline(cin, codigo);

				if(!estoque.PesquisarCodigoLitro(codigo)){
					cout << "O nome código n�o est� na lista." << endl;
                }
				system("pause");
				system("cls");
				break;
			}

			case 5:
			{
				string codigo;
				cout << "Insira o código da cerveja que deseja remover da lista: ";
				cin >> codigo;
				if(estoque.RetirarCodigoLitro(codigo)){
					cout << "Cerveja removida com sucesso!" << endl;
                }
				else{
					cout << "O código informado não pertence a nenhuma cerveja da lista." << endl;
                }
                system("pause");
				system("cls");
				break;
			}

			case 6:
			{
				cout << "Estoque como foi inserido: " << endl << endl;
				estoque.ImprimeLitro();
				system("pause");
				system("cls");
				break;
			}

			case 7:
			{
				cout << "Estoque ordenado por nome em ordem alfab�tica: " << endl << endl;
				estoque.ImprimeNomeOrdenadoLitro();
				system("pause");
				system("cls");
				break;
			}

            case 8:
			{
				cout << "Estoque ordenado por quantidade em ordem crescente: " << endl << endl;
				estoque.ImprimeQntOrdenadoLitro();
				system("pause");
				system("cls");
				break;
			}

			default:
			{
				cout << "Opção incorreta! Pressione enter para tentar novamente." << endl;
				system("pause");
				system("cls");
				break;
			}
		}
	}
    }
	return 0;
}
