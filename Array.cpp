#include "Array.h"
#include <iostream>
Array::Array()
{
}

Array::~Array()
{
}

Array::Array(const Array &arrayToCopy):size(arrayToCopy.size){
    
    prt=new int[size];
    
    for(int i=0;i<size;i++){
        ptr[i]=arrayToCopy.ptr[i];
        }
    }
bool Array::operator ==(const Array &right) const{
    
    if(size!=right.size)
        return false;
    for(int i=0;i<size;i++)
      if(ptr[i]!=right.ptr[i])
         return false;
     return true;
         
    }
