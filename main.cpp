#include <iostream>
#include <string>
#include "Usuario2.h"
using std::cout;
using std::string;
int main (int argc, char *argv[])
{
 
    Usuario2 u=new Usuario2();
    
    u.NetFlix("renan@teste","renan");
    u.exibirDados(u);
    cout<<"olha mundo";
    
  return 0;
}