#include "Agenda.h"

Agenda::Agenda(int tam){
	maxLista = tam>0?tam:0;
	ptr=new Pessoa[maxLista];
	t=0;
}
void Agenda::setNome(string name){
	nome=name;
}
void Agenda::setCPF(long int cpf){
	CPF = cpf;
}
void Agenda::setAgenda(Pessoa p){
	if (t<maxLista){
		ptr[t]=p;
		t++;				 
	}
}
		 
void Agenda::insereNove(int dddProc){ //insere o número 9 em todos os números com o DDD procurado
	for(int i=0;i<t;i++){
		if (ptr[i].getDDD() == dddProc)
			ptr[i].setTelefone(ptr[i].getTelefone()+900000000);	//900000000+88008800=988008800
	}
}
string Agenda::getNome() const{
	return nome;
}
long int Agenda::getCPF() const{
	return CPF;
}
void Agenda::imprimeAgenda() const{
	cout<<endl<<endl<<"APRESENTAÇÃO DA AGENDA TELEFÔNICA"<<endl<<endl;
	cout<<"Dono da Agenda = "<<nome<<endl;
	cout<<"CPF = "<<CPF<<endl<<endl;
	for (int i=0;i<t;i++){		
		cout<<"NOME "<<i+1<<": "<< ptr[i].getNome()<<endl;
		Endereco aux = ptr[i].getEndereco();
		cout<<"ENDEREÇO: "<<aux.rua<<" "<<aux.numero<<" "<<aux.bairro<<" "<<aux.CEP<<endl;
		cout<<"DDD: "<<ptr[i].getDDD()<<endl;
		cout<<"TELEFONE: "<<ptr[i].getTelefone()<<endl;
	}
	cout<<endl;
}
Agenda::~Agenda(){
	delete [] ptr;
}
