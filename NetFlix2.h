#ifndef NETFLIX2_H
#define NETFLIX2_H
#include <iostream>
#include <string>

class NetFlix2 : public Streaming
{
    friend ostream &operator<<(ostream &,const NetFlix2 &);
public:
    NetFlix2();
    ~NetFlix2();

    NetFlix2(const string &, const string &);
    NetFlix2(const NetFlix2 &);
    const NetFlix2 &operator=(const NetFlix2 &);
    bool operator==(const NetFlix2 &);
    virtual void classificarFilmes();
    virtual void exibirDados() const;
    
protected:

    string senha;
	string nomeFilme;
    String tipoFilme;
    static string regiao;
    string *listaDeFilmes;
    bool like;
    string email;
    string perfil;
private:
	
    void alocarUsuario(const int);
    void alocarFilme(const int);
    void cadastrarFilme();
    void cadastrarUsuario();
    void NetFlix2(const int, const int);
    int quatPessoas;
    int quatFilmes;
    string *listaDePessoas;
    string *listaDeFilmes;
};

#endif // NETFLIX2_H
