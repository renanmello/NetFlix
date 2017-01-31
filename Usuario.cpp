#include <iostream>
#include <string>
#include "Usuario.h"
#include "NetFlix/NetFlix.h"
Usuario::Usuario()
{
    email="";
    perfil="";
    }

Usuario::~Usuario(const string &perfil, const string &nome)
{
    this->email=email;
    this->perfil=perfil;
}
Usuario::Usuario(const Usuario &u){
    email=u.email;
    perfil=u.perfil;  

      
    }
    Usuario::setUsuario(string perfil, const string &email){
        this->email=email;
        this->perfil=perfil;
        
        }
        
        Usuario::getUsuario(){
            
            return Usuario;
            }
Usuario::exibirDados(Usuario n){
    
    
    cout<<n.getUsuario();
    
     
    }

