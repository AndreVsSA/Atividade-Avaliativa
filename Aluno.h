#ifndef ALUNO_H
#define ALUNO_H
#include <string>
using std::string;
#include "Pessoa.h"

class Aluno: public Pessoa{
    private:
        string matricula;
    
        int codigo;
    public:
        static int indice;
        bool operator==(const Aluno& o) const;
        Aluno();
        Aluno(string, string, string, string, string);
        void setMatricula(const string);
        string getMatricula() const;
        void toString();
        int getCodigo() const;
        
};
#endif