#include <iostream>
#include <string>
#include <vector>
#include "Usuario2.h"
#include "Data.h"
#include "Streaming.h"
#include "Site.h"
#include "NetFlix2"

using std::cout;
using std::string;
int main (int argc, char *argv[])
{
 
    NetFlix2 net=new NetFlix2();
    net.alocarM(5);
    net.cadastrarUsuario;
    
    //usando vector

    vector<NetFlix2*>usuarios(5);
    usuarios[0]=new NetFlix2("renan","1234"); 
    usuarios[1]=new Streaming("01","netflix");
    usuarios[2]=new NetFlix2("jose","1234"); 
    usuarios[3]=new Streaming("02","Amazon"); 
    usuarios[4]=new Usuario("jose@gmail.com","admin");

   for(size_t i=0;i<usuarios.size();i++){
       
       usuarios[i]->exibirDados();
       } 
    
    for ( size_t j = 0; j < usuarios.size(); j++ )
70     {
71                                
72        cout << "deletando objeto da posição:"                  
73           << typeid( *usuarios[ j ]) << endl;
74
75        delete usuarios[ j ];
76     } // end for
    
  return 0;
}