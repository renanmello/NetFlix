#ifndef USUARIO_H
#define USUARIO_H

class Usuario
{
public:
    Usuario();
    ~Usuario();
     
    NetFlix(const string &, const string &);
    NetFlix(const Usuario &);
    
    void exibirPerfil();
	void exibirDados() const;
    void string getUsuario();
    void setUsuario(string, const string &);
    
private:
    string email;
    string perfil;
    

};

#endif // USUARIO_H
