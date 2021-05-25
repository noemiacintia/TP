#include "setorPessoal.cpp"
#include <cstdlib>

int main()
{
    setlocale(LC_ALL, "");

    Funcionario auxiliar;
    string aux;
    int aux2;
    float aux3;
    int qnt = 0, qntmax, opc;
    cout << "Cria��o da empresa..." << endl;
    cout << "Digite a quantidade de funcion�rios: ";
    cin >> qntmax;

    SetorPessoal jpInc(qntmax);

    while(1){
        system("cls");
        cout << "1 - Adiconar funcion�rio" << endl
             << "2 - Mostrar folha de pagamento" << endl
             << "3 - Valor total da folha de pagamento" << endl
             << "4 - Verificar funcion�rio com maior sal�rio" << endl
             << "5 - Mostrar funcion�rios por departamento" << endl
             << "6 - Mostrar funcion�rios por cargo" << endl
             << "7 - Mostrar folha de pagamento por ordem de sal�rio" << endl
             << "8 - Sair..." << endl;

        cout << endl << "Digite a op��o: ";
        cin >> opc;

        if(opc == 8)
            break;

        system("cls");

        switch(opc){
        case 1:
            if(qnt >= qntmax){
                cout << "Setor cheio!!!" << endl;
                break;
            }
            cout << "Digite o nome do funcion�rio: ";
            cin.ignore();
            getline(cin, aux);
            auxiliar.setNome(aux);
            cout << "Digite a matr�cula de " << auxiliar.getNome() << ": ";
            cin >> aux2;
            auxiliar.setMat(aux2);
            cout << "Digite o sal�rio de " << auxiliar.getNome() << ": ";
            cin >> aux3;
            auxiliar.setSal(aux3);
            cout << "Digite o departamento de " << auxiliar.getNome() << ": ";
            cin >> aux2;
            auxiliar.setDep(aux2);
            cout << "Digite o cargo de " << auxiliar.getNome() << ": ";
            cin.ignore();
            getline(cin, aux);
            auxiliar.setFunc(aux);
            //adiciona um funcion�rio ao cadastro
            jpInc.addFunc(auxiliar);
            qnt++;
            break;
        case 2:
            if(qnt == 0){
                cout << "N�o h� Funcion�rios!!!" << endl;
                break;
            }
            jpInc.imprimeFolha();
            break;
        case 3:
            if(qnt == 0){
                cout << "N�o h� Funcion�rios!!!" << endl;
                break;
            }
            cout << fixed << setprecision(2);
            cout << "Valor total da folha de pagamento: R$" << jpInc.valorFolha() << endl;
            break;
        case 4:
            if(qnt == 0){
                cout << "N�o h� Funcion�rios!!!" << endl;
                break;
            }
            cout << "Funcion�rio com maior sal�rio: " << jpInc.MaiorSalario() << endl;
            break;
        case 5:
            if(qnt == 0){
                cout << "N�o h� Funcion�rios!!!" << endl;
                break;
            }
            cout << "Digite um departamento: ";
            cin >> aux2;
            jpInc.mostraPorDep(aux2);
            break;
        case 6:
            if(qnt == 0){
                cout << "N�o h� Funcion�rios!!!" << endl;
                break;
            }
            cout << "Digite um cargo a ser pesquisado: " << endl;
            cin.ignore();
            getline(cin, aux);
            jpInc.imprimePorFuncao(aux);
            break;
        case 7:
            jpInc.imprimePorSalario();
            break;
        default:
            cout << "Op��o inv�lida!!!" << endl;
            break;
        }
        system("pause");
    }
    return 0;
}
