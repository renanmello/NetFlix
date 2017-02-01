#include <iostream>
#include <string>
#include "Usuario.h"
using std::cout;
int main (int argc, char *argv[])
{
 
    Usuario u=new Usuario();
    
    u.NetFlix("renan@teste","renan");
    u.exibirDados(u);
    cout<<"olha mundo"<<endln;
    
  return 0;
}