#include "Data.h"
#include <iostream>

int mes,dia,ano;



Data::Data(){
    dia=01;
    mes=01;
    ano=00;
    }
Data::Data(int dia, int mes,int ano)
{
    this->dia=dia;
    this->ano=ano;
    this->mes=mes;
}

Data::~Data()
{
}

void Data::testarDia(){
    
    }
