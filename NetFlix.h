#ifndef NETFLIX_H
#define NETFLIX_H
#include "iostream"
using namespace std;

class NetFlix
{
    private:
	int senha;
	string nome;

public:
    NetFlix();
    ~NetFlix();
    void classificaFilme();
	void exibirDados();

};

#endif // NETFLIX_H
