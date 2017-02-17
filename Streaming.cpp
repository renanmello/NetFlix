#include "Streaming.h"

Streaming::Streaming()
{
    this->nome="default";
    this->id=0;
}

Streaming::Streaming(const string &id, const int &nome){
    this->nome=nome;
    this->id=id;
    
    }
    
    Streaming::Streaming(const Streaming &str){
        id=str.id;
        nome=str.nome;
        }
    
ostream &operator<<(ostream &output, const Streaming &str){
     output<<"Nome:"<<str.nome<<" id:"<<str.id;
     return output;
     }
Streaming::~Streaming()
{
}

