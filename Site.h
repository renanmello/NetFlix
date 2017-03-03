#ifndef SITE_H
#define SITE_H
#include <iostream>
#include <string>
using std::string;
class Site
{
    friend ostream &operator<<(ostream &,const Site &);
    
public:
    Site();
    ~Site();
    Site(const string &, const string &);
    Site(const Site &);
    const Site &operator=(const Site &);
    bool operator==(const Site &);
    virtual void exibirDados() const = 0;
    void pesquisarS();
    void Site(const int);
    void alocarSites(const int);
     string endereco;
private:
 string tipo;
 string *listaSites;
 int quatSites;
};

#endif // SITE_H
