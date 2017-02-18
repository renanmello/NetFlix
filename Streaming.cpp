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
    
    const Streaming &operator=(const Streaming &str){
        this->id=str.id;
        this->nome=str.nome;
        
        }
        
        bool Streaming::operator==(const Streaming &str){
             if(str.id==0){
                 return false;
                 }else{
                     return true;
                     }
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
    delete [] servicosStream;
}


void Streaming::Streaming(const int nstream){
     alocarStream(nstream);
    }
    
void Streaming::alocarStream(const int nstream){
    
    if(nstream>0){
        servicosStream=new string[nstream];
        quatStream=nstream;
        cout<<"números de streams para cadastro";
        }else{
            cout<<"sem stream";
            }
    
    }
