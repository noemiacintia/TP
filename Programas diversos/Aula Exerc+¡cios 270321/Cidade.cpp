#include "Cidade.h"

Cidade::Cidade(){
	nome="";
	latG=0;
	latM=0;
	latS=0;
	lonG=0;
	lonM=0;
	lonS=0;
}
Cidade::Cidade(string nome, int latG, int latM, int latS, int lonG, int lonM, int lonS ){
	this->nome= nome;
	this->latG= latG;
	this->latM= latM;
	this->latS= latS;
	this->lonG= lonG;
	this->lonM= lonM;
	this->lonS= lonS;
}
void Cidade::setNome(string nome){
	this->nome= nome;
}
string Cidade::getNome(){
	return nome;
}
void Cidade::setlatG(int latG){
	this->latG= latG;
}
int Cidade::getlatG(){
	return latG;
}	
void Cidade::setlatM(int latM){
	this->latM=latM;
}
int Cidade::getlatM(){
	return latM;
}
void Cidade::setlatS(int latS){
	this->latS=latS;
}
int Cidade::getlatS(){
	return latS;
}
void Cidade::setlonG(int lonG){
	this->lonG= lonG;
}
int Cidade::getlonG(){
	return lonG;
}	
void Cidade::setlonM(int lonM){
	this->lonM=lonM;
}
int Cidade::getlonM(){
	return lonM;
}
void Cidade::setlonS(int lonS){
	this->lonS=lonS;
}
int Cidade::getlonS(){
	return lonS;
}