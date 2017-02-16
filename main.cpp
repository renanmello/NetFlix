#include <iostream>
#include <string>
#include "Usuario.h"
using std::cout;
using std::string;
int main (int argc, char *argv[])
{
 
    Usuario u=new Usuario();
    
    u.NetFlix("renan@teste","renan");
    u.exibirDados(u);
    cout<<"olha mundo";
    
  return 0;
}