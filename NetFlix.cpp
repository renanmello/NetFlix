#include "NetFlix.h"
#include "Data.h"
#include "Usuario.h"
#include <iostream>
#include <string>

using std::string;
using std::endln;

string NetFlix::regiao="Brasil";

ostream &operator<<(ostream &output,const NetFlix &net){
    
    output<<"Nome:"<<net.nome<<"regiao:"<<net.regiao<<"senha:"<<net.senha;
    return output;
    }
    
    const NetFlix::operator =(const NetFlix &net){      
        
        this->nome=net.nome;
        this->senha=net.senha;
        
    }
        }

NetFlix::NetFlix()
{
    nome="";
    senha="1234";
}

NetFlix::~NetFlix()
{
  delete [] listaDePessoas;
}

NetFlix::NetFlix(string senha, const string &nome)
{
this->nome=nome;
this->senha=senha;
}

NetFlix::NetFlix( const NetFlix &n)
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

void NetFlix::alocarUsuario( const int nPessoas){
     
    if(nPessoas>0){
        listaDePessoas=new string [nPessoas];
        quatpessoas=nPessoas;
        cout<<"Números de pessoas que podem ser adicionadas"<<quatPessoas;
        
        }else{
            listaDePessoas=0;
            quatPessoas=0;
            cout<<"Nenhuma pessoa pode ser cadastrada"<< endln;
            }
    }


