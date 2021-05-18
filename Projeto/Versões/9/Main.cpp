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

	cout<<"============================================================================="<<endl;
	cout<<"============================================================================="<<endl;
	cout<<"=========== Bem vindx ao estoque da Cervejaria Artesanal Beer's++ ==========="<<endl;
	cout<<"============================================================================="<<endl;
	cout<<"============================================================================="<<endl;

	system("pause");
	system("cls");

	estoque.MenuPrincipal( );
    ofstream arquivo;
    arquivo.open("EstoqueUnidade.txt");
	cin>>opcao1;

		if(opcao1==1){
			while(aux != 0){
			system("cls");
			cout<<"============== ESTOQUE UNIDADE! ==============="<<endl<<endl;
			cout <<"Agora, escolha uma das opcoes abaixo: "<<endl;
			cout<<"1 - Inserir uma nova cerveja ao estoque."<<endl;
			cout<<"2 - Salvar o estoque em um arquivo .dat."<<endl;
			cout<<"3 - Pesquisar cerveja por nome."<<endl;
			cout<<"4 - Pesquisar cerveja por codigo."<<endl;
			cout<<"5 - Remover cerveja por codigo."<<endl;
			cout<<"6 - Imprimir estoque."<<endl;
			cout<<"7 - Imprimir estoque ordenado por nome."<<endl;
			cout<<"8 - Imprimir estoque ordenado por quantidade."<<endl;
			cout<<"9 - Efetuar venda."<<endl;
			cout<<"10 - Retornar ao menu principal."<<endl;
			cout<<"0 - Encerrar o programa."<<endl;
			cout<<"Opção escolhida --> "<<endl;

			cin >> opcao;
			system("cls");

				switch(opcao){
					case 0:{
						cout << "Deseja encerrar o programa?" << endl;
						system("pause");
						aux = 0;
						break;
					}

					case 1:{
						CervejaUnd cervejaund;
						string nome, codigo, validade;
						float preco;
						int quantidade;

						cout << "Insira os seguintes dados para realizar o cadastro: "<<endl;
						cout << "Nome: ";
						cin>>nome;
						cervejaund.setNome(nome);
						cout << "Código: ";
						cin>>codigo;
						cervejaund.setCodigo(codigo);
						cout << "Preço: ";
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

						if(estoque.InserirUnd(cervejaund)){
							cout << "O produto foi cadastrado!" << endl;
						}
						else{
							cout << "Foram adicionadas "<<cervejaund.getQntUnidade()<<"ao estoque."<< endl;
						}
						system("pause");
						system("cls");
						break;
					}

					case 2:{
						if(estoque.SalvarUnd()){
							cout << "O estoque esta salvo." << endl;
						}
						else{
							cout << "N�o foi poss�vel salvar o estoque." << endl;
						}
						system("pause");
						system("cls");
						break;
					}

					case 3:{
						string nome;
						cout << "Insira o nome da cerveja para realizar a pesquisa: ";
						cin.ignore();
						getline(cin, nome);

						if(!estoque.PesquisarNomeUnd(nome)){
							cout << "O nome pesquisado n�o est� na lista." << endl;
						}
						system("pause");
						system("cls");
						break;
					}

					case 4:{
						string codigo;
						cout << "Insira o código da cerveja para realizar a pesquisa: ";
						cin.ignore();
						getline(cin, codigo);

						if(!estoque.PesquisarCodigoUnd(codigo)){
							cout << "O nome código n�o est� na lista." << endl;
						}
						system("pause");
						system("cls");
						break;
					}

					case 5:{
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

					case 6:{
						cout << "Estoque como foi inserido: " << endl << endl;
						estoque.ImprimeUnd();
						system("pause");
						system("cls");
						break;
					}

					case 7:{
						cout << "Estoque ordenado por nome em ordem alfab�tica: " << endl << endl;
						estoque.ImprimeNomeOrdenadoUnd();
						system("pause");
						system("cls");
						break;
					}

					case 8:{
						cout << "Estoque ordenado por quantidade em ordem crescente: " << endl << endl;
						estoque.ImprimeQntOrdenadoUnd();
						system("pause");
						system("cls");
						break;
					}

					case 9:{
						int quantidade;
						string codigo;
						cout <<	"Entre com a quantidade e o codigo das cervejas: "<<endl;
						cin >> quantidade >> codigo;

						//estoque.EfetuarVendaUnd(codigo, quantidade);
					}

					case 10:{
						estoque.MenuPrincipal( );
						cin>>opcao1;
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
			system("cls");
			cout<<"============== ESTOQUE LITRO! ==============="<<endl<<endl;
			cout <<"Agora, escolha uma das opcoes abaixo: "<<endl;
			cout<<"1 - Inserir uma nova cerveja ao estoque."<<endl;
			cout<<"2 - Salvar o estoque em um arquivo .dat."<<endl;
			cout<<"3 - Pesquisar cerveja por nome."<<endl;
			cout<<"4 - Pesquisar cerveja por codigo."<<endl;
			cout<<"5 - Remover cerveja por codigo."<<endl;
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
						cout << "Deseja encerrar o programa?" << endl;
						system("pause");
						aux = 0;
						break;
					}

					case 1:
					{
						CervejaLitro cervejal;
						string nome, codigo, validade;
						float preco;
						int quantidade;

						cout << "Insira os seguintes dados para realizar o cadastro: "<<endl;
						cout << "Nome: ";
						cin>>nome;
						cervejal.setNome(nome);
						cout << "Código: ";
						cin>>codigo;
						cervejal.setCodigo(codigo);
						cout << "Preço: ";
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

						if(estoque.InserirLitro(cervejal)){
							cout << "O produto foi cadastrado!" << endl;
						}
						else{
							cout << "O cadastro NAO pode ser realizado!" << endl;
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
						cout << "Insira o nome da cerveja para realizar a pesquisa: ";
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
						cout << "Insira o código da cerveja para realizar a pesquisa: ";
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
