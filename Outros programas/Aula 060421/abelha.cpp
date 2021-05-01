#include "abelha.h"

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

int Abelha::total_abelhas = 0; // “definicao” da variavel static 
