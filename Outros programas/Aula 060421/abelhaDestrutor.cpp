#include "abelhaDestrutor.h"

Abelha::Abelha( ) {
		abelha_nome = "[nome desconhecido]"; 
  		total_abelhas++; 
} 
Abelha::Abelha(string nome) { 
		abelha_nome = nome; 
		total_abelhas++; 
} 
string Abelha::nome() {
		return abelha_nome; 
}

int Abelha::total_de_abelhas() { // retorna o numero total de  		    
			return total_abelhas;	       // abelhas existentes 	
		}
Abelha::~Abelha(){
	total_abelhas--;
}

int Abelha::total_abelhas = 0; // “definicao” da variavel static 
