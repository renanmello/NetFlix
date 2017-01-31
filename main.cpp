#include <iostream>
#include <string>


int main (int argc, char *argv[])
{
 
    Usuario u=new Usuario();
    
    u.NetFlix("renan@teste","renan");
    u.exibirDados(u);
    
  return 0;
}