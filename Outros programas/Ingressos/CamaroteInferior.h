#ifndef CAMAROTEINFERIOR_H //Classe derivada da classe Classe Ingresso vip.
#define CAMAROTEINFERIOR_H

class CamaroteInferior: public IngressoVip{
	private:
		string localizacao;
    public:
    	CamaroteInferior(float=0, float=0, string="");
    	void setLocalizacao(string);
    	string getLocalizacao()const;
    	void imprime()const;
};

#endif