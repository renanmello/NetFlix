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

NetFlix::~NetFlix(int idade, const string &nome)
{
this->nome=nome;
this->idade=idade;
}

void NetFlix::classificaFilme()
{

}

void NetFlix::exibirDados()
{
}


