#include "NetFlix.h"

#include <iostream>
#include <string>

using std::string;
using std::endln;

string NetFlix::regiao="Brasil";

NetFlix::NetFlix()
{
    nome="";
    senha="1234";
}

NetFlix::~NetFlix()
{

}

NetFlix::NetFlix(string senha, const string &nome)
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

void NetFlix::exibirDados() const
{
    cout<<nome<<endln;
    cout<<senha<<endln;
}


