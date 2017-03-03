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
    const Streaming &operator=(const Streaming &);
    bool operator==(const Streaming &);
    void exibirDados() const;
    void pesquisarStr();
    void Streaming(const int);
    void alocarM(const int);
    string nome;
    const int id;
    
private:
    string *servicosStream;
    int quatStream;
    vector<string> streams; 
};

#endif // STREAMING_H
