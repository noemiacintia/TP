#include "Estoque.h"
#include "Sobrecarga.h"

Estoque::Estoque(){
    CervejaUnd cerveja;
	ifstream arquivo; // Criando um arquivo apenas para leitura.
	arquivo.open("EstoqueUnidade.txt"); // Abrindo o arquivo de leitura.

	if(arquivo.is_open()) // Verificando se o arquivo foi aberto.
	{
		while(!arquivo.eof()) // Enquanto for diferente de eof(end of file) continue se repetindo.
		{
			arquivo.sync(); // Ignorando o caractere de quebra de linha que está no início de cada objeto.
			arquivo >> cerveja; // Utilizando a sobrecarga do operador >> para inicializar o objeto.
			CervejaUnidade.push_back(cerveja); // Adicionando o objeto a lista.
		}
	}
	arquivo.close(); //Fechando o arquivo de leitura.
}
/*
	CervejaLitro cl;
    ifstream arquivo1;
    arquivo1.open("EstoqueLitro.dat");

    if(arquivo.is_open()){ // Verificando se o arquivo foi aberto.

		while(!arquivo1.eof()){ // Enquanto for diferente de eof(end of file) continue se repetindo.
			arquivo1.ignore(); // Ignorando o caractere de quebra de linha que est� no in�cio de cada objeto.
			arquivo1 >> cl; // Utilizando a sobrecarga do operador >> para inicializar o objeto.
			CervejaL.push_back(cl); // Adicionando o objeto a lista.
		}
	}
	arquivo1.close();*/

bool Estoque :: PesquisarNomeUnd(string nome){
    unsigned n (0);
	for (unsigned i(0); i<CervejaUnidade.size( ); i++){
		if(CervejaUnidade[i].getNome( ) == nome){
			CervejaUnidade[i].Imprime( );
			return true;
		}
		else{
			n++;
		}
	}
	if(n == CervejaUnidade.size( )){
		return false;
	}
}

bool Estoque :: PesquisarNomeLitro(string nome){
	unsigned n (0);
	for (unsigned i(0); i<CervejaL.size( ); i++){
		if(CervejaL[i].getNome( ) == nome){
			CervejaL[i].Imprime( );
			return true;
		}
		else{
			n++;
		}
	}
	if(n == CervejaL.size( )){
		return false;
	}
}

bool Estoque :: PesquisarCodigoUnd(string codigo){
    unsigned c(0);
	for (unsigned i(0); i<CervejaUnidade.size( ); i++){
		if(CervejaUnidade[i].getCodigo( ) == codigo){
			CervejaUnidade[i].Imprime( );
			return true;
		}
		else{
			c++;
		}
	}
	if(c==CervejaUnidade.size( )){
		return false;
	}
}

bool Estoque :: PesquisarCodigoLitro(string codigo){
	unsigned c(0);
	for (unsigned i(0); i<CervejaL.size( ); i++){
		if(CervejaL[i].getCodigo( ) == codigo){
			CervejaL[i].Imprime( );
			return true;
		}
		else{
			c++;
		}
	}
	if(c==CervejaL.size( )){
		return false;
	}
}


// FUNCAO PARA GRAVAR A LISTA DE FUNCIONARIOS NO DOCUMENTO TEXTO
bool Estoque::SalvarUnd()
{
	ofstream arquivo; // Criando um arquivo para salvar a lista de objetos.

	/* Utilizando o modo de abertura trunc, que abre e apaga os dados anteriores armazenados nele. Como toda a lista
	foi carregada no vector se utilizassemos o modo de abertura app o arquivo iria ficar com objetos repetidos.*/
	arquivo.open("EstoqueUnidade.txt", std::ios::trunc);

	if(arquivo.is_open())
	{
		for(unsigned i(0); i < CervejaUnidade.size(); i++)
		{
			// Utilizando a sobrecarga do operador << para gravar o objeto no arquivo.
			arquivo << CervejaUnidade[i];
			arquivo << CervejaUnidade[i].getQntUnidade();
			arquivo << CervejaUnidade[i].getPValidade();
		}
		return true;
	}
	else
		return false;

	arquivo.close(); // fecha o arquivo
}

bool Estoque :: SalvarLitro( ){
	ofstream arquivo;
    arquivo.open("EstoqueLitro.txt", std::ios::trunc);

    if(arquivo.is_open()){
		for(unsigned i(0); i < CervejaL.size(); i++){
			// Utilizando a sobrecarga do operador << para gravar o objeto no arquivo.
			arquivo << CervejaL[i];
		}
		return true;
	}
	else{
		return false;
	}
	arquivo.close();
}


bool Estoque::InserirUnd(CervejaUnd c_u)
{
	int total = 0;
	int soma;
	for(unsigned i(0); i < CervejaUnidade.size(); i++)
	{
		// Verificando se já não existe uma cerveja na lista com o mesmo codigo.
		if(CervejaUnidade[i].getCodigo() == c_u.getCodigo()){
			for(unsigned j(0); j < CervejaUnidade.size(); j++){
				soma = CervejaUnidade[j].getQntUnidade( ) + c_u.getQntUnidade( );
				total += soma;
				c_u.setQntUnidade(total);
				cout<<"total: "<<c_u.getQntUnidade( )<<endl;
				//c_u.setCalculaEstoque(c_u.getQntUnidade( ));
				return false;
			}
		}
	}
	CervejaUnidade.push_back(c_u);
	return true;
}

bool Estoque :: InserirLitro(CervejaLitro c_l){
	for(unsigned i(0); i < CervejaL.size(); i++){
		// Verificando se j� n�o existe uma pessoa na lista com o mesmo CPF.
		if(CervejaL[i].getCodigo() == c_l.getCodigo()){
			return false;
		}
	}
	CervejaL.push_back(c_l);
	return true;
}

bool Estoque :: RetirarCodigoUnd(string codigo){
    unsigned c(0);
	for(unsigned i(0); i < CervejaUnidade.size(); i++){
		if(CervejaUnidade[i].getCodigo() == codigo){
			CervejaUnidade.erase(CervejaUnidade.begin() + i);
			return true;
		}
		else{
			c++;
		}
	}
	if(c == CervejaUnidade.size()){
		return false;
	}
}

bool Estoque :: RetirarCodigoLitro(string codigo){
	unsigned c(0);
	for(unsigned i(0); i < CervejaL.size(); i++){
		if(CervejaL[i].getCodigo() == codigo){
			CervejaL.erase(CervejaL.begin() + i);
			return true;
		}
		else{
			c++;
		}
	}
	if(c == CervejaL.size()){
		return false;
	}
}

bool Estoque :: EfetuarVendaUnd(string codigo, int quantidade){
    unsigned c(0);
	for(unsigned i(0); i < CervejaUnidade.size(); i++){
		if(CervejaUnidade[i].getCodigo() == codigo){
			CervejaUnidade.erase(CervejaUnidade.begin() + i);
            quantidade --;
			return true;
		}
		else{
			c++;
		}
	}
	if(c == CervejaUnidade.size()){
		return false;
	}
}

bool Estoque :: EfetuarVendaLitro(string codigo, float quantidade){
	unsigned c(0);
	for(unsigned i(0); i < CervejaL.size(); i++){
		if(CervejaL[i].getCodigo() == codigo){
			CervejaL.erase(CervejaL.begin() + i);
            quantidade --;
			return true;
		}
		else{
			c++;
		}
	}
	if(c == CervejaL.size()){
		return false;
	}
}

void Estoque :: ImprimeUnd( ){
    for(unsigned i(0); i < CervejaUnidade.size(); i++){
		cout << i+1 << " Dados da Cerveja: " << endl;
		CervejaUnidade[i].ImprimeUnidade( );
		cout << endl;
	}
}

void Estoque :: ImprimeLitro( ){
	for(unsigned i(0); i < CervejaL.size(); i++){
		cout << i+1 << "Dados da Cerveja: " << endl;
		CervejaL[i].Imprime( );
		cout << endl;
	}
}

void Estoque :: ImprimeNomeOrdenadoUnd( ){
    vector<string> aux(CervejaUnidade.size());// Criando um vector auxiliar para armazenar todos os nomes da lista

    for(unsigned i(0); i < CervejaUnidade.size(); i++){
		aux[i] = CervejaUnidade[i].getNome();
	}

	sort(aux.begin(), aux.end()); // Ordenado a lista auxiliar de nomes em ordem alfab�tica.

	// For�ando a impress�o dos objetos na mesma ordem dos nomes do vector auxiliar.
	unsigned contador(1);

	for(unsigned k(0); k < aux.size(); k++){
		for(unsigned i(0); i < CervejaUnidade.size(); i++){
			if(aux[k] == CervejaUnidade[i].getNome()){
				cout << contador << "Dados da Cerveja: " << endl;
				CervejaUnidade[i].Imprime( );
				cout << endl;
				contador++;
			}
		}
	}
}

void Estoque :: ImprimeNomeOrdenadoLitro( ){
	vector<string> aux(CervejaL.size());// Criando um vector auxiliar para armazenar todos os nomes da lista

    for(unsigned i(0); i < CervejaL.size(); i++){
		aux[i] = CervejaL[i].getNome();
	}

	sort(aux.begin(), aux.end()); // Ordenado a lista auxiliar de nomes em ordem alfab�tica.

	// For�ando a impress�o dos objetos na mesma ordem dos nomes do vector auxiliar.
	unsigned contador(1);

	for(unsigned k(0); k < aux.size(); k++){
		for(unsigned i(0); i < CervejaL.size(); i++){
			if(aux[k] == CervejaL[i].getNome()){
				cout << contador << "Dados da Cerveja: " << endl;
				CervejaL[i].Imprime( );
				cout << endl;
				contador++;
			}
		}
	}
}

void Estoque :: ImprimeQntOrdenadoUnd( ){
    vector<int> aux(CervejaUnidade.size());// Criando um vector auxiliar para armazenar todos os nomes da lista

    for(unsigned i(0); i < CervejaUnidade.size(); i++){
		aux[i] = CervejaUnidade[i].getQntUnidade();
	}

	sort(aux.begin(), aux.end()); // Ordenado a lista auxiliar de nomes em ordem alfab�tica.

	// For�ando a impress�o dos objetos na mesma ordem dos nomes do vector auxiliar.
	int contador = 1;

	for(unsigned k(0); k < aux.size(); k++){
		for(unsigned i(0); i < CervejaUnidade.size(); i++){
			if(aux[k] == CervejaUnidade[i].getQntUnidade()){
				cout << contador << "Dados da Cerveja: " << endl;
				CervejaUnidade[i].Imprime( );
				cout << endl;
				contador++;
			}
		}
	}
}

void Estoque :: ImprimeQntOrdenadoLitro( ){
	vector<float> aux(CervejaL.size());// Criando um vector auxiliar para armazenar todos os nomes da lista

    for(unsigned i(0); i < CervejaL.size(); i++){
		aux[i] = CervejaL[i].getQntLitro();
	}

	sort(aux.begin(), aux.end()); // Ordenado a lista auxiliar de nomes em ordem alfab�tica.

	// For�ando a impress�o dos objetos na mesma ordem dos nomes do vector auxiliar.
	int contador = 1;

	for(unsigned k(0); k < aux.size(); k++){
		for(unsigned i(0); i < CervejaL.size(); i++){
			if(aux[k] == CervejaL[i].getQntLitro()){
				cout << contador << "Dados da Cerveja: " << endl;
				CervejaL[i].Imprime( );
				cout << endl;
				contador++;
			}
		}
	}
}

Estoque :: ~Estoque( ){
    //SalvarUnd( );
	//SalvarLitro( );
	CervejaUnidade.clear(); // limpa o vector de objetos
}