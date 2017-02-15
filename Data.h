#ifndef DATA_H
#define DATA_H

class Data : public NetFlix
{
public:
    Data();
    ~Data();
    Data(int, int ,int);
    Data(const Data &);
    
    void testarDia();
    void testarIdade();

private:

	int dia;
	int mes;
    int ano;
   
};

#endif // DATA_H
