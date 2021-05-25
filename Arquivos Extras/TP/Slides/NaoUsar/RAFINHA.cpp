#include <fstream>//Para opera��o do arquivo
#include <iostream>//Para entrada e sa�da
#include <locale>//Biblioteca de portugu�s

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    ofstream myFile; //Objeto para leitura
    ifstream file; //Objeto para escrever
    char ch[30];
    char text;

    cout<<"Digite o texto"<<endl;
    cin.getline(ch,30);  //Fun��o Getline.

    //Abrindo arquivo para escrita
    myFile.open("ArquivoBeg.txt", ios::out);
    if(myFile) //Verificador de erros:
    {
        myFile<<ch;
        cout<<"Sucesso no armazenamento:"<<endl;
    }
    else
        cout<<"Erro ao abrir o arquivo!"<<endl;
    myFile.close(); //Fechar arquivo
    //Abrindo arquivo para leitura
    file.open("ArquivoBeg.txt", ios::in);
    if(file) //Verificar erro
    {
        file.seekg(7, ios::beg);/*Pule os primeiros
        7 bytes*/
        cout << endl;
        cout<<"A sa�da ap�s pular os 7 bytes �: ";

        while(!file.eof())/*Leia os dados at� o final do arquivo: */
        {
            file.get(text); //Ler os dados
            cout <<text;     //Mostrar os dados
        }
        file.close(); //Arquivo fechado
    }
    else
        cout<<"Erro ao abrir o arquivo!"<<endl;
    return 0;
}
