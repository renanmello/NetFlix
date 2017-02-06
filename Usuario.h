#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <string>
using std::string

class Usuario
{
    friend ostream &operator<<(ostream &,const Usuario &);
public:
    Usuario();
    ~Usuario();
     
    Usuario(const string &, const string &);
    Usuario(const Usuario &);
    
    void exibirPerfil();
	void exibirDados(Usuario) const;
    void string getUsuario();
    
    
private:
    string email;
    string perfil;
   

}

#endif


