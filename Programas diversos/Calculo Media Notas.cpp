/* Calcular a m�dia do aluno usando uma Classe. Informe a primeira, segunda e terceira nota.
 Imprimir a m�dia do aluno informando se ele foi aprovado, reprovado ou vai fazer final.
*/

#include <iostream>
#include <iomanip>
#include <locale>  //biblioteca necess�ria para caracteres em portugu�s

using namespace std;

class Aluno{

	float n1, n2, n3, media;
	string nome;
	void calculaMedia(); /*O m�todo calculaMedia � private porque s� ser� usado quando for solicitado
						o valor da m�dia no programa principal -  */
	
  public:
 // 	Aluno();
  	void setNotas(float, float, float);
  	void setNome(string);
  	float getNota1();
  	float getNota2();
	float getNota3();
	float getMedia();
	string getNome();
	string situacao();  	
};

/*
Aluno::Aluno(){
	n1=n2=n3=0.0;
}
*/
void Aluno::setNotas(float nota1, float nota2, float nota3){
	n1 = (nota1>=0 && nota1<=10) ? nota1 : 0;
	n2 = (nota2>=0 && nota2<=10) ? nota2 : 0;
	n3 = (nota3>=0 && nota3<=10) ? nota3 : 0;
}

void Aluno::setNome(string n){
	nome = n;
}

float Aluno::getNota1(){
	return n1;
}

float Aluno::getNota2(){
	return n2;
}

float Aluno::getNota3(){
	return n3;
}

string Aluno::getNome(){
	return nome;
}

float Aluno::getMedia(){
	calculaMedia();  //Este m�todo � private
	return media;
}

/* Por op��o de implementa��o, este m�todo s� ser� utilizado quando tiver que retornar a m�dia
   sendo assim, ele ser� private e ser� chamado no m�todo getMedia() */
void Aluno::calculaMedia(){
	media = (n1+n2+n3)/3.0;
}

/* este m�todo retorna a situa��o do aluno (uma string) - Aprovado, Final ou Reprovado */
string Aluno::situacao(){
	if (media >=7.0)
		return "Aprovado";
	else if (media >=4.0)
		return "Fazer final";
	else
		return "Reprovado";
	
}


int main(){
	/*seleciona o alfabeto Portugu�s (acentos e caracteres especiais) que s�o utilizados no cout */
	setlocale(LC_ALL,"Portuguese");
	
	Aluno aluno1, aluno2, aluno3; //cria 3 objetos da classe Aluno
	
	string name;   //vari�veis auxiliares para leitura de valores que ser�o enviados ao objeto Aluno1
	float nota1, nota2, nota3;
	
	cout<<"Digite o nome do aluno: ";
	cin>>name;
	cout<<"Digite as tr�s notas do aluno: ";
	cin>>nota1>>nota2>>nota3;
	aluno1.setNome(name);
	aluno1.setNotas(nota1,nota2,nota3);
	aluno2.setNome("Maria");
	aluno2.setNotas(3, 4, 4.5);
	aluno3.setNome("Jos�");
	aluno3.setNotas(4, 3, 8);
	
	cout<<fixed<<setprecision(2);
	cout<<"O aluno "<<aluno1.getNome()<<" teve m�dia "<<aluno1.getMedia()<<endl;
	cout<<"Situa��o do aluno: "<<aluno1.situacao()<<endl<<endl;
	
	cout<<"A aluna "<<aluno2.getNome()<<" teve m�dia "<<aluno2.getMedia()<<endl;
	cout<<"Situa��o do aluno: "<<aluno2.situacao()<<endl<<endl;
	
	cout<<"O aluno "<<aluno3.getNome()<<" teve m�dia "<<aluno3.getMedia()<<endl;
	cout<<"Situa��o do aluno: "<<aluno3.situacao()<<endl<<endl;
	
	return 0;
	
}