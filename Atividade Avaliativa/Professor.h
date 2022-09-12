#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <string>
using std::string;
#include "Pessoa.h"

class Professor:public Pessoa{

    private:

    int registro;

    public:
    
    int getRegistro()const;

    void setRegistro(const int);
    
    void toString();

};
#endif

