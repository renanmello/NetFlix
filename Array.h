#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <string>

using std::cout
using std::string;
class Array
{
    
    friend ostream &operator<<(ostream &, Array &);
    
public:
    Array(int=10);
    Array(const Array &);
    ~Array();
    int getSize() const;
    const Array &operator=(cons Array &);
    bool operator==(const Array &) const;
    
    bool operator!=(const Array &right) const{
        
        return !=(*this==right);
        }
        
        int &operator[](int);
        int operator[](int) const;
private:
        int size;
        int *ptr;
};

#endif // ARRAY_H
