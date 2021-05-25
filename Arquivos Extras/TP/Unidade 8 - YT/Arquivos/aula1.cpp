#include <iostream>
#include <fstream> // importa a biblioteca para nos permitir trabalhar com arquivos

using namespace std;

int main(){
    // definir o arquivo: ofstream, ifstream, fstream
    // ofstream: "o" de sa�da - define o arquivo como um tipo de sa�da (saindo do sistema
            // e entrando no arquivo)
    // ifstream: "i" de entrada (saindo do arquivo e entrando no programa)
    // fstream: entrada e sa�da

    ofstream arquivo; // variavel objeto para o arquivo
    // criar o arquivo externo pois n�o foi criado ainda
    // abrindo o arquivo - criando o arquivo
    arquivo.open("noemia.txt");
    // como defini como saida eu s� posso armazenar algo nele
    arquivo << "No�mia";
    arquivo << " linda";
    // sempre fechar o arquivo
    arquivo.close(); // libera a mem�ria


    // adicionando sem sobreescrever:
    arquivo.open("noemia.txt", ios::app); // posiciona o cursor no final do arquivo e insere o texto
    arquivo << " aprendendo";
    arquivo.close();
    return 0;
}
