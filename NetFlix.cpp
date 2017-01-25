#include "NetFlix.h"
#include <iostream>
#include <string>
using std::cout;
using std::string;


string NetFlix::regiao="Brasil";
int NetFlix::idadeMaxima=120;

NetFlix::NetFlix()
{
    nome="";
    senha="1234";
    idade=18;
}

NetFlix::~NetFlix()
{

}

NetFlix::NetFlix(string senha, const string &nome, int idade)
{
this->nome=nome;
this->senha=senha;
idade=idade;
}

NetFlix::NetFlix( const Netflix &n)
{
    nome=n.nome;
    senha=n.senha;
    idade=n.idade;
    
    
}

 void NetFlix::classificaFilme()
{

}

void NetFlix::exibirDados() const
{
    cout<<nome;
    cout<<senha;
}

void NetFlix::apagarDados(){
    
    }

