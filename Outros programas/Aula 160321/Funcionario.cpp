#include "Funcionario.h"

void Funcionario::setHorasTrab(float ht){
     horasTrab=ht;    
}
void Funcionario::setValorHora(float vh){
     valorHora=vh;    
}
void Funcionario::calcSalario(){
     salario=valorHora*horasTrab;    
}
float Funcionario::getSalario(){
      return salario;     
}
