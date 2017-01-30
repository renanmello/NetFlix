#include "NetFlix.h"
#include "Data.h"
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

void NetFlix::alocarUsuario( const int lista){
     
    if(lista>0){
        nPessoas=new string [lista];
        quatpessoas=lista;
        cout<<"Números de pessoas"<<quatPessoas;
        
        }else{
            nPessoas=0;
            quatPessoas=0;
            cout<<"Nenhuma pessoa cadastrada"<< endln;
            }
    }


