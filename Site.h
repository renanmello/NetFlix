#ifndef SITE_H
#define SITE_H

class Site
{
public:
    Site();
    ~Site();
    Site(const string &, const string &);
    Site(const Site &);
    void dadosDoSite() const;
    void pesquisarS();
    
     string endereco;
private:
 string tipo;
};

#endif // SITE_H
