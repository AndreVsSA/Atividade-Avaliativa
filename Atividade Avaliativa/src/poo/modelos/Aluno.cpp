#include <iostream>
using namespace std;

#include "Aluno.h"


 
    Aluno::Aluno()
    {

    }

    Aluno::Aluno(string _matricula, string _cpf, string _nome, string _telefone, string _email)
    {
        matricula = _matricula;
        cpf = _matricula;
        nome = _matricula;
        telefone = _matricula;
        email = _matricula; 
    }

    string Aluno::getMatricula()const
    {
    return matricula;
    }

    void Aluno::setMatricula(string _matricula)
    {
        matricula = _matricula;
    }


