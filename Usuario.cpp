#include <iostream>
#include <string>
#include "Usuario.h"
using std::string;
Usuario::Usuario()
{
    email="";
    perfil="";
    }

Usuario::~Usuario()
{
        
}

Usuario::Usuario(const string &email,const string &perfil){
    this->email=email;
    this->perfil=perfil;
    
    }
Usuario::Usuario(const Usuario &u){
    email=u.email;
    perfil=u.perfil;  

      
    }
    
        
        Usuario::getUsuario(){
            return Usuario;
            }
Usuario::exibirDados(Usuario n){
    
    
    cout<<n.getUsuario();
    
     
    }

