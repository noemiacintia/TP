#include "Cervejaria.cpp"
#include "CervejaUnd.cpp"
#include "CervejaLitro.cpp"
#include "Estoque.cpp"
#include <locale>
#include <cstdlib>
#include <cstdio>
#include <stdexcept>
using std::out_of_range;

using namespace std;

int main( ){
    setlocale (LC_ALL, "Portuguese");
    Estoque estoque;
    int aux = 1;
    int opcao;
	
	while(aux != 0){
		cout <<"Escolha uma das op��es abaixo: "<<endl;
		cout<<"1 - Inserir uma nova cerveja a lista."<<endl;
		cout<<"2 - Salvar a lista em um arquivo txt."<<endl;
		cout<<"3 - Pesquisar cerveja por nome."<<endl;
		cout<<"4 - Pesquisar cerveja por código."<<endl;
		cout<<"5 - Remover cerveja por código."<<endl;
		cout<<"6 - Imprimir estoque."<<endl;
		cout<<"7 - Imprimir estoque ordenado por nome."<<endl;
        cout<<"7 - Imprimir estoque ordenado por quantidade."<<endl;
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
				string nome, codigo;
				float preco;
                int quantidade; 
				
				cout << "Insira os seguintes dados para realizar o cadastro: ";
				cout << "\nNome: ";
				cin.ignore();
				getline(cin, nome);
				cout << "Código: ";
				getline(cin, codigo);
				cout << "Preço: ";
                cin>>preco;
                cout<<"Quantidade: ";
                cin>>quantidade;
				
				Cervejaria cervejaria(nome, codigo, preco);

				if(estoque.InserirUnd(cervejaria)){
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
				cout << "Insira cpf da pessoa que deseja remover da lista: ";
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
	return 0;
}