#ifndef COMPLEXO_H
#define COMPLEXO_H
//Número complexo: z= x + yi  onde i=sqrt(-1)

class Complexo{
	int x;
	int y;
	
	public:
		Complexo(int=0, int=0);
		int getx() const;
		int gety() const;
		void multiplica(Complexo, Complexo);
		void soma(Complexo, Complexo);
		void imprime() const;
		~Complexo();  //neste caso é desnecessário
};

#endif