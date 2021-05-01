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
			ptr[i].setTelefone(ptr[i].getTelefone()+900000000);	
	}
}
string Agenda::getNome() const{
	return nome;
}
long int Agenda::getCPF() const{
	return CPF;
}
void Agenda::imprimeAgenda() const{
	cout<<"Dono da Agenda = "<<nome<<endl;
	cout<<"CPF = "<<CPF<<endl;
	cout<<endl<<"NOME           ENDEREÇO               DDD    TELEFONE"<<endl<<endl;
	for (int i=0;i<t;i++){
		
		cout<< ptr[i].getNome()<<" ";
		Endereco aux = ptr[i].getEndereco();
		cout<<aux.rua<<" "<<aux.numero<<" "<<aux.bairro<<" "<<aux.CEP<<" ";
		cout<<ptr[i].getDDD()<<" "<<ptr[i].getTelefone()<<endl;
	}
	cout<<endl;
}
Agenda::~Agenda(){
	delete [] ptr;
}
