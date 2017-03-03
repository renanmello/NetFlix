#include <iostream>
#include <string>
#include "Usuario2.h"
#include "Data.h"
using std::cout;
using std::string;
int main (int argc, char *argv[])
{
 
    Usuario2 u=new Usuario2();
    Data data=new Data();
    
    
    u.NetFlix("renan@teste","renan");
    u.exibirDados(u);
    cout<<"olha mundo";
    
  return 0;
}