#include <iostream>
#include <string>
#include "Usuario.h"
#include "NetFlix/NetFlix.h"
Usuario::Usuario()
{
    email="";
    perfil="";
    }

Usuario::~Usuario(const string &email, const string &nome)
{
    this->email=email;
    this->perfil=perfil;
}
Usuario::Usuario(const Usuario &u){
    email=u.email;
    perfil=u.perfil;  

      
    }


