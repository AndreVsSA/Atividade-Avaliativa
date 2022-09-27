
#include "Professor.h"
#include "Aluno.h"
#ifndef TURMA_H
#define TURMA_H
#include <string>
using std::string;

class Turma {
private:
string materia,periodo;
int codigo;

public:
    static int indice;

    Turma();
    Turma(string,string,string);
    string getMateria()const;
    string getPeriodo()const;
    int getCodigo()const;
    void setMateria(const string);
    void setPeriodo(const string);
    void setCodigo(const string);
    void toString();
    bool operator==(const Turma& o) const;
};
#endif