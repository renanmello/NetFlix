#ifndef NETFLIX_H
#define NETFLIX_H
#include <iostream>
#include <string>
using namespace std;
using std::string;
class NetFlix
{
    

public:
    NetFlix();
    ~NetFlix();
    NetFlix(string, const string &);
    NetFlix(const NetFlix &);
    
    void classificaFilme();
    void apagarDados();
	void exibirDados() const;
    
private:
	string senha;
	string nome;
    int idade;
    static string regiao;
    static const int idadeMaxima;
    
};

#endif // NETFLIX_H
