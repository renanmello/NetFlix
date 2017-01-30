#ifndef DATA_H
#define DATA_H

class Data
{
public:
    Data();
    ~Data();
    Data(int, int ,int);
    Data(const Data &);
    
    void testarAno();
    void testarIdade();

private:

	int dia;
	int mes;
    int ano;
   
};

#endif // DATA_H
