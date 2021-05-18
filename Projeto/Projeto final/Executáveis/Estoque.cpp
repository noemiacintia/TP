#include "Estoque.h"
#include "Sobrecarga.h"

// construtor para inicializar os arquivos de unidade e litro
Estoque::Estoque(){
    CervejaUnd cerveja;
	ifstream arquivo; // Criando um arquivo apenas para leitura
	arquivo.open("EstoqueUnidade.txt"); // Abrindo o arquivo de leitura

	if(arquivo.is_open()) // Verificando se o arquivo foi aberto
	{
		while(!arquivo.eof()) // Enquanto for diferente de eof(end of file) continue se repetindo
		{
			arquivo.sync(); // Ignorando o caractere de quebra de linha que está no início de cada objeto
			arquivo >> cerveja; // Utilizando a sobrecarga do operador >> para inicializar o objeto
			CervejaUnidade.push_back(cerveja); // Adicionando o objeto ao vetor
		}
	}
	arquivo.close(); //Fechando o arquivo de leitura


	CervejaLitro cl;
    ifstream arquivo1;
    arquivo1.open("EstoqueLitro.txt");

    if(arquivo1.is_open()){ // Verificando se o arquivo foi aberto

		while(!arquivo1.eof()){ // Enquanto for diferente de eof(end of file) continue se repetindo

			arquivo1.sync(); // Ignorando o caractere de quebra de linha que está no início de cada objeto.
			arquivo1 >> cl; // Utilizando a sobrecarga do operador >> para inicializar o objeto.
			CervejaL.push_back(cl); // Adicionando o objeto ao vetor
		}
	}
	arquivo1.close(); //Fechando o arquivo de leitura
}

// método para inserir produto no vetor
bool Estoque::InserirUnd(CervejaUnd c_u)
{
	for(unsigned i(0); i < CervejaUnidade.size(); i++)
	{
		// Verificando se já existe uma cerveja no vetor com o mesmo codigo
        if(CervejaUnidade[i].getCodigo() == c_u.getCodigo())
			return false;
	}
	// caso não haja cerveja com o mesmo codigo adiciona ao vetor um novo produto
	CervejaUnidade.push_back(c_u);
	return true;
}


bool Estoque :: InserirLitro(CervejaLitro c_l){
	for(unsigned i(0); i < CervejaL.size(); i++){
		// Verificando se já existe uma cerveja no vetor com o mesmo codigo
		if(CervejaL[i].getCodigo() == c_l.getCodigo()){
			return false;
		}
	}
	// caso não haja cerveja com o mesmo codigo adiciona ao vetor um novo produto
	CervejaL.push_back(c_l);
	return true;
}

// adicionando quantidade ao estoque de um produto já existente
bool Estoque :: AdicionarQntUnd (int qntUnidade, string codigo){
	for(unsigned i(0); i < CervejaUnidade.size(); i++){
		if(CervejaUnidade[i].getCodigo() == codigo){
		    // pegando a quantidade em certa posição do vetor, somando com a quantidade que quer adicionar
		    // e atribuindo a quantidade de unidades daquele produto
            CervejaUnidade[i].setQntUnidade(CervejaUnidade[i].getQntUnidade( )+qntUnidade);
			return true;
		}
	}
	return false;
}

// adicionando quantidade ao estoque de um produto já existente
bool Estoque :: AdicionarQntL (int qntLitro, string codigo){
	for(unsigned i(0); i < CervejaL.size(); i++){
		if(CervejaL[i].getCodigo() == codigo){
            // pegando a quantidade em certa posição do vetor, somando com a quantidade que quer adicionar
		    // e atribuindo a quantidade de litros daquele produto
			CervejaL[i].setQntLitro(CervejaL[i].getQntLitro( )+qntLitro);
			return true;
		}
	}
	return false;
}

// pesquisando produtos por nome e imprimindo o produto procurado
bool Estoque :: PesquisarNomeUnd(string nome){
    unsigned n(0);
	for (unsigned i(0); i<CervejaUnidade.size( ); i++){
		if(CervejaUnidade[i].getNome( ) == nome){
			CervejaUnidade[i].ImprimeUnidade( );
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

// pesquisando produtos por nome e imprimindo o produto procurado
bool Estoque :: PesquisarNomeLitro(string nome){
	unsigned n (0);
	for (unsigned i(0); i<CervejaL.size( ); i++){
		if(CervejaL[i].getNome( ) == nome){
			CervejaL[i].ImprimeLitro( );
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

// pesquisando produtos por codigo e imprimindo o produto procurado
bool Estoque :: PesquisarCodigoUnd(string codigo){
    unsigned c(0);
	for (unsigned i(0); i<CervejaUnidade.size( ); i++){
		if(CervejaUnidade[i].getCodigo( ) == codigo){
			CervejaUnidade[i].ImprimeUnidade( );
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

// pesquisando produtos por codigo e imprimindo o produto procurado
bool Estoque :: PesquisarCodigoLitro(string codigo){
	unsigned c(0);
	for (unsigned i(0); i<CervejaL.size( ); i++){
		if(CervejaL[i].getCodigo( ) == codigo){
			CervejaL[i].ImprimeLitro( );
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

// retirando produtos unidade por código
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

// retirando produtos litro por código
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

// método para salvar no arquivo nosso vetor de objetos
bool Estoque::SalvarUnd()
{
	ofstream arquivo; // Criando um arquivo para salvar o vetor de objetos.

	/* Utilizando o modo de abertura trunc, que abre e apaga os dados anteriores armazenados nele. Como toda a lista
	foi carregada no vector se utilizassemos o modo de abertura app o arquivo iria ficar com objetos repetidos.*/
	arquivo.open("EstoqueUnidade.txt", std::ios::trunc);

	if(arquivo.is_open())
	{
		for(unsigned i(0); i < CervejaUnidade.size(); i++)
		{
			// Utilizando a sobrecarga do operador << para gravar o objeto no arquivo.
			arquivo << CervejaUnidade[i];
			arquivo << CervejaUnidade[i].getQntUnidade() << endl; // gravando a quantidade e o prazo de validade
                                                                    // que são de outra classe no arquivo
			arquivo << CervejaUnidade[i].getPValidade() << endl;
		}
		return true;
	}
	else
		return false;

	arquivo.close(); // fechando o arquivo
}

bool Estoque :: SalvarLitro( ){
	ofstream arquivo;
    arquivo.open("EstoqueLitro.txt", std::ios::trunc);

    if(arquivo.is_open()){
		for(unsigned i(0); i < CervejaL.size(); i++){
			// Utilizando a sobrecarga do operador << para gravar o objeto no arquivo
			arquivo << CervejaL[i];
			arquivo << CervejaL[i].getQntLitro() << endl; // gravando a quantidade e o prazo de validade
                                                                    // que são de outra classe no arquivo
			arquivo << CervejaL[i].getPValidade() << endl;
		}
		return true;
	}
	else
		return false;
	arquivo.close(); // fechando o arquivo
}

// método para efetuar a venda
bool Estoque :: EfetuarVendaUnd(string codigo, int quantidade){
    for(unsigned i(0); i < CervejaUnidade.size(); i++){
		if(CervejaUnidade[i].getCodigo() == codigo){
            if(CervejaUnidade[i].getQntUnidade()==quantidade){
                // caso a quantidade que tem no estoque seja igual ao que o cliente quer
                // apaga produto
                CervejaUnidade.erase(CervejaUnidade.begin() + i);
                cout << fixed << setprecision(2);
                cout << "Total a pagar: R$" << CervejaUnidade[i].getPreco()*quantidade << endl;
                // imprimindo as regras no ato da venda
                RegraManipulacao();
                RegraTransporte();
                return true;
            }
            else if(CervejaUnidade[i].getQntUnidade()>quantidade){
                // caso a quantidade que tem no estoque seja maior ao que o cliente quer
                // remove a quantidade que o cliente quer da quantidade do estoque
                CervejaUnidade[i].setQntUnidade(CervejaUnidade[i].getQntUnidade( )- quantidade);
                cout << fixed << setprecision(2);
                cout << "Total a pagar: R$" << CervejaUnidade[i].getPreco()*quantidade << endl;
                // imprimindo as regras no ato da venda
                RegraManipulacao();
                RegraTransporte();
                return true;
            }
            else{
                // caso a quantidade que o cliente queira seja maior que a quantidade existente no estoque
                cout << "Quantidade insuficiente para venda." << endl;
                return true;
            }
		}
	}
	return false;
}

// método para efetuar a venda
bool Estoque :: EfetuarVendaLitro(string codigo, float quantidade){
    for(unsigned i(0); i < CervejaL.size(); i++){
		if(CervejaL[i].getCodigo() == codigo){
            if(CervejaL[i].getQntLitro()==quantidade){
                // caso a quantidade que tem no estoque seja igual ao que o cliente quer
                // apaga produto
                CervejaL.erase(CervejaL.begin() + i);
                cout << fixed << setprecision(2);
                cout << "Total a pagar: R$" << CervejaL[i].getPreco()*quantidade << endl;
                cout << "OBRIGATÓRIO TRAZER O RECIPIENTE!" << endl;
                // imprimindo as regras no ato da venda
                RegraManipulacao();
                RegraTransporte();
                return true;
            }
            else if(CervejaL[i].getQntLitro()>quantidade){
                // caso a quantidade que tem no estoque seja maior ao que o cliente quer
                // remove a quantidade que o cliente quer da quantidade do estoque
                CervejaL[i].setQntLitro(CervejaL[i].getQntLitro( )- quantidade);
                cout << fixed << setprecision(2);
                cout << "Total a pagar: R$" << CervejaL[i].getPreco()*quantidade << endl;
                cout << "OBRIGATÓRIO TRAZER O RECIPIENTE!" << endl;
                // imprimindo as regras no ato da venda
                RegraManipulacao();
                RegraTransporte();
                return true;
            }
            else{
                // caso a quantidade que o cliente queira seja maior que a quantidade existente no estoque
                cout << "Quantidade insuficiente para venda." << endl;
                return true;
            }
		}
	}
	return false;
}

// imprimindo objetos do vetor unidade
void Estoque :: ImprimeUnd( ){
    for(unsigned i(0); i < CervejaUnidade.size(); i++){
		cout << i+1 << " Dados da Cerveja: " << endl;
		CervejaUnidade[i].ImprimeUnidade( );
		cout << endl;
	}
}

// imprimindo objetos do vetor litro
void Estoque :: ImprimeLitro( ){
	for(unsigned i(0); i < CervejaL.size(); i++){
		cout << i+1 << "Dados da Cerveja: " << endl;
		CervejaL[i].ImprimeLitro( );
		cout << endl;
	}
}

// imprimindo objetos do vetor unidade ordenado por nome
void Estoque :: ImprimeNomeOrdenadoUnd( ){
    vector<string> aux(CervejaUnidade.size());// Criando um vector auxiliar para armazenar todos os produtos do vetor

    for(unsigned i(0); i < CervejaUnidade.size(); i++){
		aux[i] = CervejaUnidade[i].getNome();
	}

	sort(aux.begin(), aux.end()); // Ordenando a lista auxiliar de produtos por ordem alfabética

	// Forçando a impressão dos objetos na mesma ordem dos nomes do vector auxiliar.
	unsigned contador(1);

	for(unsigned k(0); k < aux.size(); k++){
		for(unsigned i(0); i < CervejaUnidade.size(); i++){
			if(aux[k] == CervejaUnidade[i].getNome()){
				cout << contador << "Dados da Cerveja: " << endl;
				CervejaUnidade[i].ImprimeUnidade( );
				cout << endl;
				contador++;
			}
		}
	}
}

// imprimindo objetos do vetor litro ordenado por nome
void Estoque :: ImprimeNomeOrdenadoLitro( ){
	vector<string> aux(CervejaL.size()); // Criando um vector auxiliar para armazenar todos os produtos do vetor

    for(unsigned i(0); i < CervejaL.size(); i++){
		aux[i] = CervejaL[i].getNome();
	}

	sort(aux.begin(), aux.end()); // Ordenando a lista auxiliar de produtos por ordem alfabética


	// Forçando a impressão dos objetos na mesma ordem dos nomes do vector auxiliar.
	unsigned contador(1);

	for(unsigned k(0); k < aux.size(); k++){
		for(unsigned i(0); i < CervejaL.size(); i++){
			if(aux[k] == CervejaL[i].getNome()){
				cout << contador << "Dados da Cerveja: " << endl;
				CervejaL[i].ImprimeLitro( );
				cout << endl;
				contador++;
			}
		}
	}
}

// imprimindo objetos do vetor litro ordenado por quantidade
void Estoque :: ImprimeQntOrdenadoUnd( ){
    vector<int> aux(CervejaUnidade.size()); // Criando um vector auxiliar para armazenar todos os produtos do vetor

    for(unsigned i(0); i < CervejaUnidade.size(); i++){
		aux[i] = CervejaUnidade[i].getQntUnidade();
	}

	 sort(aux.begin(), aux.end(), greater<int>()); // Ordenando a lista auxiliar de produtos por ordem crescente

	// Forçando a impressão dos objetos na mesma ordem das quantidades do vector auxiliar.
	int contador = 1;

	for(unsigned k(0); k < aux.size(); k++){
		for(unsigned i(0); i < CervejaUnidade.size(); i++){
			if(aux[k] == CervejaUnidade[i].getQntUnidade()){
				cout << contador << "Dados da Cerveja: " << endl;
				CervejaUnidade[i].ImprimeUnidade( );
				cout << endl;
				contador++;
			}
		}
	}
}

// imprimindo objetos do vetor litro ordenado por quantidade
void Estoque :: ImprimeQntOrdenadoLitro( ){
	vector<float> aux(CervejaL.size()); // Criando um vector auxiliar para armazenar todos os produtos do vetor

    for(unsigned i(0); i < CervejaL.size(); i++){
		aux[i] = CervejaL[i].getQntLitro();
	}

	sort(aux.begin(), aux.end(), greater<int>()); // Ordenando a lista auxiliar de produtos por ordem crescente

	// Forçando a impressão dos objetos na mesma ordem das quantidades do vector auxiliar.
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

// regras de manipulação do nosso produto
void Estoque :: RegraManipulacao( ){
    cout<< endl << "============== REGRA DE MANIPULAÇÃO! ==============="<<endl<<endl;
    cout<<"> Coloque cada garrafa de cerveja num saco de plástico hermético;"<<endl;
    cout<<"> Envolva cada uma com plástico-bolha ou espuma para garantir que estejam seguras;"<<endl;
    cout<<"> Se for um pack de cerveja, proteja o pacote inteiro com plástico-bolha;"<<endl;
    cout<<"> Coloque as cervejas numa caixa de cartão já acolchoada com materiais de amortecimento;"<<endl;
    cout<<"> Preencha os espaços vazios com mais granulado de esferovite ou outro material;"<<endl;
    cout<<"> Feche e sele a caixa. Pode também adicionar uma etiqueta de “Frágil”."<<endl;
}

// regras de transporte do nosso produto
void Estoque :: RegraTransporte( ){
    cout<< endl << "============== REGRA DE TRANSPORTE! ==============="<<endl<<endl;
    cout<<"> Contar com instalações adequadas do local onde a bebida é fabricada;"<<endl;
    cout<<"> Realizar a higienização e manipulação correta dos ingredientes;"<<endl;
    cout<<"> manejo de resíduos;"<<endl;
    cout<<"> Seleção da matéria prima e embalagens;"<<endl;
    cout<<"> Rotulagem;"<<endl;
    cout<<"> Boas práticas protegem quem consome as cervejas."<<endl << endl;
}

// destrutor
Estoque :: ~Estoque( ){
	CervejaUnidade.clear(); // limpa o vector de objetos
	CervejaL.clear();
}
