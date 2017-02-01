#ifndef NETFLIX_H
#define NETFLIX_H
#include <iostream>
#include <string>
using namespace std;
using std::string;
class NetFlix
{
    
     friend ostream &operator<<(ostream &,const NetFlix &);
    
public:
    NetFlix();
    ~NetFlix();
    NetFlix(string, const string &);
    NetFlix(const NetFlix &);
    NetFlix()
    const NetFlix &operator=(const NetFlix &);
    
    void classificaFilme();
	void exibirDados() const;
    void alocarUsuario(const int);
private:
	string senha;
	string nome;
    static string regiao;
    int quatPessoas;
    string *nPessoas;
    
};

#endif // NETFLIX_H
