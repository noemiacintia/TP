#include <iostream>
#include <locale>
#include<fstream>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Portuguese");
    /*ofstream arquivoS; // S de saída
    arquivoS.open("noemia.txt");
    arquivoS << "Noêmia";
    arquivoS << " linda";
    arquivo.close();
    */
    ifstream arquivoE; // E de entrada
    // armazena a linha lida
    string linha;
    arquivoE.open("noemia.txt");
    // verificando se o arqujvo foi aberto
    if(arquivoE.is_open())
    {
        // ler a linha e armazena em linha
        while(getline(arquivoE, linha)) // ler até o final da linha
        {
            cout << linha << endl;
        }
        arquivoE.close();
    }
    else
    {
        cout << "Não foi possível abrir o arquivo" << endl;
    }
    return 0;
}
