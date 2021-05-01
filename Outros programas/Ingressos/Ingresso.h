#ifndef INGRESSO_H // Classe base ingresso.
#define INGRESSO_H

class Ingresso{
	protected: //Atributo � protected para poder ser utilizado nas classes derivadas
		float valor;
    public:
    	Ingresso(float=0); //Construtor parametrizado
    	void setValor(float); //Fun��o-membro de modifica��o do objeto.
    	float getValor()const; //Fun��o-membro de acesso ao objeto.
    	void imprime()const; //Fun��o para imprimir as informa��es ao usu�rio.
};

#endif