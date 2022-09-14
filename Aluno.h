#ifndef ALUNO_H
#define ALUNO_H
#include <string>
using std::string;
#include "Pessoa.h"

class Aluno: public Pessoa{
    private:
        string matricula, cpf, nome, telefone, email;
    static int index;
        int codigo;
    public:
        Aluno();
        Aluno(string, string, string, string, string);
        void setMatricula(const string);
        string getMatricula() const;
        void toString();
        void registrar(const int);
        
};
#endif