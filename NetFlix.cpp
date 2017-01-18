#include "NetFlix.h"
#include "stdafx.h"
#include "iostream"
using std::cout;



NetFlix::NetFlix()
{
    nome="null";
    senha=1234;
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


