/* Calcula o salario de um funcionario em função do
   número de horas trabalhadas e do valor da hora */

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
//funções set para atribuir valor aos atributos
void Funcionario::setInscricao(double insc){
     inscricao = insc;
}

void Funcionario::setHorasTrab(float ht){
     horasTrab=ht;    
}

void Funcionario::setValorHora(float vh){
     valorHora=vh;    
}
//calculo do salário (com encapsulamento - isto significa que o salário do 
//funcionário será calculado somente com os valores fornecidos para o valor 
//da hora e horas trabalhadas do funcionário)
void Funcionario::calcSalario(){
     salario=horasTrab*valorHora;    
}
//função para retornar o valor do salário
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
    func1.calcSalario(); //os valores necessários para cálculo do salário são 
                      //obtidos a partir dos dados dos atributos do funcionário1
    cout<<endl<<"O salario do funcionario1 eh "<<fixed<< setprecision(2)<<
	   func1.getSalario()<<endl<<endl;
    
    return 0;
}

