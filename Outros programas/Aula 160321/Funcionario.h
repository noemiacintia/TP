#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

class Funcionario {
   private:
      float horasTrab;
      float valorHora;
      float salario;
    public:
       void setHorasTrab(float);
       void setValorHora(float);
       void calcSalario();
       float getSalario(void);
};

#endif
