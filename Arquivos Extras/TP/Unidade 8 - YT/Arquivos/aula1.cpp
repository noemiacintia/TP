#include <iostream>
#include <fstream> // importa a biblioteca para nos permitir trabalhar com arquivos

using namespace std;

int main(){
    // definir o arquivo: ofstream, ifstream, fstream
    // ofstream: "o" de saída - define o arquivo como um tipo de saída (saindo do sistema
            // e entrando no arquivo)
    // ifstream: "i" de entrada (saindo do arquivo e entrando no programa)
    // fstream: entrada e saída

    ofstream arquivo; // variavel objeto para o arquivo
    // criar o arquivo externo pois não foi criado ainda
    // abrindo o arquivo - criando o arquivo
    arquivo.open("noemia.txt");
    // como defini como saida eu só posso armazenar algo nele
    arquivo << "Noêmia";
    arquivo << " linda";
    // sempre fechar o arquivo
    arquivo.close(); // libera a memória


    // adicionando sem sobreescrever:
    arquivo.open("noemia.txt", ios::app); // posiciona o cursor no final do arquivo e insere o texto
    arquivo << " aprendendo";
    arquivo.close();
    return 0;
}
