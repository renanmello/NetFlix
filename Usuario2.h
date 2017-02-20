#ifndef USUARIO2_H
#define USUARIO2_H
#include <iostream>
#include <string>

class Usuario2 : public NetFlix2
{
    friend ostream &operator<<(ostream &,const Usuario2 &);
public:
    Usuario2();
    ~Usuario2();
    Usuario2(const string &, const string &);
    Usuario2(const Usuario2 &);
    const Usuario2 &operator=(const Usuario2 &);
    bool operator==(const Usuario2 &);
    void exibirDados() const;
    void classificarFilmes();
    

};

#endif // USUARIO2_H
