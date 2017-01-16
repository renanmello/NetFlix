#ifndef NETFLIX_H
#define NETFLIX_H
#include "iostream"
using namespace std;

class NetFlix
{
    

public:
    NetFlix();
    ~NetFlix(int, const string &);
    NetFlix(const NetFlix &);
    
    void classificaFilme();
	void exibirDados();
private:
	int senha;
	string nome;
};

#endif // NETFLIX_H
