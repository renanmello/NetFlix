#include <iostream>
#include <string>
#include "Usuario.h"

int main (int argc, char *argv[])
{
 
    Usuario u=new Usuario();
    
    u.NetFlix("renan@teste","renan");
    u.exibirDados(u);
    
  return 0;
}