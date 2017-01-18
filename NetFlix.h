#ifndef NETFLIX_H
#define NETFLIX_H
#include "iostream"
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
	void exibirDados();
private:
	string senha;
	string nome;
    static string regiao;
};

#endif // NETFLIX_H
