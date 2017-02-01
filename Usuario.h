#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <string>
using std::string

class Usuario
{
public:
    Usuario();
    ~Usuario();
     
    Usuario(const string &, const string &);
    Usuario(const Usuario &);
    
    void exibirPerfil();
	void exibirDados(Usuario) const;
    void String getUsuario();
    
    
private:
    String email;
    String perfil;
   

};

#endif // USUARIO_H
