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
	void exibirDados() const;
private:
	string senha;
	string nome;
    static string regiao;
};

#endif // NETFLIX_H
