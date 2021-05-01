   #include <iostream>  
      
   using std::cout;
   using std::endl;
      

class Motor {
        float torque;
        long int rotacao;
        float potencia;
     public:
         Motor ();
         void alterarTorque (float);
         void alterarRotacao (long int);
         void calcularPotencia();
         float getPotencia (void);
                       
};

Motor :: Motor() {
		torque = 0.0;
		rotacao = 0;
		potencia = 0.0;
	}

void Motor :: alterarTorque (float t) {
		torque = t;
	}

void Motor :: alterarRotacao (long int r) {
		rotacao = r;
	}

void Motor :: calcularPotencia () {
		potencia = (2 * 3.1416 * rotacao * torque)/60.75;
	}

float Motor :: getPotencia () {
		return potencia;
	}

int main() {
	class Motor motorBMW;
    motorBMW.alterarTorque(9.7);
    motorBMW.alterarRotacao(5750);
    motorBMW.calcularPotencia();
	cout<<"A potencia do motor eh: "<<motorBMW.getPotencia()<<endl;

    return 0;

}
