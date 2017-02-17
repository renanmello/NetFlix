#ifndef STREAMING_H
#define STREAMING_H

class Streaming : public Site
{
    friend ostream &operator<<(ostream &,const Streaming &);
    
public:
    Streaming();
    ~Streaming();
    Streaming(const string &, const int &);
    Streaming(const Streaming &);
    
    void dadosDeStr() const;
    void pesquisarStr();
    string nome;
    int id;
};

#endif // STREAMING_H
