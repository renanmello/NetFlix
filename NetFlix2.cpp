#include "NetFlix2.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

string NetFlix2::regiao="Brasil";

NetFlix2::NetFlix2()
{
    senha="default";
    nome="default";
}

NetFlix2::~NetFlix2()
{
    delete [] listaDePessoas;
    delete [] listaDeFilmes;
}

NetFlix2::NetFlix2(const string &senha, const string &nome){
    this->senha=senha;
    this->nome=nome;
    }

const NetFlix2 &operator=(const NetFlix2 &net){
        this->senha=net.senha;
        this->nome=net.nome;
        
        }
        
        bool NetFlix2::operator==(const NetFlix2 &net){
             if(net.senha==0){
                 return false;
                 }else{
                     return true;
                     }
             }
             
             NetFlix2::NetFlix2(const NetFlix2 &net){
                 senha=net.senha;
                 nome=net.nome;
                 
                 }
                 
     ostream &operator<<(ostream &output, const NetFlix2 &net){
     output<<"Nome:"<<net.nome<<" senha:"<<net.senha;
     return output;
     }

 void NetFlix2::NetFlix2(const int nUsers, const int nFilmes){
     alocarUsuario(nUsers);
     alocarFilme(nFilmes);
     }
     
    void NetFlix2::alocarUsuario(const int nUsers){
         if(nUsers>0){
        listaDePessoas=new string[nUsers];
        quatPessoas=nUsers;
        cout<<"números de pessoas para cadastro";
        }else{
            cout<<"sem pessoas cadastradas";
            }
         }
         
         void NetFlix2::alocarFilme(const int nFilmes){
         if(nFilmes>0){
        listaDeFilmes=new string[nFilmes];
        quatFilmes=nFilmes;
        cout<<"números de filmes para cadastro";
        }else{
            cout<<"sem filmes no cadastro";
            }
         }
         
         void NetFlix2::cadastrarFilme(){
             
             for(int i=0,i<listaDeFilmes.lenght,i++){
                 
                 cout<<"digite o nome do "<<i<<"Filme";
                 cin>>nomeFilme;
                 
                 cout<<"Digite o tipo do filme";
                 cin>>tipoFilme;
                 
                 listaDeFilmes[i]=nomeFilme+"-"+tipoFilme;
                 }
                 
                 cout<<"Fim dos cadastros";
             
          
             }
             
             void NetFlix2::cadastrarUsuario(){
                 
                
                 for(int i=0,i<listaDePessoass.lenght,i++){
                 
                 cout<<"digite o nome do "<<i<<"Usuario";
                 cin>>nome;
                 
                 
                 cout<<"Digite a senha";
                 cin>>senha;
                 
                 cout<<"digite o email";
                 cin>>email;
                 
                 cout<<"digite o perfil";
                 cin>>perfil;
                 
                 
                 listaDePessoas[i]=nome+"-"+senha+"-"+email+"-"+perfil;
                 
                 
                 }
                 
                 }
             
      void NetFlix::exibirDados(){
          int resp;
          cout<<"qual dados deseja ?";
          cout<<"opção 1-filmes";
          cout<<"opcao 2-usuarios";
          cin>>resp;
          
          if(res==1){
              for(int i=0,i<listaDeFilmes.lenght,i++){
                  
                  cout<<listaDeFilmes[i];
                  }
                  
                  if(res==2){
                      for(int i=0,i<listaDePessoas.lenght,i++){
                  
                  cout<<listaDePessoas[i];
                  }
                      }
              
              }
          
          }        
     
     