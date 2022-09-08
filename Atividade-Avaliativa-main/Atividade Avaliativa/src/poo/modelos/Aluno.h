#ifndef ALUNO_H
#define ALUNO_H
#include <string>
using std::string;
#include "Pessoa.h"

class Aluno:public Pessoa{
    private:
    string matricula;
    public:
    
    Aluno();

    Aluno(string);
       
    void setMatricula(const string);
    string getMatricula()const;

};
#endif