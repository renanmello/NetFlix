#include "NetFlix.h"
#include "stdafx.h"
#include "iostream"
using std::cout;

int main()
{
	cout << "Ola mundo";
	system("pause");

	
	return 0;

}

NetFlix::NetFlix()
{
}

NetFlix::~NetFlix(int senha, const string &nome)
{
this->nome=nome;
this->senha=senha;
}

NetFlix::NetFlix( const Netflix &n)
{
    nome=n.nome;
    senha=n.senha;
    
    
}

void NetFlix::classificaFilme()
{

}

void NetFlix::exibirDados()
{
}


