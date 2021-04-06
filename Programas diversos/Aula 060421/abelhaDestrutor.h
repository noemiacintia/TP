#ifndef ABELHADESTRUTOR_H
#define ABELHADESTRUTOR_H

class Abelha{ 
	private: 
		string abelha_nome; //nome da abelha 
		static int total_abelhas; // total de abelhas criadas 				                           
									// NOTA: 'declaracao' da variavel static 
   public: 
		Abelha( ); //Construtor sem argumento
		Abelha(string); //Construtor com 1 argumento 
		string nome();
		static int total_de_abelhas(); // retorna o numero total de  		    
						  			   // abelhas existentes 
		~Abelha();	
 }; 
 #endif