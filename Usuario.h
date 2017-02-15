#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <string>
using namespace std;
using std::string;

class Usuario : public NetFlix
{
    friend ostream &operator<<(ostream &,const Usuario &);
public:
    Usuario();
    ~Usuario();
     
    Usuario(const string &, const string &);
    Usuario(const Usuario &);
    
    Usuario &operator=(const Usuario &);
    void exibirPerfil();
	void exibirDados(Usuario) const;
    string getUsuario();
    
    
private:
    string email;
    string perfil;
   

}

#endif


