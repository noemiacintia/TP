#ifndef INGRESSO_H // Classe base ingresso.
#define INGRESSO_H

class Ingresso{
	protected: //Atributo é protected para poder ser utilizado nas classes derivadas
		float valor;
    public:
    	Ingresso(float=0); //Construtor parametrizado
    	void setValor(float); //Função-membro de modificação do objeto.
    	float getValor()const; //Função-membro de acesso ao objeto.
    	void imprime()const; //Função para imprimir as informações ao usuário.
};

#endif