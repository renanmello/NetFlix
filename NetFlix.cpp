#include "NetFlix.h"
#include "Data.h"
#include "Usuario.h"
#include <iostream>
#include <string>

using std::string;
using std::cin;


string NetFlix::regiao="Brasil";

ostream &operator<<(ostream &output,const NetFlix &net){
    
    output<<"Nome do filme:"<<net.nomeFilme<<"regiao:"<<net.regiao<<"senha:"<<net.senha;
    return output;
    }
    
    NetFlix::operator=(const NetFlix &net){      
        
        
        this->senha=net.senha;
        
    }
        
    bool NetFlix::operator ==(bool like) const{
        this->like=like;
        
        }


NetFlix::NetFlix()
{
    
    senha="1234";
}

NetFlix::~NetFlix()
{
  delete [] listaDePessoas;
  delete [] listaDeFilmes;
}

NetFlix::NetFlix(const string &senha)
{
this->senha=senha;
}

NetFlix::NetFlix( const NetFlix &n)
{
    nomeFilme=n.nomeFilme;
    senha=n.senha;
    
    
}

virtual void NetFlix::classificaFilme()
{

}

void NetFlix::cadastrarFilme(){
    
    for(int i=0;i<listaDeFilmes.lenght;i++){
        
        cout<<"digite o nome do filme";
        cin>>nomeFilme;
        cout<<"digite o tipo";
        cin>>tipoFilme;
        listaDeFilmes[i]=nomeFilme+"-"+tipoFilme;
        
        }
    
    }
void NetFlix::exibirDados() const
{
    cout<<nomeFilme;
    cout<<senha;
}

void NetFlix::alocarUsuario( const int nPessoas){
     
    if(nPessoas>0){
        listaDePessoas=new string [nPessoas];
        NetFlix::quatPessoas=nPessoas;
        cout<<"Números de pessoas que podem ser adicionadas"<<quatPessoas;
        
        }else{
            listaDePessoas=0;
            quatPessoas=0;
            cout<<"Nenhuma pessoa pode ser cadastrada";
            }
    }
void NetFlix::alocarFilme( const int nFilmes){
     
    if(nFilmes>0){
        listaDeFilmes=new string [nFilmes];
        NetFlix::quatFilmes=nFilmes;
        cout<<"Números de Filmes que podem ser adicionados"<<quatFilmes;
        
        }else{
            listaDeFilmes=0;
            quatFilmes=0;
            cout<<"Nenhum filme pode ser cadastrado";
            }
    }

