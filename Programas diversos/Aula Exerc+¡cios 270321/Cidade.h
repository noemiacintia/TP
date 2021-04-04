#ifndef CIDADE_H
#define CIDADE_H

class Cidade{
	string nome;
	int latG,latM,latS;
	int lonG, lonM,lonS;
  public:
  	Cidade();
	Cidade(string, int, int, int, int, int, int);
	void setNome(string);
	string getNome();
	void setlatG(int);
	int getlatG();	
	void setlatM(int);
	int getlatM();
	void setlatS(int);
	int getlatS();
	void setlonG(int);
	int getlonG();	
	void setlonM(int);
	int getlonM();
	void setlonS(int);
	int getlonS();
};

#endif