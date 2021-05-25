#include <iostream>
using namespace std;

class Aviao
{
public:
    int vel=0; // parametros
    int velMax;
    string tipo;
    void ini(int tp);// portotipar o metodo
private:

};

void Aviao::ini(int tp){// declarando o metodo
    if(tp==1){
        this->velMax=800;
        this->tipo="Jato";
    }else if(tp==2){
        this->velMax=350;
        this->tipo="Monomotor";
    }else if(tp==3){
        this->velMax=180;
        this->tipo="Planador";
    }
}
int main()
{
    Aviao *av1=new Aviao(); // instanciamos um novo objeto
    Aviao *av2=new Aviao();
    av1->ini(1); // chamamos o metodo ini (inicialização)
    av2->ini(2);
    cout << av1->velMax << endl; //imprimir o valor da propriedade velMax relacionada ao objeto av1
    cout << av2->velMax;
    return 0;
}
