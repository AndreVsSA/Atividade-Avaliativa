#include "Turma.h"
#include "Aluno.h"
#ifndef ENTURMACAO_H
#define ENTURMACAO_H
#include <string>
using std::string;

class Enturmacao {
private:
int codigo;
Aluno aluno;
Turma turma;



public:
static int geracode;
    bool operator==(const Enturmacao& o) const;
    Enturmacao();
    Enturmacao(Turma , Aluno );
    Aluno getAluno();
    Turma getTurma();
    void setAluno(Aluno);
    void setTurma(Turma);
    void toString();
};
#endif