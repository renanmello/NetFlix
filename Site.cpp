#include "Site.h"
#include <iostream>
#include <string>
Site::Site()
{
    this->endereco="default";
    this->tipo="default";
}

 ostream &operator<<(ostream &output, const Site &sit){
     output<<"www."<<sit.endereco<<".com"<<" tipo:"<<sit.tipo;
     return output;
     }
     
     Site::Site(const string &endereco, const string &tipo){
         this->endereco=endereco;
         this->tipo=tipo;
         }
         
         Site::Site(const Site &si){
             endereco=si.endereco;
             tipo=si.tipo;
             }
Site::~Site()
{
}

