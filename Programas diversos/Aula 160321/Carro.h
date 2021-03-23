#ifndef CARRO_H
#define CARRO_H

class Carro{
	Pessoa proprietario;
	string marca;
	int anoFab;
	string placa;
	float tanque; //indica a quantidade de litros no tanque
	int quilometragem; //indica a quilometragem do carro
	float consumo; //indica o consumo do combustível - km/l
	bool temAutonomia(int);
	
	public:
		Carro(Pessoa, string, int, string, float);
		void setProprietario(Pessoa);
		void setMarca(string);
		void setAnoFab(int);
		void setPlaca(string);
		Pessoa getProprietario();
		string getMarca();
		int getAnoFab();
		string getPlaca();
		void abastece(int); //tem que fornecer a quantidade de litros
		void percurso(int); //tem que fornecer quantos quilometros percorreu
		float getTanque();
		int getQuilometragem();
};
#endif
