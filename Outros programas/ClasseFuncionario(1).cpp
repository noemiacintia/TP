/* Calcula o salario de um funcionario em fun��o do
   n�mero de horas trabalhadas e do valor da hora */

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    private:
      double inscricao;
      float horasTrab;
      float valorHora;
      float salario;
    public:
       void setInscricao(double);
       void setHorasTrab(float);
       void setValorHora(float);
       void calcSalario();
       float getSalario(void);
};
//fun��es set para atribuir valor aos atributos
void Funcionario::setInscricao(double insc){
     inscricao = insc;
}

void Funcionario::setHorasTrab(float ht){
     horasTrab=ht;    
}

void Funcionario::setValorHora(float vh){
     valorHora=vh;    
}
//calculo do sal�rio (com encapsulamento - isto significa que o sal�rio do 
//funcion�rio ser� calculado somente com os valores fornecidos para o valor 
//da hora e horas trabalhadas do funcion�rio)
void Funcionario::calcSalario(){
     salario=horasTrab*valorHora;    
}
//fun��o para retornar o valor do sal�rio
float Funcionario::getSalario(){
      return salario;     
}

int main(){
    Funcionario func1;
    double insc;
    float ht, vh;
    cout<<"Digite o valor da hora "<<endl;
    cin>>vh;
    /* Informa os dados do funcionario1*/
    cout<<endl<<"Digite o numero de inscricao do funcionario1"<<endl;
    cin>>insc;
    cout<<"Digite o numero de horas trabalhadas"<<endl;
    cin>>ht;
    /* Atribui os valores para cada atributo */
    func1.setInscricao(insc);
    func1.setValorHora(vh);
    func1.setHorasTrab(ht);

    /* Calcula e escreve o salario do funcionario1 */    
    func1.calcSalario(); //os valores necess�rios para c�lculo do sal�rio s�o 
                      //obtidos a partir dos dados dos atributos do funcion�rio1
    cout<<endl<<"O salario do funcionario1 eh "<<fixed<< setprecision(2)<<
	   func1.getSalario()<<endl<<endl;
    
    return 0;
}

