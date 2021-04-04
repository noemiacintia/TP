#include "Distancia.h"

Distancia::Distancia(){
	distancia=0.0;
	cidade1.setNome("");
	cidade2.setNome("");
}
void Distancia::setCidades(Cidade cidade1, Cidade cidade2){
	this->cidade1= cidade1;
	this->cidade2= cidade2;
}
void Distancia::calculaDist(){
	float dla;  //diferença de latitude
	float dlo;  //diferença de longitude
	dla= (abs(cidade2.getlatG()-cidade1.getlatG())*60
			+abs(cidade2.getlatM()-cidade1.getlatM())*1
			+abs(cidade2.getlatS()-cidade1.getlatS())/60.0)*1.852;
	dlo= abs((cidade2.getlonG()-cidade1.getlonG())*60
			+abs(cidade2.getlonM()-cidade1.getlonM())*1
			+abs(cidade2.getlonS()-cidade1.getlonS())/60.0)*1.852;
	distancia = sqrt(pow(dla,2)+ pow(dlo,2));
}
void Distancia::imprimeDistancia(){
	cout<<"A distância geográfica entre "<<cidade1.getNome()<<
			" e "<<cidade2.getNome()<<" é "<<
			fixed<<setprecision(2)<<distancia<<" km"<<endl;
}	
