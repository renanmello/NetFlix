#ifndef NETFLIX_H
#define NETFLIX_H
#include <iostream>
#include <string>
using namespace std;

using std::string;

class NetFlix : public Streaming
{
    
     friend ostream &operator<<(ostream &,const NetFlix &);
     
public:
    NetFlix();
    ~NetFlix();
    NetFlix(const string &);
    NetFlix(const NetFlix &);
   
    const NetFlix &operator=(const NetFlix &);
    bool operator==(bool) const;
    virtual void classificaFilme();
	void exibirDados() const;
    
protected:

    string senha;
	string nomeFilme;
    string tipoFilme;
    static string regiao;
    string *listaDeFilmes;
    bool like;
private:
	
    void alocarUsuario(const int);
    void alocarFilme(const int);
    void cadastrarFilme();
    int quatPessoas;
    int quatFilmes;
    string *listaDePessoas;
    string *listaDeFilmes;
};

#endif // NETFLIX_H
