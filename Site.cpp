#include "Site.h"
#include <iostream>
#include <string>
using std::string;
Site::Site()
{
    this->endereco="default";
    this->tipo="default";
}

 ostream &operator<<(ostream &output, const Site &sit){
     output<<"www."<<sit.endereco<<".com"<<" tipo:"<<sit.tipo;
     return output;
     }
     const Site &operator=(const Site &sit){
         this->endereco=sit.endereco;
         this->tipo=sit.tipo;
         }
         
         bool Site::operator==(const Site &sit){
             if(sit.endereco==NULL){
                 return false;
                 }else{
                     return true;
                     }
             }
     Site::Site(const string &endereco, const string &tipo){
         this->endereco=endereco;
         this->tipo=tipo;
         }
         
         Site::Site(const Site &si){
             endereco=si.endereco;
             tipo=si.tipo;
             }
Site::~Site()
{
    delete [] listaSites;
}

void Site::Site(const int nsites){
     alocarSites(nsites);
    }
    
void Site::alocarSites(const int nsites){
    
    if(nsites>0){
        listaSites=new string[nsites];
        quatSites=nsites;
        cout<<"números de sites para cadastro";
        }else{
            cout<<"sem site";
            }
    
    }
