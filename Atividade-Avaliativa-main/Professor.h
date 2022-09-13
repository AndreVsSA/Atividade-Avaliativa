#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <string>
using std::string;
#include "Pessoa.h"

class Professor:public Pessoa{

    private:

    string registro;

    public:
    Professor();
    Professor(string, string, string, string, string);
    
        
    
    
    string getRegistro()const;

    void setRegistro(const string);
    
    void toString();

};
#endif

