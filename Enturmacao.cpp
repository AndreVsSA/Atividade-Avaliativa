#include <iostream>
using namespace std;
#include "Turma.h"
#include "Enturmacao.h"
#include "Aluno.h"

Enturmacao::Enturmacao(){}
Enturmacao::Enturmacao(Turma turma, Aluno aluno) {
        codigo = ++geracode;
        this->turma = turma;
        this->aluno = aluno;
    }
    Aluno Enturmacao::getAluno() {
        return aluno;
    }

    void Enturmacao::setAluno(Aluno aluno) {
        this->aluno = aluno;
    }
    Turma Enturmacao::getTurma() {
        return turma;
    }

    void Enturmacao::setTurma(Turma turma) {
        this->turma = turma;
    }
    void Enturmacao::toString(){
        Aluno::toString;
        cout<<"\n";
        Turma::toString;
    }
