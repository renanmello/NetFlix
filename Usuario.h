#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <string>

class Usuario
{
public:
    Usuario();
    ~Usuario();
     
    NetFlix(const string &, const string &);
    NetFlix(const Usuario &);
    
    void exibirPerfil();
	void exibirDados(Usuario) const;
    void String getUsuario();
    void setUsuario(string, const string &);
    
private:
    String email;
    String perfil;
   

};

#endif // USUARIO_H
