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

ostream &operator<<(ostream &output,const Usuario &user){
    
    output<<"email:"<<user.email<<"perfil:"<<user.perfil;
    return output;
    }

Usuario::Usuario(const string &email,const string &perfil){
    this->email=email;
    this->perfil=perfil;
    
    }
    
    Usuario::operator=(const Usuario &user){      
        
        this->email=user.email;
        this->perfil=user.perfil;
        
    }
    
Usuario::Usuario(const Usuario &u){
    email=u.email;
    perfil=u.perfil;  

      
    }
    
        
      string  Usuario::getUsuario(){
            return Usuario;
            }
            
Usuario::exibirDados(Usuario n) const{
    
    
    cout<<n.getUsuario();
    
     
    }

