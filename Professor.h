#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <string>
using std::string;
#include "Pessoa.h"

class Professor:public Pessoa{

    private:
    int codigo;
    string registro;

    public:
        static int indice;
        bool operator==(const Professor& o) const;
    Professor();
    Professor(string, string, string, string, string);
    string getRegistro()const;
    void setRegistro(const string);
    void toString();
    int getCodigo()const;
    

};
#endif

